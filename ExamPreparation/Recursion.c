//
// Created by Varzil Thakkar on 09/10/22.
//

// The formation of tree structure in recursive call
// Example fibonacci series
/*
 *                                 fib(5)
 *                    -fib(4)                   fib(3)
 *            -fib(3)      fib(2)           fib(2)  fib(1)
 *        fib(2) fib(1)  fib(1) fib(0)  fib(1) fib(0)
 *    fib(1) fib(0)
 */

#include "stdio.h"
int fib(int n){
    if(n<=1)
        return n;
    printf("%d\t",n);
    return fib(n-1)+fib(n-2);
}
int main(void){
    int num=5;
//    printf("0   1");
    fib(num);
}
