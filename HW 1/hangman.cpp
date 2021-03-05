#include <iostream>
#include "hangman.h"
using namespace std;

void showGallows(int wrongGuesses)
{
	//These are broken up into rows
	//Row 1
	cout << "__________\n|";
	if (wrongGuesses >= 1) {
		cout << "     |";
	}
	cout << "\n|";

	//Row 2
	if (wrongGuesses >= 2) {
		cout << "     O";
	}
	cout << "\n|";

	//Row 3
	if (wrongGuesses == 3) {
		cout << "     |";
	}
	if (wrongGuesses >= 4) {
		cout << "    /|";
	}
	if (wrongGuesses >= 5) {
		cout << "\\";
	}
	cout << "\n|";

	//Row 4
	if (wrongGuesses >= 6) {
		cout << "    /";
	}
	if (wrongGuesses >= 7) {
		cout << " \\";
	}
	cout << "\n|\n";
}

void showSolveDisplay(char word[], char correct[], char incorrect[])
{
	//Handles output involving wrong guesses
	showGallows(strlen(incorrect));
	cout << "Incorrect guesses: ";
	cout << incorrect << endl;

	//output involving correct guesses
	cout << correct << endl;

}