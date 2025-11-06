#include<stdio.h>
void main()
{
    int  a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a!=0)
    {
        if(a>0)
        {
            printf("%d is positive",a);
        }
        else
        {
            printf("%d is negative",a);
        }
    }    
   else
    printf("Value is 0");
}