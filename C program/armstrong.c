#include<stdio.h>
void main()
{
    int rem,num,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    if(temp==sum)
    printf("%d is a armstrong number.",temp);
    else
    printf("%d is not a armstrong number.",temp);
}