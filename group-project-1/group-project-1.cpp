// group-project-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using 


int Add_element()
{

}

int Delete_element()
{

}

int Count_element()
{

}


int main()
{
	int const size = 2;
	int *dynamic_array[size];
	int user_input;


	while (user_input != 4)
	{

		cout << "To add an element, input 1" << endl;
		cout << "To delete an element, input 2" << endl;
		cout << "To return the element size, input 3" << endl;
		cout << "To exit, input 4" << endl;

		cin << user_input;

		switch (user_input)
		{
		case 1:
			cout << "You have chosen option 1!" << endl;
			Add_element();
			break;

		case 2:
			cout << "You have chosen option 2!" << endl;
			Delete_element();
			break;

		case 3:
			cout << "You have chosen option 3!" << endl;
			Count_element();
			break;

		case 4:
			cout "You have chosen option 4!" << endl;
			cout << "Exiting program..." << endl;
			break;

		default:
			cout << "Invalid input!"
				break;
		}

	}




    return 0;
}
