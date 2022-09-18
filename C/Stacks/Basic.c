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
    printf("Enter Size : ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc((st->size)*sizeof(int)); // Creating Array of size
}

int isEmpty(struct Stack st){
    if(st.top==-1)
        return 1;
    return 0;
}

int isFull(struct Stack st){
    if(st.top== st.size-1)
        return 1;
    return 0;
}

void push(struct Stack *st,int x){
    if(st->top != st->size-1){
        st->top++;
        st->s[st->top]=x;
        printf("%d Added SuccessFully\n",st->s[st->top]);
    } else{
        printf("Stack Full\n");
    }
}

int main(void ){
    struct Stack *stack ;
    create(&stack);

//    if(isEmpty(&stack)==1){
//        printf("\nEmpty");
//    } else{
//        printf("\nNot Empty");
//    }
//    if(isFull(&stack)==1){
//        printf("\nFull");
//    } else{
//        printf("\nNot Full");
//    }

    push(&stack,1);
}
