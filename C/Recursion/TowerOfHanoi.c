//
// Created by Varzil Thakkar on 02/09/22.
//
// The problem was considered to be unsolvable for many people but recursion made it very easy to solve
// The real problem had 16 rings and hence a lot of computation

#include "stdio.h"
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);
        printf("Move disc from %d to %d \n",a,c);
        toh(n-1,b,a,c);
    }
}
int main(void){
    int x=3;
    printf("Enter the number of rings:\n");
    scanf("%d",&x);
    toh(x,1,2,3);
    return 0;
}