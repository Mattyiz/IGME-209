#include <iostream>
#include "time.h";
using namespace std;

int main()
{
    
    //generateRandom(30);

    char input[256] = "";

    cout << "Input a string: ";
    cin >> input;


    cout << reverseString(input);
}

