#include <stdio.h>
#include <stdlib.h>

void ShowArray(int *Array, int size) // Show array function
{
    int i;                     // Declaring an integer
    for (i = 0; i < size; i++) // looping through the array
    {
        printf("Value of array[%d] is %d\n", i, Array[i]); // Showing the values from each index of the array.
    }
}

void main() // Main function.
{
    int Array[5] = {1, 2, 3, 4, 5}; // Declared a custom array with specific values
    ShowArray(Array, 5);            // Show array function which takes array and the size of that array.
}