/*
	Write a program that requests the user to enter three times for the 40-yd dash (or
	40-meter, if you prefer) and then displays the times and the average. Use an array
	object to hold the data. (Use a built-in array if array is not available.
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 3> arr;
	cout << "Enter three times for the 40-yd dash" << endl;
	cout << "First: ";
	cin >> arr[0];
	cout << "Second: ";
	cin >> arr[1];
	cout << "Third: ";
	cin >> arr[2];
	cout << "First dash: " << arr[0] << endl;
	cout << "Second dash: " << arr[1] << endl;
	cout << "Third dash " << arr[2] << endl;
	cout << "Average time: " << (arr[0] + arr[1] + arr[2]) / 3 << endl;
	return 0;
}