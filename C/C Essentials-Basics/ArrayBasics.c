//
// Created by Varzil Thakkar on 08/08/22.
//
#include <stdio.h>
int main(){
    // Simple implementation of Arrays
    int n;
    scanf("%d",&n);
    int arr[n];

    // printf("%d\n", sizeof(arr));

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    return 0;
}
