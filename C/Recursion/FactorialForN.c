//
// Created by Varzil Thakkar on 30/08/22.
//
#include "stdio.h"
int fact(int n){
    if(n==0){
        return 1;
    }
    return n* fact(n-1);
}
int main(void){
    int r=fact(5);
    printf("%d",r);
}