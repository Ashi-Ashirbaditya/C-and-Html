#include<stdio.h>
void main()
{
    int i,n,k=1;
    static int rng;
    printf("Enter a range:");
    scanf("%d",&rng);
    for(n=1;n<rng;n++)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k=0;
            break;
        }
    }
    if(k==1)
    {
    printf("%d",n);
    }
    }
}