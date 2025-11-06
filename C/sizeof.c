#include<stdio.h>
void main()
{
    int a;
    float b;
    char c;
    printf("Enter a Character:");
    scanf("%c",&c);
    printf("Enter a Integer:");
    scanf("%d",&a);
    printf("Enter a Float:");
    scanf("%f",&b);
    printf("\nsize of integer=%d",sizeof(a));
    printf("\nsize of float=%d",sizeof(b));
    printf("\nsize of char=%d",sizeof(c));
}