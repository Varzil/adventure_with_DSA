//
// Created by Varzil Thakkar on 30/08/22.
//
// 1+2+3+4...+n=sum(n)
// 1+2+3+4...+n-1=sum(n-1)
// 1+2+3+4...+n=sum(n-1)+n
// Recursion starts here

#include "stdio.h"
int sum(int n){
    if(n==0){
        return 0;
    }
    return sum(n-1)+n;
}
int main(void){
    printf("%d",sum(5));
}