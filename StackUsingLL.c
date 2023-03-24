//
// Created by Varzil Thakkar on 06/01/23.
//
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(int x){
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node)); // Navu node banav ane ene add kar
    if (t == NULL)
        printf("\nstack is full");
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop(){
    struct node *t;
    int x = -1;
    if (top == NULL)
        printf("\nstack is empty");
    else{
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void Display(){
    struct node *p;
    p = top;
    while (p != NULL){
        printf("\n%d", p->data);
        p = p->next;
    }
    printf("");
}
int main(){
    push(10);
    push(20);
    push(30);
    Display();
    printf("\n%d is popped", pop());
    return 0;
}
