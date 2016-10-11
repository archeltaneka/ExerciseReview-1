#include <iostream>
using namespace std;

int main(){
	
	// declares number of gallons and average mile
	const int NUM_GALLONS = 20;
	const float GALLONS_AVERAGE_TOWN = 23.5;
	const float GALLONS_AVERAGE_HIGHWAY = 28.9;
	float oneGallonTown;
	float oneGallonHighway;
	float townDistance;
	float highwayDistance;
	
	// calculate oneGallonTown, oneGallonHighway, townDistance and highwayDistance
	oneGallonTown = GALLONS_AVERAGE_TOWN / NUM_GALLONS;
	oneGallonHighway = GALLONS_AVERAGE_HIGHWAY / NUM_GALLONS;
	
	townDistance = 1 * oneGallonTown;
	highwayDistance = 1 * oneGallonHighway;
	
	// display output message
	cout << "The car can travel " << oneGallonTown << " miles in the town with 1 gas tank" << endl;
	cout << "The car can travel " << oneGallonHighway << " miles in the highway with 1 gas tank";
	
	
}
