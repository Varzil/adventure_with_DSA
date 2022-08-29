//
// Created by Varzil Thakkar on 29/08/22.
//
#include "stdio.h"
void funA(int a);
void funC(int n){
    if(n>1){
        printf("\n%d\t",n);
        funA(n-1);
    }
}
void funB(int n){
    if(n>1){
        printf("\n%d\t",n);
        funC(n-1);
    }
}
void funA(int a){
    if(a>1){
        printf("%d\t",a);
        funB(a-1);
    }
}

int main(void){
    funA(5);
}