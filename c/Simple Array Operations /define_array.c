#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5];                                                   // Declaring a static array
    int size = 10;                                                // Size of Array
    int *custom_length_array = (int *)mallac(size * sizeof(int)); // dynamically declaring array using the size.
}