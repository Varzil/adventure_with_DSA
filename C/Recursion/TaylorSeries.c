//
// Created by Varzil Thakkar on 01/09/22.
//
// tay(x)=1+x/1!+x^2/2!+x^3/3!+x^4/4!+.....x^n/n!
#include "stdio.h"
double e(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
int main() {
    printf("%lf \n", e(4, 15));
    return 0;
}