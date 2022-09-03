//
// Created by Varzil Thakkar on 01/09/22.
//
// tay(x)=1+x/1!+x^2/2!+x^3/3!+x^4/4!+.....x^n/n!

#include "stdio.h"
int taylor(int n){
    if (n==0)
        return 1;
    return taylor(n-1);
}
int main(void){
}