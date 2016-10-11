#include <iostream>
using namespace std;

int main(){
	
	// declare meal charge, meal cost, tip and total bill
	const float MEAL_CHARGE = 88.67;
	float TAX; 
	float TIP;
	float totalBill;
	
	// calculate tax, tip and total bill
	TAX = MEAL_CHARGE * 6.75 / 100;
	TIP = (MEAL_CHARGE + TAX) * 0.2;
	totalBill = MEAL_CHARGE + TAX + TIP;
	
	// display total bill on the screen
	cout << "Meal cost:$ " << MEAL_CHARGE << endl;
	cout << "Tax amount:$ " << TAX << endl;
	cout << "Tip amount:$ " << TIP << endl;
	cout << "Total bill:$ " << totalBill;
}
