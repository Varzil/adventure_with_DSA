//
// Created by Varzil Thakkar on 16/10/22.
//

#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *next;
}*first;

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

void insert(int arr[],int n,int idx){
    struct node *p,*q;
    for (int i=0;i<idx;i++){
        // Code for inserting element in LL
        // point the pointer of the node at index's next to the new node
        // and the new node's next to the index+1's node
    }
}

int main(void){
    int ae[]={0,4,6,2,4,5};
    create(ae,6);
    display(first);

}