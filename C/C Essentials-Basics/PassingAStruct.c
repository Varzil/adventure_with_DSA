//
// Created by Varzil Thakkar on 15/08/22.
//

#include "stdio.h"
#include "stdlib.h"
struct Trapezium{
    int len;
    int bre;
};
struct Trapezium *fun2(){
    // Making the object in heap using malloc and passing its pointer
    struct Trapezium *t=(struct Trapezium*)malloc(sizeof(struct Trapezium) );
    t->len=10;
    t->bre=20;
    return t;
}
int main(void){
    struct Trapezium *ptr;
    ptr=fun2();
    printf("length is %d and breath is %d\n",ptr->len,ptr->bre);
}