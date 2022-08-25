//
// Created by Varzil Thakkar on 25/08/22.
//
#include "stdio.h"
void fun(int n){
    if(n>0){
        // Recursive call in the beginning
        fun(n-1);

        printf("%d\t",n);
        // More code
        //Other tasks are performed on descending call / returning
    }
}
int main(void ){
    fun(3);
}