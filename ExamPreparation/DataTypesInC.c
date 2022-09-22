//
// Created by Varzil Thakkar on 22/09/22.
//
#include <stdio.h>
int main(void) {
    short a;
    long b;
    long long c;
    long double d;

    printf("size of short = %lu bytes\n", sizeof(a));
    printf("size of long = %lu bytes\n", sizeof(b));
    printf("size of long long = %lu bytes\n", sizeof(c));
    printf("size of long double= %lu bytes\n", sizeof(d));

    // valid codes
    unsigned int x = 35;
    int y = -35;  // signed int
    int z = 36;  // signed int

    // invalid code: unsigned int cannot hold negative integers
    unsigned int num = -35;
    printf("%ui",num);   // This line will give trash value


    return 0;
}