/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Lab: Variables and Assignments
5 Sep 2021
*/

#include <iostream>

using namespace std;

int main()
{
	double wallHeight, wallWidth, wallArea, paintNeeded, cansNeeded;
	const double gallonPaint = 350;

	cout << "Enter wall height (feet): ";
	cin >> wallHeight;

	cout << "Enter wall width (feet): ";
	cin >> wallWidth;

	wallArea = wallHeight * wallWidth;

	paintNeeded = wallArea / gallonPaint;

	cansNeeded = round(wallArea / gallonPaint);

	cout << "Wall area: " << wallArea << " square feet " << endl;
	cout << "Paint needed: " << paintNeeded << " gallons " << endl;
	cout << "Cans needed: " << cansNeeded << " can(s) " << endl;

}
