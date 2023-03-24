#include<stdlib.h>
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of processes:");
    scanf("%d", &n);
    int bt[n], wt[n], tat[n], p[n],at[n],btcopy[n];
    printf("Enter the burst time of the processes:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        btcopy[i]=bt[i];
        p[i] = i + 1;
    }
    printf("Enter the arrival time of the processes:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }
    int timeElapsed=0;
    int completed=0;
    while(completed!=n){
        int min=9999;
        int minIndex=-1;
        for(int i=0;i<n;i++){
            if(at[i]<=timeElapsed && bt[i]<min && bt[i]>0){
                min=bt[i];
                minIndex=i;
            }
        }
        if(minIndex==-1){
            timeElapsed++;
            continue;
        }
        bt[minIndex]--;
        if(bt[minIndex]==0){
            completed++;
            tat[minIndex]=timeElapsed+1-at[minIndex];
            wt[minIndex]=tat[minIndex]-btcopy[minIndex];
        }
        timeElapsed++;

    }
    float avgwt = 0, avgtat = 0;
    printf("Process\tBurst Time\tWaiting Time\tTurn Around Time");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", p[i], btcopy[i], wt[i], tat[i]);
        avgwt += wt[i];
        avgtat += tat[i];
    }
    avgwt /= n;
    avgtat /= n;
    printf("\n");
    printf("Average Waiting Time: %.2f\n", avgwt);
    printf("Average Turn Around Time: %.2f\n", avgtat);
}