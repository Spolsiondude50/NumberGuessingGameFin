#include<iostream>

using namespace std;
int main() {
	int min = 1;
	int max = 500;
	int guess = 250;
	int turns = 0;
	char userInput = 0;
	int distance = 0;
	bool restart = true;

	cout << "Hello Welcome to Number Guesser" << "\n";
	cout << "I shall try to guess your number from a range between 1-500" << "\n";
	while(restart == true) {
		cout << "Is this your number "<< guess<< "\n";
		cin >> userInput;
		switch (userInput)
		{
		case 'u':
			min = guess;
			guess = (min + max) / 2;
			turns++;
			break;
		case 'l' :
			max = guess;
			guess = (min + max) / 2;
			turns++;
			break;
		case 'w':
			cout << "I Win The game shall be closed The number of turns is " << turns << "\n";
			guess = 250;
			turns = 0;
			restart = false;
			break;

		default:
			break;
		}
		distance = max - min;
		if (distance <= 1) {
			cout << "You have cheated the game will close "  << "\n";
			guess = 250;
			turns = 0;
			restart = false;
		}
	}
	system("pause");
	return 0;
}