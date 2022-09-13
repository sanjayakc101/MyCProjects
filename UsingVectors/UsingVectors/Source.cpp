/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Lab: Using Vectors
19 Sep 2021
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	const int NUM_PLAYERS = 12;
	vector<double> testWeight(NUM_PLAYERS);
	int i;
	double totalWeight;
	double averageWeight;
	double maxWeight;

	for (i = 0; i < NUM_PLAYERS; ++i) {
		cout << "Enter weight " << i + 1 << ":" << endl;
		cin >> testWeight.at(i);
	}

	cout << "You entered: ";
	for (i = 0; i < NUM_PLAYERS; ++i) {
		cout << testWeight.at(i) << " ";
	}
	cout << endl;

	totalWeight = 0;
	cout << endl << "Total weight: ";
	for (i = 0; i < NUM_PLAYERS; ++i) {
		totalWeight += testWeight.at(i);
	}
	cout << totalWeight << endl;

	averageWeight = totalWeight / NUM_PLAYERS;
	cout << "Average weight: " << averageWeight << endl;

	maxWeight = 0;
	for (i = 0; i < NUM_PLAYERS; ++i) {
		if (testWeight.at(i) > maxWeight) {
			maxWeight = testWeight.at(i);
		}
	}
	cout << "Max weight: " << maxWeight << endl;
	return 0;
}