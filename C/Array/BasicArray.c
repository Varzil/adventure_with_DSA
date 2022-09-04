//
// Created by Varzil Thakkar on 04/09/22.
//
#include "stdio.h"
#include "stdlib.h"
int main(void){
    int A[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        printf("%d\t",A[i]);
    }
    int *ptr;
    // Creating array in heap
    ptr=(int *)malloc(5*sizeof (int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    ptr[5]=6;
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t",(*ptr+i));
    }
    free(ptr);

}