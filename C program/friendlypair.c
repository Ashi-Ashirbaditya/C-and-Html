#include <stdio.h>
int friendly(int num)
{
    int sum = 0;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
           sum = sum + i;
    }
    return sum;
}
void main ()
{
    int num1, num2,sum1,sum2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    sum1 = friendly(num1);
    sum2 = friendly(num2);
       if(sum1/num1 == sum2/num2)
        printf("%d and %d are friendly pairs", num1, num2);
    else
        printf("%d and %d are not friendly pairs", num1, num2);  
}