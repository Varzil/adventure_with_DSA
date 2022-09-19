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
        printf("Stack Overflow\n");
        exit(0);
    }
}

int pop(struct Stack *st){
    int x=-1;
    if(st->top==-1){
        printf("Stack Underflow\n");
    } else{
        x=st->s[st->top--];
    }
    return x;
}

void display(struct Stack *st){
    printf("Currently in stack : \n");
    for(int i = st->top; i>=0 ; i--)
        printf("%d ",st->s[i]);
    printf("\n");
}

int main(void ){
    struct Stack *stack ;
    create(&stack);
    printf("Enter your choice\n Press 1 to push \n Press 2 to pop \n Press 3 to display \n Press 4 to Quit\n");
    int option,a;
    scanf("%d",&option);
    while (1){
        switch (option) {
            case 1:
                printf("What element to be added?\n");
                scanf("%d",a);
                push(&stack,a);
                break;
            case 2:
                printf("%d popped",pop(&stack));
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                exit(0);
            default:
                printf("Sahi option dalo");
                break;
        }
    }

}
