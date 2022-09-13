/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Lab: Recursion
14 Nov 2021
*/
#include<iostream>
using namespace std;
void NumberGuess(int low, int high)
{
	char answer;
	int mid;
	int num = 0;

	if (low < high && num < 15)
	{
		mid = (low + high) / 2;
		cout << "Is this your guess " << mid << "?\n";
		cin >> answer;
		while (answer == 'n')
		{
			cout << "Is your guess higher than " << mid << "?\n";
			cin >> answer;
			if (answer == 'y')
				return NumberGuess(mid + 1, high);
			else
				return NumberGuess(low, mid - 1);
		}
		num++;
	}
		cout << "Great! You've guessed it. Continue Playing?\n";
		cin >> answer;
		if (answer == 'y')
		{
		return NumberGuess(low, high);
		}
		else
		cout << "Hey! That was a good game.\n";
		return;
}
int main()
{
	char answer;
	int low = 0,
		high = 1000;
	cout << "Welcome to Guess the Number game.\n";
	cout << "Ready to play? Hit enter! then y for a yes and n for a no.\n";
	cin.get(answer);
	
	NumberGuess(low, high);
	return 0;
}