#include<stdio.h>
void main()
{
    int num,power,result;
    result = 1;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Enter power of number");
    scanf("%d",&power);
    while (power != 0)
    {
        result =result* num;
        power--;
    }
    printf("Answer = %d", result);
}