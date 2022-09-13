/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Extra Credit Midterm
17 Oct 2021
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

	int nWords;
	string input;
	char c;
	int i;
	unsigned int j;
	
	vector<string> inWords;

	cin >> nWords;

		for (j = 0; j < nWords; j++) {
			cin >> input;
			inWords.push_back(input);
		}

	cin >> c;

	for (j = 0; j < nWords; j++) {
		if (inWords[j].find(c) != string::npos) {
			cout << inWords[j] << endl;
		}
	}

	return 0;
}
