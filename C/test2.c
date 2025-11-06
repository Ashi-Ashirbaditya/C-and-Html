#include<stdio.h>
int rev(int n)
{
    int rev=0,rem;   
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return (rev);
}
void main()
{
    int x,y;
    y=rev(x);
    printf("Reverse=%d",y);
}