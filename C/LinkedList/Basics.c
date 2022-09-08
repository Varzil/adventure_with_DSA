//
// Created by Varzil Thakkar on 08/09/22.
//
#include "stdlib.h"
struct node{
    int val;
    struct node *next;
};
int main(void){
    struct node *headNode;
    headNode=(struct node *)malloc(sizeof(struct node));
    headNode->val=10;
    headNode->next=NULL;
}