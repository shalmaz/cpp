/*
	Write a program that asks the user to enter his or her first name and then last name,
	and that then constructs, stores,and displays a third string, consisting of the user’s last name followed by a comma,
	a space,and first name. Use char arrays and functions from the cstring header file.A sample run could look like this:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here’s the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int size = 20;
	char firstName[size];
	char lastName[size];
	cout << "Enter your first name: ";
	cin.getline(firstName, size);
	cout << "Enter your last name: ";
	cin.getline(lastName, size);
	strcat_s(lastName, ", ");
	strcat_s(lastName, firstName);
	cout << "Here's the information in a single string: " << lastName << endl;
	return 0;
}