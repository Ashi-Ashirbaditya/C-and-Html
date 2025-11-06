#include<stdio.h>
void main()
{
    int n,res;
    int sum(int);
    printf("Enter a number");
    scanf("%d",&n);
    res=sum(n);
    printf("Factorial=%d",res);
}
int sum(int no)
{
    int rem;
    static int s=0;
    if(no==0)
    return (s);
    else
    {
        rem=no%10;
        s=s+rem;
        return(sum(no/10));
    }
}