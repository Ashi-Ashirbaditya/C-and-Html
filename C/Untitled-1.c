#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root;
    printf("Enter co-efficient of x^2:");
    scanf("%f",&a);
    printf("Enter co-efficient of x:");
    scanf("%f",&b);
    printf("Enter value of C:");
    scanf("%f",&c);
    root=(-b +sqrt((b*b)-4ac))/2a;
    printf("Root=%.2f",root);
}