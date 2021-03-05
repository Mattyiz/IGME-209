#include <iostream>
#include <stdio.h>

int main() 
{
	printf("Hello World\n");

	int seconds = 31 * 24 * 60 * 60;
	printf("%i\n", seconds);

	double area = 6.2 * 6.2 * 3.14159;
	printf("%i\n", area);


	int division = 5 / 2;
	if (division == 3) 
	{
		printf("It rounds\n");

	}
	else if(division == 2) {
		printf("It truncates\n");

	}
	else {
		printf("It produces a double\n");
	}



}