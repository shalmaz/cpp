/*
	Write a program that asks the user to enter the number of seconds as an integer value (use type long, or, if available, long long) 
	and that then displays the equivalent time in days, hours, minutes,and seconds. 
	Use symbolic constants to represent the number of hours in the day, the number of minutes in an hour,
	and the number of seconds in a minute.The output should look like this: 	
	Enter the number of seconds: 31600000 
	31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>

using namespace std;

int main()
{
	const int hoursInDay = 24;
	const int timeConst = 60;
	long long _seconds;
	cout << "Enter the number of seconds: ";
	cin >> _seconds;
	int days = _seconds / timeConst / timeConst / hoursInDay;
	int hours = _seconds / timeConst / timeConst % hoursInDay;
	int minutes = _seconds / timeConst % timeConst;
	int seconds = _seconds % timeConst;
	cout << _seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

	return 0;
}