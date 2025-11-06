#include<stdio.h>
void main()
{
    int n,res;
    int revs(int);
    printf("Enter a number");
    scanf("%d",&n);
    res=revs(n);
    printf("%d",res);
}
int revs(int no)
{
    int rem;
    static int rev=0;
    if(no==0)
    return (rev);
    else
    {
        rem=no%10;
        rev=rev*10+rem;
        return(revs(no/10));
    }
}