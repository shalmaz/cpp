/*
	Write a program that asks the user to enter his or her first name and then last name,and that then constructs, 
	stores,and displays a third string consisting of the user�s last name followed by a comma,a space,and first name. 
	Use string objects and methods from the string header file.A sample run could look like this: 
	Enter your first name: Flip 
	Enter your last name: Fleming 
	Here�s the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName, oneLine;
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	oneLine = lastName + ", " + firstName;
	cout << "Here's the information in a songle string: " << oneLine << endl;
	return 0;
}