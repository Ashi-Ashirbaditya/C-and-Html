#include<stdio.h>
void main()
{
    int cp,sp,profit,loss;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(cp<sp)
    {
    profit=sp-cp;
    printf("Profit=%d",profit);
    }
    else
    {
    loss=cp-sp;
    printf("Loss=%d",loss);
    }
}