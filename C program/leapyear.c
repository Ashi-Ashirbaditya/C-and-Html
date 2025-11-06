#include<stdio.h>
void main()
{
    int  i,n,k=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            k==1;
        }
        
    }
    if(k==0)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
}