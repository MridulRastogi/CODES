#include <stdio.h>
int main()
{
    int P[10], AT[10], BT[10], WT[10], TAT[10];
    int n,i,j;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the details of process number %d: \n",(i+1));
        P[i] = i+1;
        printf("Enter Arrival time process of %d:\n", (i + 1));
        scanf("%d", &AT[i]);
        printf("Enter Burst time process of %d:\n", (i + 1));
        scanf("%d", &BT[i]);
    }
    int index, temp;
    for (i=0; i<n; i++)
    {
        index = i;
        for (j=i+1; j<n; j++)
            if (BT[j] < BT[index])
                index = j;

             temp = BT[i];
            BT[i] = BT[index];
        BT[index] = temp;
             temp = P[i];
             P[i] = P[index];
    }
    WT[0] = 0;
    for (i=1; i<n; i++)
        WT[i] = WT[i-1] + BT[i-1];      //Finding the waiting time of each and every event.((wt+bt)of previous event)
    for (i=0; i<n; i++)
        TAT[i] = BT[i] + WT[i];         //Finding the Turnaround time of all the events.   (bt+wt)
    printf("P.no.\tAT\tBT\tWT\tTAT\n");
    for (i=0; i<n; i++)
        printf("%d\t%d\t%d\t%d\t%d\n", P[i], AT[i], BT[i], WT[i],TAT[i]);
    int avgWT = 0, avgTAT = 0;
    for (i=0; i<n; i++)
        avgWT += WT[i];
    for (i=0; i<n; i++)
        avgTAT += TAT[i];
    printf("      Average Waiting Time : %.3f\n", (float)avgWT  /n);
    printf("Average Turner around time : %.3f\n", (float)avgTAT /n);

    return 0;
}
