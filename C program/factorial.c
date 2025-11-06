#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial=%d",fact);
}