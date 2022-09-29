//
// Created by Varzil Thakkar on 12/08/22.
//

#include "stdio.h"
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(void){
    int x,y;
    printf("Enter values of x and y \n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Value of x=%d and y=%d \n",x,y);
    swap(&x,&y);
    printf("Value of x=%d and y=%d \n",x,y); //Actual parameters get changed
}