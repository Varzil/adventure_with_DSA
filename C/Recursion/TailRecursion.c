//
// Created by Varzil Thakkar on 25/08/22.
//
#include "stdio.h"
void fun(int n){
    if(n>0){
        printf("%d\t",n);
        // More code
        // Recursive call in the end
        fun(n-1);
    }
}

int main(void ){
    fun(3);
    //This will crate n+1 number of spaces
}