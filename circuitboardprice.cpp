#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will calculate selling price of a circuit board with profit \n";
	cout << endl;
	
	// declare circuit board's price and profit in percent
	double price = 14.95;
	double profitPercent = 0.35;

	// calculate the profit and actual price
	double profit = price * profitPercent;
	double actualPrice = price - profit;
	
	// print output
	cout << "The profit is $" << profit << endl;
	cout << "The actual price for the circuit is $" << actualPrice << endl;
	
	
}
