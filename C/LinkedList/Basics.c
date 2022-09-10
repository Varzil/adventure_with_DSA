//
// Created by Varzil Thakkar on 08/09/22.
//
#include "stdlib.h"
#include "stdio.h"
struct node{
    int val;
    struct node *next;
}*first=NULL;

void create(const int arr[],int n){
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->val=arr[0];
    first->next=NULL;
    last=first;
    for (int j = 1; j < n; j++) {
        t=(struct node *)malloc(sizeof(struct node));
        t->val=arr[j];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while (p!=NULL){
        printf("%d ->",p->val);
        p=p->next;
    }
}

int main(void){
    int a[]={0,1,2,3};
    create(a,4);
    display(first);
}