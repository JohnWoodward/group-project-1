// COSC 1430-Summer 2018
// Group Assignment #1
// Group Members: John Woodward, Jennifer Pernia, Gina Tran.

#include "stdafx.h"
#include <iostream>

using namespace std;

// Prints out all elements of array
void Print_element(int *update_array, int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		//print newline for every 10th element
		if (i % 10 == 0)
		{
			cout << endl;
			cout << update_array[i] << " ";
		}
	}
	cout << endl << endl;
}

// Adds element to array and increases size if needed
int Add_element(int *dynamic_array, int size)
{

	int new_array_input;
	int i;
	int j;
	int temp;
	

	cout << "Please enter a number to be added to the array.";
	cin >> new_array_input;


	// Sorts array in ascending order
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n - i - 1; ++j)
		{
			// Comparing consecutive data and switching values if value at j > j+1.
			if (dynamic_array[j] > dynamic_array[j + 1])
			{
				temp = dynamic_array[j + 1];
				dynamic_array[j + 1] = dynamic_array[j];
				dynamic_array[j] = temp;
			}
		}
	}

}


// Deletes a chosen number from array and shrinks array if needed
int Delete_element(int *update_array, int array_size)
{
	int number_remove;
	int error_message;
	int i;
	

	cout << "Please enter a number you would like to delete";
	cin >> number_remove;

	for (i = 0; i < array_size; ++i )
	{
		if (update_array[i] == number_remove)
		{
			delete update_array[i];
		else
		{
			cout << "Number not in Array";

		}
			int check = array_size;
			for (int i = 0; i < length; i++)
			{
				if dynamic_array[i] > x)

			}
		}

	
	
		}

}

// Counts the current size of the array along with number of ocupied elements
int Count_element()
{

}


int main()
{
	int size = 2;
	int *dynamic_array = new int [size];
	int user_input;

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
			Print_elements(*dynamic_array, size);
			break;

		case 2:
			cout << "You have chosen option 2!" << endl;
			Add_element();
			break;

		case 3:
			cout << "You have chosen option 3!" << endl;
			Delete_element();
			break;

		case 4:
			cout << "You have chosen option 4!" << endl;
			Count_element();
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




    return 0;
}
