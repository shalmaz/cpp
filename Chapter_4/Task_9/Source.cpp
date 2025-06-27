//	Do Programming Exercise 6, but instead of declaring an array of three CandyBar structures, use new to allocate the array dynamically

#include <iostream>

using namespace std;

struct CandyBar
{
	string name;
	float weight;
	int calories;
};

int main()
{
	CandyBar* candyBars = new CandyBar[3];
	candyBars[0] = { "Mocha Munch", 53.1, 303 };
	candyBars[1] = { "Chunga Changa", 66, 115 };
	candyBars[2] = { "Ghayz", 77.8, 227 };
	
	cout << "Candy Bar #1:\n";
	cout << "Brand: " << candyBars[0].name << "\n Weight: " << candyBars[0].weight << "\n Calories: " << candyBars[0].calories << endl;
	cout << "Candy Bar #2:\n";
	cout << "Brand: " << candyBars[1].name << "\n Weight: " << candyBars[1].weight << "\n Calories: " << candyBars[1].calories << endl;
	cout << "Candy Bar #3:\n";
	cout << "Brand: " << candyBars[2].name << "\n Weight: " << candyBars[2].weight << "\n Calories: " << candyBars[2].calories << endl;
	return 0;
}