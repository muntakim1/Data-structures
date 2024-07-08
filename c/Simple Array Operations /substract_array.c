#include<stdio.h>
#include<stdlib.h>

int *substract_array(int *first,int *second,int size){
    int *subtracted=(int *)malloc(size *sizeof(int)); // Resulting array
    for (int i=0;i<size;i++){
        subtracted[i]=first[i]-second[i]; // Subtraction 
    }
    return subtracted;
}

void main(){
    int ArrayA[5]={12,44,51,55,20};
    int ArrayB[5]={15,12,33,40,10};

    int subtracted=sum_array(ArrayA,ArrayB,5);

}