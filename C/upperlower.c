#include<stdio.h>
void main()
{
    char ch;
    int con;
    printf("Enter a alphabet:");
    scanf("%c",&ch);
    if( ch>='a'&& ch<='z')
    {
    printf("%c is lowercase",ch);
    con=ch-32;
    printf("\nUpper case=%c",con);
    }
    else if(ch>='A'&& ch<='Z')
    {
    printf("%c is uppercase",ch);
    con=ch+32;
    printf("\nLower case=%c",con);
    }
    else
    printf("Invalid character!");
}