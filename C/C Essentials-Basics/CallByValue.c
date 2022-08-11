//
// Created by Varzil Thakkar on 11/08/22.
//
#include "stdio.h"
int sum(int a,int b){
    // a copy is made of the values
    int sum=a+b;
    return sum;
}
int main(){
    int x,y;
    printf("Enter values of x and y \n");
    scanf("%d",&x);
    scanf("%d",&y);
    int s;
    s = sum(x,y);
    printf("Sum is %d\n",s);
}