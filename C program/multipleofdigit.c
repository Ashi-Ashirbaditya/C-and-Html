#include<stdio.h>
void main()
{
    int rem,n,mul=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        mul*=rem;
        n=n/10;
    }
    printf("%d",mul);
}