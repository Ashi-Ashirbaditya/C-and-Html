#include<stdio.h>
void main()
{
    int n;
    int i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d * %d =%d1\n",n,i,n*i);
        i++;
    }
}