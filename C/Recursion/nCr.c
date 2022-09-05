//
// Created by Varzil Thakkar on 05/09/22.
//
#include "stdio.h"
int fact(int x){
    if(x==1){
        return 1;
    }
    return fact(x-1)*x;
}
int main(void){
    // nCr= n!/(r!*(n-r)!)
    int n,r;
    printf("Enter the value of n ");
    scanf("%d",&n);
    printf("Enter the value of r ");
    scanf("%d",&r);
    int c = fact(n)/((fact(r))*(fact(n-r)));
    printf("The value of %dC%d is %d",n,r,c);
}