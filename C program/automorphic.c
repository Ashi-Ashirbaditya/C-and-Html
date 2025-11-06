#include <stdio.h>
int automorphic(int num)
{
    int square = num * num;
    while(num != 0)    
    {
        // means not automorphic number
        if(num % 10 != square % 10)
        {
            return 0;
        }
        // reduce down numbers
        num =num/10;
        square =square/10;
    }
    // if reaches here means automorphic number
    return 1;
}
void main ()
{
    int num,square;
    printf("Enter a number");
    scanf("%d",&num);
    square = num * num ;
    if(automorphic(num))
        printf("Num : %d, Square: %d - Automorphic Number",num, square);
    else
        printf("Num : %d, Square: %d - Not Automorphic Number",num, square);
}