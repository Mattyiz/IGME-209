#include <iostream>
#include "time.h";
using namespace std;

void generateRandom(int numberOfRandoms) 
{
	srand(time(NULL));

	for (int i = 0; i < numberOfRandoms; i++) 
	{
		int random = rand();
		cout << "Random number " << (i + 1) << " is: " << random << endl;
	}

}

char* reverseString(char inputString[]) 
{ 
	char newString[256] = ""; 
	int length = strlen(inputString); 
	for (int i = 0; i < length; i++) 
	{ 
		char c = inputString[i]; 

		//The line below is not properly updating newString
		//Since newString currently only has [0] initialized you cannot update any
		//position that is deeper in the array
		newString[length - i] = c; 
	}
	strcpy_s(inputString, 128, newString);
	return inputString; 
}