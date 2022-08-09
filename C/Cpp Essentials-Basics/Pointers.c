//
// Created by Varzil Thakkar on 08/08/22.
//
#include "stdio.h"
#include "stdlib.h"
struct Rect{
    int length;
    int breath;
};

int main(){
    struct Rect r={10,5};
    printf("%d %d \n",r.length,r.breath);

    //This is used to make a pointer that points on a struct in stack memory
    struct Rect *ptr=&r;

    printf("%d %d\n",ptr->length,ptr->breath);
    // Here if you want call the pointer then use ->

    return 0;
}