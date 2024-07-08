#include<stdio.h>
#include<stdlib.h>

float *Division_array(int *first, int *second,int size){
    float *divide=(int *)malloc(size *sizeof(int));
    for (int i=0;i<size;i++){
        if (second!=0){ // Checking the error
            divide[i]=first[i]/second[i];
        }
        else{
            printf("Cannot divide by zero");
        }
    }
    return divide;
}


void main(){
    int ArrayA[5]={23,12,65,3,19};
    int ArrayB[5]={2,6,5,3,55};

    float *divided= Division_array(ArrayA,ArrayB,5);
}