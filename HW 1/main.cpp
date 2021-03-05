#include <iostream>
#include "hangman.h"
using namespace std;

int main()
{
    /*
    * This is for testing the gallows
    * 
    for (int i = 0; i <= 7; i++) 
    {
        showGallows(i);
    }
    */

    //Sets up all of the variables needed
    char word[] = "alternative"; //The word
    char input; // The input letter
    bool running = true; //The bool to check if the game is oveer
    char incorrect[8] = ""; //The incorrect guesses
    char guessedWord[] = "___________"; //The correct guesses


    //Instructions
    cout << "This is hangman!" << endl;
    cout << "The word is 11 letters long\n" << endl;

    //Game loop
    while (running) {

        //Gets input
        cout << "Guess a letter: ";
        cin >> input;
        input = tolower(input);
        
        //Checks if the guess is correct or not
        if (!strchr(word, input))
        {
            incorrect[strlen(incorrect)] = input;
        }

        for (int i = 0; i <= strlen(word); i++)
        {
            if (word[i] == input) {
                guessedWord[i] = word[i];
            }
        }

        //Prints
        showSolveDisplay(word, guessedWord, incorrect);

        //Checks if the game is over
        for (int i = 0; i <= strlen(word); i++)
        {
            if (guessedWord[i] == word[i]) {
                running = false;
            }
            else {
                running = true;
                break;
            }
        }

        if (strlen(incorrect) >= 7) {
            running = false;
        }

    }

    //End game message
    if (strlen(incorrect) >= 7) {
        cout << "You lose :(" << endl;
    }
    else {
        cout << "Congratulations!" << endl;

    }

}