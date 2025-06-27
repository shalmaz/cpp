/*
	William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information: 
	•	The name of the pizza company, which can consist of more than one word 
	•	The diameter of the pizza 
	•	The weight of the pizza 
	Devise a structure that can hold this information and write a program that uses a structure variable of that type.
	The program should ask the user to enter each of the preceding items of information,and then the program should display that information. Use cin (or its methods) and cout.
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
	pizza pizza1;
	cout << "Enter the name of pizza company: ";
	getline(cin, pizza1.name);
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza1.diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> pizza1.weight;
	cout << "Information: \n The name of the pizza company: " << pizza1.name << "\n the diameter of the pizza: " << pizza1.diameter <<
		"\n the weight of the pizza: " << pizza1.weight << endl;
	return 0;
}