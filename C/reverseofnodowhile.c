#include<stdio.h>
void main()
{
    int n,rev=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }while(n>0);
    printf("Reverse=%d",rev);
}