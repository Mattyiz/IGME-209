#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char cString1[] = "supercalifragilistic";
    char cString2[] = "expialidocious";

    char combined[35] = "";

    strcat_s(combined, cString1);
    strcat_s(combined, cString2);
    cout << combined << endl;

    char midSearch[35] = "";
    strcpy_s(midSearch, combined);
    int counter = 0;

    while (strchr(midSearch, 'i'))
    {
        strcpy_s(midSearch, strchr(midSearch, 'i'));
        midSearch[0] = ' ';
        //cout << midSearch << endl;
        counter++;
    }

    cout << "There are: " << counter << " instances of i" << endl;
}