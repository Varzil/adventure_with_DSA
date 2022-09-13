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
int max(struct node *p);
void display(struct node *p);

int main(void){
    int ae[]={0,4,6,2,4,5};
    create(ae,6);
    display(first);
    printf("\nMax is %d", max(first));
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

int max(struct node *p){
    int max=INT32_MIN;
    while(p){
        if(p->data > max)
            max=p->data;
        p=p->next;
    }
    return max;
}