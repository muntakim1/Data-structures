#include<stdio.h>
#include<stdlib.h>

int *mulplication_array(int *first,int *second,int size){
    int *multiplied=(int *) malloc(size *sizeof(int)); // resulting array
    for (int i=0;i<size;i++){
        multiplied[i]=first[i]*second[i]; // Multiplication. 
    }
 return multiplied;
}


void main(){
    int ArrayA[5]={2,14,11,5,19};
    int ArrayB[5]={5,11,52,5,10};
    int multiplied=mulplication_array(ArrayA,ArrayB,5);

}