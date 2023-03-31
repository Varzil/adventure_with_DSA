//
// Created by Varzil Thakkar on 31/03/23.
//
#include <stdio.h>

int main(){
    int oldest_page = 0,n,capacity,faults = 0;
    int pages[100];
    printf("Enter the number of pages: ");
    scanf("%d",&n);
    printf("Enter the String of pages: ");
    for (int i=0;i<n;i++){
        scanf("%d",&pages[i]);
    }
    printf("Enter the memory capacity");
    scanf("%d",&capacity);
    int memory[capacity];

    for (int i=0;i<capacity;i++){
        memory[i] = -1;
    }

    for (int i=0;i<n;i++){
        int page = pages[i];
        int page_found = 0;

        for (int j = 0;j<capacity;j++){
            if (page == memory[j]){
                page_found = 1;
                break;
            }
        }

        if (!page_found){
            memory[oldest_page] = page;
            oldest_page = (oldest_page+1)%capacity;
            faults++;
        }
        printf("Memory: ");
        for (int j=0;j<capacity;j++){
            if (memory[j] == -1){
                printf("X ");
            }
            else{
                printf("%d ",memory[j]);
            }
        }
        printf("\n");
    }

    printf("Total Faults = %d\n",faults);
}