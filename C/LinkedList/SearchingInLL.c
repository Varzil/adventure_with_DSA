//
// Created by Varzil Thakkar on 13/09/22.
//

#include "stdlib.h"
#include "stdio.h"

struct node{
    int data;
    struct node *next;
}*first;

void find(struct node *p,int key);
void create(int a[],int n);
void display(struct node *p);

int main(void){
    int ke;
    int arr[]={1,5,6,4,3,3};
    create(arr,6);
    display(first);
    printf("\nEnter the key\n");
    scanf("%d",&ke);
    find(first,ke);
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

void find(struct node *p,int key){
    while (p){
        if(p->data==key){
            printf("Found the key\n");
            break;
        }
        p=p->next;
    }
    if(p==NULL)
        printf("Cannot Find your key");
}