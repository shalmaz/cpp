/*
	Write a program that asks how many miles you have driven and how many gallons of gasoline 
	you have used and then reports the miles per gallon your car has gotten. 
	Or, if you prefer, the program can request distance in kilometers and petrol 
	in liters and then report the result European style, in liters per 100 kilometers.
*/

#include <iostream>

using namespace std;

int main()
{
	int miles, gallons;
	cout << "Enter how many miles you have driven: ";
	cin >> miles;
	cout << "Enter how manu gallons of gasoline you have used: ";
	cin >> gallons;
	cout << "Yor car has gotten " << miles / (double)gallons << " miles per gallon";
	return 0;
}