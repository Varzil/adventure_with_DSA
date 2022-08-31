//
// Created by Varzil Thakkar on 30/08/22.
//
#include "stdio.h"
#include "stdlib.h"
struct Stack{
    int size;
    int top;
    int *s;
};
void create(struct Stack *st){
    printf("Enter Size");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
};
