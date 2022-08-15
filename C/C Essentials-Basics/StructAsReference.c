//
// Created by Varzil Thakkar on 15/08/22.
//
#include "stdio.h"
struct Rect{
    int len;
    int bre;
};
void fun(struct Rect *p){
    p->len=20; // We use -> operator to call the pointer NOT DOT
    printf("Inside function ==> length is %d and breath is %d\n",p->len,p->bre);
}
int main(){
    struct Rect r={10,5};
    fun(&r);
    printf("Main Function ==> length is %d and breath is %d\n",r.len,r.bre);

}