//
// Created by Varzil Thakkar on 23/08/22.
//
#include "stdio.h"
void fun1(int n){
    if (n>0){
        fun1(n-1);
        printf("%d ",n);
    }
}
int main(void){
    int x=5;
    fun1(x);
}