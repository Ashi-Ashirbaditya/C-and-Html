#include<stdio.h>
void main()
{
    int n;
    int i=2;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        i+=2;
    }
}