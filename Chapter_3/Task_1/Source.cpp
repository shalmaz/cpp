/*
	Write a short program that asks for your height in integer inches and then converts your height to feet and inches. 
	Have the program use the underscore character to indicate where to type the response.
	Also use a const symbolic constant to represent the conversion factor.
*/

#include <iostream>

using namespace std;

int main()
{
	const int footInInches = 12;
	int _height;
	cout << "Enter your height in inches: ";
	cin >> _height;
	cout << "Your height is " << _height / footInInches << " feet and " << _height % footInInches;
	return 0;
}