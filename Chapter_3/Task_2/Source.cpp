/*
	Write a short program that asks for your height in feet and inches and your weight in pounds. (Use three variables to store the information.) 
	Have the program report your body mass index (BMI).To calculate the BMI, first convert your height in feet and inches 
	to your height in inches (1 foot = 12 inches).Then convert your height in inches to your height in meters by multiplying by 0.0254.
	Then convert your weight in pounds into your mass in kilograms by dividing by 2.2. 
	Finally, compute your BMI by dividing your mass in kilograms by the square of your height in meters. 
	Use symbolic constants to represent the various conversion factors.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int footInInches = 12;
	const double inchToMeter = 0.0254;
	const double poundsToKg = 2.2;
	int feet, inches, pounds;
	cout << "Enter your height (feet): ";
	cin >> feet;
	cout << "(inches): ";
	cin >> inches;
	cout << "Enter your body mass in pounds: ";
	cin >> pounds;
	int inchHeight = feet * footInInches + inches;
	double metersHeight = inchHeight * inchToMeter;
	double weightInKG = pounds / poundsToKg;
	double BMI = weightInKG / pow(metersHeight, 2);
	cout << "Your BMI is " << BMI << endl;
	return 0;
}