#include <iostream>
using namespace std;

int main(){
	
	// declares payAmount and payPeriods of an employee
	double payAmount = 2200.0;
	double payPeriods = 26;
	
	// declares a variable that holds total annual pay
	double annualPay = payAmount * payPeriods;
	
	// print message
	cout << "This program will calculate an employee's total annual pay" << endl;
	cout << endl;
	cout << "The total annual pay for the employee is " << annualPay;
	
}
