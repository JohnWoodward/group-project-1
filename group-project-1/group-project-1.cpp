// Soln from chegg to help us set up our codes.
#include <stdafx.h> // i added this library because it was missing. -gina
#include <iostream>
#include <cstring>

using namespace std;

void addElement(int* &arr, int &size, int &capacity, bool ascending);

void deleteElement(int* &arr, int &size, int &capacity);

void printElements(int *arr, int &size);

void resize(int* &arr, int size, int &capacity, int newCapacity);

void sort(int *arr, int size, bool ascending);

void shiftRight(int *arr, int size, int index); //elements starting from index to size-1 are shifted one position right

void shiftLeft(int *arr, int size, int index);//elements starting from index to size-1 are shifted one position left

int main()

{

	int size = 0;

	int capacity = 2;

	int* arr = new int[capacity];

	bool ascending = true;

	int choice = 0;

	while (choice != 6)

	{

		cout << "1. Print elements" << endl;

		cout << "2. Add element" << endl;

		cout << "3. Delete element" << endl;

		cout << "4. Return size" << endl;

		if (ascending)

			cout << "5. Descend" << endl;

		else

			cout << "5. Ascend" << endl;

		cout << "6. Exit" << endl;

		cout << "Enter your choice: ";

		cin >> choice;

		switch (choice)

		{

		case 1:

			printElements(arr, size);

			break;

		case 2:

			addElement(arr, size, capacity, ascending);

			break;

		case 3:

			deleteElement(arr, size, capacity);

			break;

		case 4:

			cout << "Array size = " << size << ", capacity = " << capacity << endl;

			break;

		case 5:

			ascending = !ascending;

			sort(arr, size, ascending);

			cout << "The sorted elements are " << endl;

			printElements(arr, size);

			break;

		case 6:

			delete[] arr;

			arr = NULL;

			break;

		default:

			cout << "Invalid choice!" << endl;

		}

	}

	return 0;

}

void addElement(int* &arr, int &size, int &capacity, bool ascending)

{

	int value;

	cout << "Enter the value to be inserted: ";

	cin >> value;

	if (size == capacity)

		resize(arr, size, capacity, capacity * 2);

	int index;

	for (index = 0; index < size; index++)

	{

		if (ascending && value < arr[index])

			break;

		else if (!ascending && value > arr[index])

			break;

	}

	shiftRight(arr, size, index);

	arr[index] = value;

	size++;

}

void deleteElement(int* &arr, int &size, int &capacity)

{

	int index, value;

	cout << "Enter the value to be deleted: ";

	cin >> value;

	for (index = 0; index < size; index++)

	{

		if (arr[index] == value)

			break;

	}

	if (index < size)//found the element

	{

		shiftLeft(arr, size, index);

		size--;

		if (size < capacity / 2) //less than half occupied, shrink

			resize(arr, size, capacity, capacity / 2);

	}

}

void printElements(int *arr, int &size)

{

	for (int i = 0; i < size; i++)

	{

		if (i % 10 == 0) //print newline for every 10th element

			cout << endl;

		cout << arr[i] << " ";

	}

	cout << endl << endl;

}

void resize(int* &arr, int size, int &capacity, int newCapacity)

{

	int* temp = new int[newCapacity];

	for (int i = 0; i < size; i++)

	{

		temp[i] = arr[i];

	}

	delete[] arr;

	arr = temp;

	capacity = newCapacity;

	cout << "Resized Array ( size = " << size << ", capacity = " << capacity << ")" << endl;

}

void sort(int *arr, int size, bool ascending)

{

	for (int i = 0; i < size; i++)

	{

		int index = i;

		for (int j = i + 1; j < size; j++)

		{

			if ((ascending && arr[j] < arr[index]) || (!ascending && arr[j] > arr[index]))

				index = j;

		}

		if (index != i)

		{

			//swap

			int temp = arr[i];

			arr[i] = arr[index];

			arr[index] = temp;

		}

	}

}

void shiftRight(int *arr, int size, int index) //elements starting from index to size-1 are shifted one position right

{

	for (int i = size - 1; i >= index; i--)

		arr[i + 1] = arr[i];

}

void shiftLeft(int *arr, int size, int index)//elements starting from index to size-1 are shifted one position left

{

	for (int i = index + 1; i < size; i++)

		arr[i - 1] = arr[i];

}