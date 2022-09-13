//
// Created by Varzil Thakkar on 13/09/22.
//
#include "stdlib.h"
#include "stdio.h"

struct node{
    int data;
    struct node *next;
}*first;

void create(int a[],int n);
int min(struct node *p);
void display(struct node *p);

int main(void){
    int ae[]={0,4,6,2,4,5};
    create(ae,6);
    display(first);
    printf("\nMin is %d", min(first));
}

void create(int arr[],int n){
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for (int j = 1; j < n; j++) {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=arr[j];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
    while (p!=NULL){
        printf("%d ->",p->data);
        p=p->next;
    }
    printf("NULL");
}

int min(struct node *p){
    int min=p->data;
    while(p){
        if(p->data < min)
            min=p->data;
        p=p->next;
    }
    return min;
}