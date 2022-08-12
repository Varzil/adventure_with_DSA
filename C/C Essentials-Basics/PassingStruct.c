//
// Created by Varzil Thakkar on 12/08/22.
//
#include "stdio.h"

struct Rectangle{
    int len;
    int bre;
};

int area(struct Rectangle r1){ // Call by value
    return r1.len*r1.bre;
}

int main(void){
    struct Rectangle r={10,5};
    int sum=area(r);
    printf("%d",sum);
}