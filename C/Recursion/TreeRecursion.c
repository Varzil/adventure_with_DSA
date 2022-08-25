//
// Created by Varzil Thakkar on 25/08/22.
//
#include "stdio.h"
void fun(int n){
    if(n>0){
        printf("%d\t",n);
        fun(n-1);
        printf("\n%d",n);
        fun(n-1);
        // More than one time recursive call
        // is TreeRecursion
    }
}
int main(void ){
    fun(4);
}