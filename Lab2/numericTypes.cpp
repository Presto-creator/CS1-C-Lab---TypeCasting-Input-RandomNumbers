#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

//This program demonstrates how numeric types and operators behave in C++
//Created by Presto.creator in September 2020
//Feel free to use this to figure out how these work in C++

int main()
{

	const int NUMBER = 2;			// number of scores
	const int SCORE1 = 100;			// first test score
	const int SCORE2 = 95;			// second test score
	const int BOILING_IN_F = 212;  	// boiling temperature
	int C;					// temperature in celsius
	double average;					// arithmetic average
	string output;					// line of output to print out
	string fullName;	//User's full name
	char firstInitial; // User's first initial of they're name
	int amountLetters; //Amount of letters in your name
	double sphereDiam, sphereRad, sphereVol; // Diameter/Radius/Volume of the input sphere
	const double pi = 3.1415926535897; // Pi
	int v1, v2, v3; // v1-v3 are for the random number lottery

	// Find an arithmetic average
	average = (SCORE1 + SCORE2) / (double)NUMBER;
	cout << SCORE1 << " and " << SCORE2 << " have an average of " << average << endl << endl;

	// Convert Fahrenheit temperatures to Celsius
	C = double(5 / 9) * double(BOILING_IN_F - 32);
	cout << BOILING_IN_F << " in Fahrenheit is " << (BOILING_IN_F - 32) * (5 / 9) << " in Celsius." << endl; // Not sure why this does not work? Worked when I made this in October.
	
	cout << endl;		// to leave a blank line
	
	//Ask for the user's name and print it out to them
	cout << "Enter your name:" << endl;
	getline(cin, fullName);
	cout << "\nYour full name is: " << fullName << endl;
	
	
	
	cout << "The first letter of your name is: " << fullName.at(0) << endl; // fullName.at(0) gives the first letter
	cout << "You have " << fullName.length() << " letters/spaces in your name!" << endl; // fullName.length() gives length of the name

	cout << endl;		// to leave a blank line

	//Calculate the radius and volume of a sphere
notZero:; // goto statement if diameter is less than 0

	cout << "Enter the diameter of a sphere: " << endl;
	cin >> sphereDiam;

	if (sphereDiam > 0) { // checking for anything less than 0
		sphereRad = sphereDiam / 2.0;
		cout << "You have input a diameter of: " << sphereDiam << " which has a radius of: " << sphereRad << endl;
		sphereVol = (4 / 3.0) * pow(sphereRad, 3.0) * pi;
		cout << "Your sphere has a volume of: " << sphereVol << endl;
	}
	else {
		cout << "Make sure to enter a variable greater than 0!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto notZero; // Could also use do while loop, but I liked the goto statement at the time. Both methods work
	}
	cout << endl << endl;		// to leave a blank line
	
	//generate some random numbers
	srand((unsigned int)(time(0)));
	v1 = rand() % 10;
	v2 = rand() % 10;
	v3 = rand() % 10;
	
	cout << "Your lucky lottery numbers are: " << '\n' << v1 << '\n' << v2 << '\n' << v3 << endl;
	// print the three numbers

	cout << "Thank you for running this program, " << fullName << "!\n";
	return 0;
	
}