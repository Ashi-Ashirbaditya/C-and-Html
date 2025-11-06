#include<stdio.h>
void main()
{
    int n,res;
    int arm(int);
    printf("Enter a 3 digit number:");
    scanf("%d",&n);
    res=arm(n);
    if(res==n)
    printf("%d is a armstrong number",n);
    else
    printf("It is not a armstrong");
}
int arm(int no)
{
    int rem;
    static int s=0;
    if(no==0)
    return (s);
    else
    {
        rem=no%10;
        s=s+(rem*rem*rem);
        return(arm(no/10));
    }
}