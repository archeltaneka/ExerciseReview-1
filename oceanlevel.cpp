#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will calculate the current sea level within 5, 7 and 10 years onward" << endl
	cout << endl;
	
	// declare current level ocean and increment each year
	double currentLevel;
	double incLevel = 1.5;
	
	// get prompt for currentLevel
	cout << "Input the current level of the ocean: " << endl;
	cin >> currentLevel;
	cout << endl;
	
	// declare 3 different values of ocean level each 5, 7 and 10 years
	double oceanLv5 = (1.5 * 5) + currentLevel;
	double oceanLv7 = (1.5 * 7) + currentLevel;
	double oceanLv10 = (1.5 * 10) + currentLevel;
	
	// print message
	cout << "The current level of the ocean is: " << currentLevel << endl;
	cout << "The current ocean level from 5 years onward is: " << oceanLv5 << endl;
	cout << "The current ocean level from 7 years onward is: " << oceanLv7 << endl;
	cout << "The current ocean level from 10 years onward is: " << oceanLv10 << endl;
	
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
