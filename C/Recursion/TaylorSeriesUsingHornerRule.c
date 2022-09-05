//
// Created by Varzil Thakkar on 05/09/22.
//

#include "stdio.h"
double e(int x, int n){
    // Here n is for precision as we know taylor series is infinite series
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main() {
    printf("%lf \n",e(2,10));
    return 0;
}