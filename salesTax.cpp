#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	const float PURCHASE = 95;
	const float SALES_TAX = 0.04;
	const float COUNTRY_TAX = 0.02;
	float totalPurchase;
	float salesTax = 95 * 0.04;
	float countryTax = 95 * 0.02;
	
	// calculate totalPurchase and display it
	totalPurchase = PURCHASE + salesTax + countryTax;
	cout << "The total purchase is " << totalPurchase;
	
}
