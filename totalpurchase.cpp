#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will calculate subtotal price and total price with the tax" << endl
	cout << endl;
	
	// display 5 items and each of its prices
	cout << "Price of item 1 = $15.95" << endl;
	cout << "Price of item 2 = $24.95" << endl;
	cout << "Price of item 3 = $6.95" << endl;
	cout << "Price of item 4 = $12.95" << endl;
	cout << "Price of item 5 = $3.95" << endl;
	cout << endl;
	
	// declare 5 items' prices
	double item1 = 15.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 12.95;
	double item5 = 3.95;
	
	// declare tax, subtotal and total
	double tax = 0.07;
	double subtotal = item1 + item2 + item3 + item4 + item5;
	double total = subtotal + (subtotal * 0.07);
	
	// print output
	cout << "Subtotal: " << subtotal << endl;
	cout << "Sale tax: " << tax << endl;
	cout << "Total: " << total;
	
}
