//
// Created by Varzil Thakkar on 12/09/22.
//
#include "stdlib.h"
#include "stdio.h"
struct node{
    int data;
    struct node *next;
}*first;

void display(struct node *p);
void makeLL(int a[],int n);
int count(struct node *p);
int sum(struct node *p);

int main(void ){
    int a[]={1,2,3,4};
    makeLL(a,4);
    printf("%d\n",count(first)-1);
    display(first);
    printf("\n%d",sum(first));
}
void makeLL(int a[],int n){
    struct node *t,*last;
    first=(struct node *)malloc(sizeof (struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i < n; i++) {
        t=(struct node *)malloc(sizeof (struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int count(struct node *p){
    int cnt;
    while(p){
        cnt++;
        p=p->next;
    }
    return cnt;
}
int sum(struct node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
void display(struct node *p){
    while (p!=NULL){
        printf("%d ->",p->data);
        p=p->next;
    }
    printf("NULL");
}