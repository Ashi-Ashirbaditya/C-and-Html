#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter operator:");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        c=a+b;
        printf("Addition of %d and %d number=%d",a,b,c);
        break;
        case '-':
        c=a-b;
        printf("Subtraction of %d and %d number=%d",a,b,c);
        break;
        case '*':
        c=a*b;
        printf("Multiplication of %d and %d number=%d",a,b,c);
        break;
        case '/':
        c=a/b;
        printf("Division of %d and %d number=%d",a,b,c);
        break;
        case '%':
        c=a%b;
        printf("Modulus of %d and %d number=%d",a,b,c);
        break;
        default:
        printf("Please, Enter a correct operator !");
    }
    getch();
    return 0;
}