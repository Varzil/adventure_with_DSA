//
// Created by Varzil Thakkar on 15/08/22.
//

// We create a struct which contains all the data elements
#include "stdio.h"
struct Rect{
    int length;
    int breath;
};

// Then all the required functions
void initialize(struct Rect *rec,int l,int b){
    rec->length=l;
    rec->breath=b;
}
void printArea(struct Rect rec){
    int area;
    area=rec.length*rec.breath;
    printf("Area is %d \n",area);
}
void changeLen(struct Rect *r,int x){
    r->length=x;
}

// And the Main function
int main(){
    struct Rect r;
    initialize(&r,10,5);
    printArea(r);
    changeLen(&r,20);
    printArea(r);
}