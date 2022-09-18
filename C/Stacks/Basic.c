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
    st->s=(int *)malloc(st->size*sizeof(int)); // Creating Array of size
};
int isEmpty(struct Stack *st){
    if((st->top=-1))
        return 1;
    return 0;
}
int isFull(struct Stack *st){
    if((st->top= st->size-1))
        return 1;
    return 0;
}
int main(void ){

}
