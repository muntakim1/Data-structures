#include <stdio.h>
#include <stdlib.h>

int *sum_array(int *first, int *second, int size)
{
    int *total = (int *)malloc(size * sizeof(int)); // Defining array with
    for (int i = 0; i < size; i++)
    {
        total[i] = first[i] + second[i];
    }
    return total; // Sum of two arrays.
}

void main()
{
    int ArrayA[5] = {1, 2, 3, 3, 4}; //
    int ArrayB[5] = {4, 63, 3, 25, 5};
    int *total = sum_array(ArrayA, ArrayB, 5);
}