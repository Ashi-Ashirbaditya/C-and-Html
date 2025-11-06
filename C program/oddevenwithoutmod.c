#include<stdio.h>
void main()
{
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    k=n;
    n=(n/2);
    n=n*2;
    if(k==n)
    printf("%d is Even",k);
    else
    printf(" %d is Odd",k);
}