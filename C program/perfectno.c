#include<stdio.h>
void main()
{
    int i=1,num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        sum=sum+i;
        i++;
    }
    if(num==sum)
    printf("%d is a perfect number.",num);
    else
    printf("%d is not a perfect number.",num);
}