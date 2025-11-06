#include<stdio.h>
void main()
{
    int n;
    int i=1,sum=0;
    printf("Enter how many numbers:");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }
    printf("Sum= %d",sum);
}