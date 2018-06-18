// COSC 1430-Summer 2018
// Group Assignment #1
// Group Members: John Woodward, Jennifer Pernia, Gina Tran.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Function to double the size of the array
int *Array_double(int* &array_to_size , int &size , int &count)
{
	int new_size = size * 2;
	int *tmp_array = new int[new_size];
	int k;

	for (k = 0; k < new_size; k++)
	{
		tmp_array[k] = array_to_size[k];		
		
	}

	return tmp_array;
	
}


// Function to half the size of the array
int *Array_half(int* &array_to_shrink, int &size, int &count)
{
	int new_size = size / 2;
	int *tmp_array = new int[new_size];
	int k;

	for (k = 0; k < new_size; k++)
	{
		tmp_array[k] = array_to_shrink[k];

	}

	return tmp_array;

}

void RotateLeft(int *arr, int size, int index)//elements starting from index to size-1 are shifted one position left
{
	for (int i = index + 1; i < size; i++)
		arr[i - 1] = arr[i];
}

// Prints out all elements of array
int Print_element(int* print_array, int &count)
{

	
	
	if (count == 0)
	{
		cout << "No numbers stored";
	}
	else
	{
		
		for (int i = 0; i < count; ++i)
		{
			cout << print_array[i] << " ";
		}
	}
	cout << endl;
	
	return 0;
}

// Adds element to array and increases size if needed
int *Add_element(int* &add_array,int &size,int  &count)
{

	int *user_pnt = nullptr;
	int i;
	int j;
	int k = 0;
	int temp;
	int new_array_input;
	//int elements_in_array;
	//int array_size = sizeof(add_array) / sizeof(add_array[0]);

	//elements_in_array = sizeof(add_array) / sizeof(add_array[0]);
	//int populated = is_null_pointer<decltype(add_array[0])>::value;
	
	

	if (size == count)
	{

	Array_double(add_array, size, count);
		
	}
	

	cout << "Please enter a number to be added to the array.";
	cin >> new_array_input;
	user_pnt = &new_array_input;

	add_array[count] = *user_pnt;
	count +=1;

	

	
	


	// Sorts array in ascending order
	for (i = 0; i < count; ++i) 
	{
		for (j = 0; j < count - i - 1; ++j)
		{
			// Comparing consecutive data and switching values if value at j > j+1.
			if (add_array[j] > add_array[j + 1])
			{
				temp = add_array[j + 1];
				add_array[j + 1] = add_array[j];
				add_array[j] = temp;
			}
		}
	}
	


	return add_array;
}


// Deletes a chosen number from array and shrinks array if needed
/*
int *Delete_element(int* &remove_array, int &size, int &count)
{
	int number_remove;
	int i;	

	cout << "Please enter a number you would like to delete";
	cin >> number_remove;

	for (i = 0; i < count; i++ )
	{
		if (remove_array[i] == number_remove)
		{
			remove_array[i] = NULL;
		}
		else
		{
			cout << "Number not in Array";

		}
	}

	if (size / 2 == count);
	{
		Array_half(remove_array, size, count);
	}
		return remove_array;
	 
}
*/
void *Delete_element(int* &remove_array, int &size, int &count)
{
	int index, value;
	cout << "Enter the value to be deleted: ";
	cin >> value;

	for (index = 0; index < count; index++)
	{
		if (remove_array[index] == value)
			break;
	}

	if (index < size)//found the element
	{
		RotateLeft(remove_array, size, index);
		count--;

		if (size / 2 == count)
		{
			Array_half(remove_array, size, count);
		}
	}
		return remove_array;
}



// Counts the current size of the array along with number of ocupied elements
int Count_element(int size, int count)
{
	cout << "The current size of the array is: " << size << endl;
	cout << "The current number of elements in the array is: " << count << endl;
	return 0;
}


int main()
{
	int size = 2;
	int *dynamic_array = new int[2];
	int user_input = 0;
	int count = 0;
	

	// While loop that will continue to provide options to edit array until option 5 is chosen
	while (user_input != 5)
	{	
		int temp_size = 2;
		
		cout << "To print out all elements, input 1" << endl;
		cout << "To add an element, input 2" << endl;
		cout << "To delete an element, input 3" << endl;
		cout << "To return the element size, input 4" << endl;
		cout << "To exit, input 5" << endl;

		cin >> user_input;


		// Switch statement to determine which function will be used next
		switch (user_input)
		{

		case 1:
			cout << "You have chosen option 1!" << endl;
			Print_element(dynamic_array, count);
			break;

		case 2:
			cout << "You have chosen option 2!" << endl;
			Add_element(dynamic_array, size, count);
			cout << size << endl;
			
			break;

		case 3:
			cout << "You have chosen option 3!" << endl;
			Delete_element(dynamic_array, size, count);
			break;

		case 4:
			cout << "You have chosen option 4!" << endl;
			Count_element(size, count);
			break;

		case 5:
			cout << "You have chosen option 5!" << endl;
			cout << "Exiting program..." << endl;
			break;

		default:
			cout << "Invalid input!";
				break;
		}


		
	}
	delete[] dynamic_array;



    return 0;
}
