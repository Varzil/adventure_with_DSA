//
// Created by Varzil Thakkar on 30/08/22.
//
#include "stdio.h"
int fun(int n){
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}
int main(void){
    int r;
    r=fun(300);
    printf("%d",r);
    return 0;
}