// Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)

#include <iostream>

using namespace std;

int main()
{
	int distanceInFurlongs;
	cout << "Enter distance in furlongs: ";
	cin >> distanceInFurlongs;
	cout << distanceInFurlongs << " furlongs is " << distanceInFurlongs * 220 << " yards" << endl;
	return 0;
}