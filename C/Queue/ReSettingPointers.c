//
// Created by Varzil Thakkar on 22/09/22.
//

#include "stdio.h"
#include "stdlib.h"

struct Queue{
    int size;
    int front;
    int rear;
    int *x;
};

void create(struct Queue *q){
    q->rear=q->front=-1;
    printf("Enter the size\n");
    int size;
    scanf("%d",&size);
    q->size=size;
    q->x= (int *)malloc(size*sizeof(int));
}

void enqueue(struct Queue *q,int x){

    if(q->rear==(q->size-1)){
        printf("Queue is full\n");
    }
    q->rear++;
    q->x[q->rear]=x;
    printf("%d added\n",q->x[q->rear]);

}

void delete(struct Queue *q){
    if(q->front==q->rear){
        // This line will make both pointers back to -1 and hence make space for the new elements
        q->front=q->rear=-1;
        printf("The queue is Empty\n");
    }
    q->front++;
    printf("%d deleted\n",q->x[q->front]);
    q->x[q->front]=NULL;
}

void display(struct Queue *q){
    for (int i = 0; i < q->size; i++) {
        printf("%d \t",q->x[i]);
    }
    printf("\n");
}

int main(void){
    struct Queue *queue;
    int x;
//    create(&queue);
//    enqueue(&queue,3);
//    delete(&queue);
//    enqueue(&queue,2);
//    display(&queue);
//    enqueue(&queue,1);
//    delete(&queue);
//    display(&queue);
}