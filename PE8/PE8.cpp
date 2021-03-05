#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    
    cout << "Part 1:" << endl;


    int x = 5;

    cout << "x = " << x << endl;
    changeVariable(x);
    cout << "x = " << x << endl;
    changePointer(&x);
    cout << "x = " << x << endl;

    //When you change the value in a function, the function uses a different local variable so the value is only changed in the scope of the function
    //When using the pointer, both of the local variables point to the same memory spot, so the change there affects both of them.



    cout << "\nPart 2:" << endl;


    int numbers[] = { 5,18, 92, 8, 2, -15, 9, 10, 33, -1 };

    int* numbersPointer = numbers;

    cout << "The length is " << getLengthArray(numbersPointer) << endl;
    cout << "The length is " << getLengthPointer(numbers) << endl;


    cout << "\nPart 3:" << endl;
     
    int* stack = createStackArray();
    int* heap = createHeapArray(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "Stack: " << stack[i] << endl;
        cout << "Heap: " << heap[i] << endl;
    }
    
    delete[] heap;

    //The array from the stack is only filled with memory addresses
    //I think this is because the array's contents are only created locally, so they don't exist outside the scope of thee function


}

void changeVariable(int x) 
{
    x *= -1;
    cout << "The value is now " << x << endl;
}

void changePointer(int* x)
{
    *x *= 2;

    cout << "The value is now " << *x << endl;
}

int getLengthArray(int numbers[])
{
    int i = 0;
    int elementsNumber = 0;
    while (numbers[i] != -1) {
        elementsNumber++;
        i++;
    }
    return elementsNumber;
}

int getLengthPointer(int* numbersPointer)
{
    int elementsNumber = 0;
    while (*numbersPointer != -1) {
        elementsNumber++;
        numbersPointer++;
    }
    return elementsNumber;
}
 
int* createStackArray() 
{
    int numbers[] = { 0, 1, 2, 3, 4 };

    return numbers;
}

int* createHeapArray(int size)
{
    int* numbers = new int[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = i;
    }

    return numbers;

}