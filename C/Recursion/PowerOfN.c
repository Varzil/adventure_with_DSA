//
// Created by Varzil Thakkar on 30/08/22.
//
#include "stdio.h"
int power(int n,int m){
    if(m==0){
        return 1;
    }
    return n*power(n,m-1);
}
int main(void){
    printf("%d",power(2,3));
}