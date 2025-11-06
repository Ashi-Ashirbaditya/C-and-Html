#include<stdio.h>
void main()
{
    int n,res;
    int fact(int);
    printf("Enter a number");
    scanf("%d",&n);
    res=fact(n);
    printf("Factorial=%d",res);
}
int fact(int no)
{
    if(no==0)
    return (1);
    else
    return(no*fact(no-1));
}