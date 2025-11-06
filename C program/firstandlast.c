#include<stdio.h>
void main()
{
    int rem,n,fst;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        fst=rem;
        n=n/10;
    }
    printf("1st number =%d\n",fst);
    printf("%d",n);
}