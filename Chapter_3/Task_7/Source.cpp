/*
	Write a program that asks you to enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers) and converts to the U.S. 
	style of miles per gallon. Note that in addition to using different units of measurement, 
	the U.S.approach (distance / fuel) is the inverse of the European approach (fuel / distance). 
	Note that 100 kilometers is 62.14 miles,and 1 gallon is 3.875 liters.
	Thus, 19 mpg is about 12.4 l/100 km,and 27 mpg is about 8.7 l/100 km.
*/

#include <iostream>

using namespace std;

int main()
{
	const double galInLit = 3.875;
	double litPerKm, milPerGal;
	cout << "Enter a auto gasoline consumtion in EU style: ";
	cin >> litPerKm;
	double mpg = 62.14 / (litPerKm / galInLit);
	cout << "US style: " << mpg << " mpg" << endl;;
	return 0;
}