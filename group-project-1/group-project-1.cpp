// COSC 1430-Summer 2018
// Group Assignment #1
// Group Members: John Woodward, Jennifer Pernia, Gina Tran.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Function to double the size of the array
int Array_double(int* &array_to_size , int &size , int &count)
{
	//int size = sizeof(array_to_size) / sizeof(array_to_size[0]);
	//int *new_array = NULL;
	//int *tmp_array = new int[size];
	//int k;
	//int j;

	int temp = size * 2;
	int *tempArr = new int[temp];



	for (int k = 0; k < size; k++)//Initial array copying.
		tempArr[k] = array_to_size[k];

	delete[] array_to_size;
	array_to_size = tempArr;

	//new_array = new int[temp];
	//for (j = 0; j < size; j++);//Array range 0 to n-1
	{
		//new_array[j] = temp_array[j];
	}

	//delete[] tmp_array;// To free memory
	return temp;
}


// Function to half the size of the array
int *Array_half(int array_to_size[])
{
	int size = sizeof(array_to_size) / sizeof(array_to_size[0]);
	int *new_array = NULL;
	int *tmp_array = new int[size];
	int k;
	int j;

	for (k = 0; k < size; k++);//Initial array copying.
	tmp_array[k] = array_to_size[k];
	
	new_array = new int[size / 2];
	for (j = 0; j < size; j++);//Array range 0 to n-1
	{
		new_array[j] = tmp_array[j];
	}

	delete[] tmp_array;// To free memory
	return new_array;
}


// Prints out all elements of array
int Print_element(int *print_array, int count)
{

	
	
	if (count == 0)
	{
		cout << "No numbers stored";
	}
	else
	{
		int size = sizeof(print_array) / sizeof(print_array[0]);
		for (int i = 0; i < sizeof(print_array); i++)
		{
			cout << print_array[i] << " ";
			//print newline for every 10th element
			if (i % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	cout << endl << endl;
	
	return 0;
}

// Adds element to array and increases size if needed
void Add_element(int* &add_array,int &size,int  &count)
{

	int new_array_input;
	int i;
	int j;
	int k = 0;
	int temp;
	int elements_in_array;
	//int array_size = sizeof(add_array) / sizeof(add_array[0]);

	//elements_in_array = sizeof(add_array) / sizeof(add_array[0]);
	//int populated = is_null_pointer<decltype(add_array[0])>::value;
	
	

	if (size == count)
	{
		Array_double(add_array,  size, count);
		
	}
	

	cout << "Please enter a number to be added to the array.";
	cin >> new_array_input;
	count++;

	add_array[count] = new_array_input;

	

	
	


	// Sorts array in ascending order
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
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
	


	//return add_array;
}


// Deletes a chosen number from array and shrinks array if needed
/*int *Delete_element(int *remove_array, int remove_size)
{
	int number_remove;
	int error_message;
	int i;
	

	cout << "Please enter a number you would like to delete";
	cin >> number_remove;

	for (i = 0; i < remove_size; ++i )
	{
		if (remove_array[i] == number_remove)
		{
			delete *remove_array[i];
		else
		{
			cout << "Number not in Array";

		}
			int check = remove_size;
			for (int i = 0; i < length; i++)
			{
				if dynamic_array[i] > x)

			}
		}

	
	
		}

}
*/
// Counts the current size of the array along with number of ocupied elements
int Count_element()
{
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
			Print_element(dynamic_array, count
			);
			break;

		case 2:
			cout << "You have chosen option 2!" << endl;
			Add_element(dynamic_array,size , count );
			cout << dynamic_array[0];
			
			break;

		/*case 3:
			cout << "You have chosen option 3!" << endl;
			Delete_element(dynamic_array, size);
			break;

		case 4:
			cout << "You have chosen option 4!" << endl;
			Count_element();
			break;

		case 5:
			cout << "You have chosen option 5!" << endl;
			cout << "Exiting program..." << endl;
			break;
		*/
		default:
			cout << "Invalid input!";
				break;
		}


		delete[] dynamic_array;
	}




    return 0;
}
