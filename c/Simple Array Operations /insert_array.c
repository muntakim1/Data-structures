#include <stdio.h>
#include <stdlib.h>

int *ArrayInsert(int size) // Function is used for declaring the ArrayInsert Function.
{
    int i;
    int *Array = (int *)mallac(size * sizeof(int)); // Creating a dynamic array using malloc and size
    for (i = 0; i < size; i++)                      // Looping through the index to take user input
    {
        printf("Please insert a value in array: "); // Label text
        scanf("%d", &Array[i]);                     // Taking user input for array index
    }
    return Array;
}

void main()
{
    // Static Array
    int Array[5] = {1, 2, 3, 4, 5};

    // Dynamic way to insert
    int size = 5;             //  Declaring the size of the array
    int *arra;                // declaring a pointer
    arra = ArrayInsert(size); // Using function to return array.
}