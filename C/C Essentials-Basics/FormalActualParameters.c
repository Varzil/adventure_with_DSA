//
// Created by Varzil Thakkar on 12/08/22.
//
//#include "stdlib.h"
#include "stdio.h"
int sum(int a,int b){ // formal parameters
    int sum=a+b;
    return sum;
}
int main(){
    int x,y;
    printf("Enter values of x and y \n");
    scanf("%d",&x);
    scanf("%d",&y);
    int s;
    s = sum(x,y); // actual parameters
    printf("Sum is %d\n",s);

}