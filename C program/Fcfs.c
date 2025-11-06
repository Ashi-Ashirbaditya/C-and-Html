#include<stdio.h>
void main()
{
    /*input values*/
    int at1,at2,at3,at4,bt1,bt2,bt3,bt4,wt1,wt2,wt3,wt4,tat1,tat2,tat3,tat4,ct1,ct2,ct3,ct4;
    printf("Enter arrival time for p1:");
    scanf("%d",&at1);
    printf("Enter brust time for p1:");
    scanf("%d",&bt1); 
    printf("Enter arrival time for p2:");
    scanf("%d",&at2);
    printf("Enter brust time for p2:");
    scanf("%d",&bt2); 
    printf("Enter arrival time for p3:");
    scanf("%d",&at3);
    printf("Enter brust time for p3:");
    scanf("%d",&bt3); 
    printf("Enter arrival time for p4:");
    scanf("%d",&at4);
    printf("Enter brust time for p4:");
    scanf("%d",&bt4); 
    /*completion time*/
    ct1=bt1;
    ct2=ct1+bt2;
    ct3=ct2+bt3;
    ct4=ct3+bt4;
    /*Turnaround time*/
    tat1=ct1-at1;
    tat2=ct2-at2;
    tat3=ct3-at3;
    tat4=ct4-at4;
    /*Waiting Time*/
    wt1=tat1-bt1;
    wt2=tat2-bt2;
    wt3=tat3-bt3;
    wt4=tat4-bt4;
    /*Display output*/
    printf("\nProcess_id   Arrival_time   Burst_time   Turn around_time    Waiting_time\n");
    printf("\n p1\t\t %d\t\t %d\t\t %d\t\t %d ",at1,bt1,tat1,wt1);
    printf("\n p2\t\t %d\t\t %d\t\t %d\t\t %d ",at2,bt2,tat2,wt2);
    printf("\n p3\t\t %d\t\t %d\t\t %d\t\t %d ",at3,bt3,tat3,wt3);
    printf("\n p4\t\t %d\t\t %d\t\t %d\t\t %d ",at4,bt4,tat4,wt4);
}