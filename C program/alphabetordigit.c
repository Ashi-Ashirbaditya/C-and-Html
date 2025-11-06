#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(( ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z'))
    printf("%c is a alphabet",ch);
    else if(ch>='0' && ch<='9' )
    printf("%c is a number",ch);
    else
    printf("%c is a special charcter",ch);
}