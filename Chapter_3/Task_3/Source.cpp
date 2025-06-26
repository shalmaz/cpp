/*
	Write a program that asks the user to enter a latitude in degrees, minutes,and seconds and that then displays the latitude in decimal format.
	There are 60 seconds of arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic constants.
	You should use a separate variable for each input value.A sample run should look like this: 	
	Enter a latitude in degrees, minutes, and seconds: 
	First, enter the degrees: 37 
	Next, enter the minutes of arc: 51 
	Finally, enter the seconds of arc: 19 
	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>

using namespace std;

int main()
{
	const int DGRS = 60;
	int d, m, s;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> d;
	cout << "Next, enter the minutes of arc: ";
	cin >> m;
	cout << "Finally, enter the seconds of arc: ";
	cin >> s;
	double decimal = d + (m + (double)s / DGRS) / DGRS;
	cout << d << " degrees, " << m << " minutes, " << s << " seconds = " << decimal << " degrees" << endl;
	return 0;
}