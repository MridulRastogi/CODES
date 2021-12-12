#include <stdio.h>
#include <unistd.h>
int main()
{
    int P[10], AT[10], BT[10], WT[10], TAT[10];
    int i,n;
    WT[0] = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter details of process number %d:\n",(i+1));
        P[i] = (i+1);
        printf("Enter Arrival Time of Process %d: ", (i+1));
        scanf("%d", &AT[i]);
        printf("Enter   Burst Time of Process %d: ", (i+1));
        scanf("%d", &BT[i]);
        printf("\n");
    }
    for (i=1; i<n; i++)
        WT[i] = (BT[i-1] + WT[i-1]);   //WT is the sum of WT and BT of previous process.
    for (i=0; i<n; i++)
        TAT[i] = BT[i] + WT[i];        //TAT is the time elapsed from the time of beginning of the 1st process. Thus the sum of BT & WT
    printf("P.no.\tAT\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++)
        printf("%d\t%d\t%d\t%d\t%d\n", P[i], AT[i], BT[i], WT[i],TAT[i]);
    float avgWT = 0, avgTAT = 0;
    for (i=0; i<n; i++)
        avgWT += WT[i];                //Sum of all the waiting time divided by the number of processes.
    for (i=0; i<n; i++)
        avgTAT += TAT[i];             //Sum of all the turn around time divided by the number of processes.
    printf("    Average Waiting Time: %.3f \n", avgWT/n );
    printf("Average Turn Around Time: %.3f \n", avgTAT/n);
}
/*
3
0
24
0
2
0
3
*/
