//
// Created by Varzil Thakkar on 10/09/22.
//
#include "stdlib.h"
struct node{
    int val;
    struct node *next;
}*first = NULL;
struct node* create(int arr[],int n){
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
    return first;
}