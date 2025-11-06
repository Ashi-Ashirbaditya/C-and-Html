#include<stdio.h>
void main()
{
    int n,res;
    int pal(int);
    printf("Enter a number");
    scanf("%d",&n);
    res=pal(n);
    if(res==n)
    printf("%d is pallindrome",n);
    else
    printf("It is not a pallindrome");
}
int pal(int no)
{
    int rem;
    static int rev=0;
    if(no==0)
    return (rev);
    else
    {
        rem=no%10;
        rev=rev*10+rem;
        return(pal(no/10));
    }
}