/*
	Do Programming Exercise 7 but use new to allocate a structure instead of declaring a structure variable.
	Also have the program request the pizza diameter before it requests the pizza company name
*/

#include <iostream>
#include <string>

using namespace std;

struct pizza
{
	string name;
	float diameter;
	float weight;
};

int main()
{
	pizza * pizza1 = new pizza;
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza1->diameter;
	cin.get();
	cout << "Enter the name of pizza company: ";
	getline(cin, pizza1->name);
	cout << "Enter the weight of the pizza: ";
	cin >> pizza1->weight;
	cout << "Information: \n The name of the pizza company: " << pizza1->name << "\n the diameter of the pizza: " << pizza1->diameter <<
		"\n the weight of the pizza: " << pizza1->weight << endl;
	return 0;
}