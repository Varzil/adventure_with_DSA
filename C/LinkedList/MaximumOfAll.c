//
// Created by Varzil Thakkar on 12/09/22.
//
#include "stdlib.h"
#include "stdio.h"
struct node{
    int data;
    struct node *next;
}*first;

void create(int a[],int n);

int main(void){
    int ae={0,2,4,6,2,4,5};
    create(ae,7);

}

void create(int a[],int n){
    struct node *t,*last;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i < n; i++) {
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int max(struct node *p){

}