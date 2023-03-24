//
// Created by Varzil Thakkar on 20/11/22.
//
// Write a program to store the elements in 1-D array and perform the operations like
// searching, sorting and reversing the elements. [Menu Driven]
#include <stdio.h>
#include "stdlib.h"

void search(int *arr,int size){
    int value;
    printf("Enter the number to be found\n");
    scanf("%d",&value);
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i]==value) {
            break;
        }
    }
    if(i==size){
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n",i+1);
    }
}

void sort(int *arr,int size){

}

int main (){
    int size,choice=1;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    while (choice<=4&&choice>0) {
        printf("Enter 1 to search for an element\n");
        printf("Enter 2 to sort the array\n");
        printf("Enter 3 to reverse the array\n");
        printf("Enter 4 to exit\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                search(&arr,size);
                break;
            case 2:
                sort(&arr,size);
                break;
            case 3:
                //reverse(&arr,size);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong input\n");
                break;
        }

    }
}

