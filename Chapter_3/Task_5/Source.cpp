/* 
	Write a program that requests the user to enter the current world population and the current population of the U.S. (or of some other nation of your choice). 
	Store the information in variables of type long long. Have the program display the percent that the U.S. (or other nation�s) population is of the world�s population.
	The output should look something like this: 
	Enter the world's population: 6898758899 
	Enter the population of the US: 310783781 
	The population of the US is 4.50492% of the world population. 
	You can use the Internet to get more recent figures
*/

#include <iostream>

using namespace std;

int main()
{
	long long population;
	cout << "Enter the world's population: ";
	cin >> population;
	long long popUSA;
	cout << "Enter the population of the US: ";
	cin >> popUSA;
	cout << "The population of the US is " << popUSA * 100.0 / population << "% of the world population." << endl;
	return 0;
}