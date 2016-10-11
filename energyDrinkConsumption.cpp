#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	const int NUM_CUSTOMERS = 16500;
	int customerPurchase = NUM_CUSTOMERS * 0.15;
	int citrusPurchase = customerPurchase * 0.58;
	
	// display message
	cout << customerPurchase << " customers purchased energy drinks" << endl;
	cout << citrusPurchase << " customers purchased citrus-flavored energy drinks";
	
}
