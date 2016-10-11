#include <iostream>
using namespace std;

int main(){
	
	// declaring 5 variables which hold a number
	int var1 = 28;
	int var2 = 32;
	int var3 = 37;
	int var4 = 24;
	int var5 = 33;
	
	// declare calculated variable
	float sum = var1 + var2 + var3 + var4 + var5;
	
	// declare average variable
	float average = sum / 5;
	
	// print appropriate output
	cout << "This program will calculate and find the average of 5 numbers" << endl;
	cout << endl;
	cout << "The average of the 5 numbers is: " << average;
	
}
