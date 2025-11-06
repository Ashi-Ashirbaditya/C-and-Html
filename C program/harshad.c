#include <stdio.h>
int harshad(int num)
{
    int sum = 0;
    int temp = num;
    while(temp != 0)
    {
        sum = sum + temp % 10;
        temp /= 10;
    }
    // will return 1 if num is divisible by sum, else 0
    return num % sum == 0;
}
 void main ()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(harshad(num))
        printf("%d is Harshad's Number", num);
    else
        printf("%d is not Harshad's Number", num);
}