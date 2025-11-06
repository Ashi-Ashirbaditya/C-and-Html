#include<stdio.h>
int  res;
int powe(int x,int y)
{
    int num=x,power=y,res=1;
    while (power != 0)
    {
        res =res* num;
        power--;
    }
    return(res);
}
int dectohex(int n)
{
    int k;
    while(n!=0)
    {
        k=n%16;
        if(k>9)
        {
        printf("%c",k+55);
        }
        else{
        printf("%d",k);
        }
        n=n/16;
    }
}
int dectobin(int n)
{
    printf("%d",n%2);
    n=n/2;
}
int dectooct(int n)
{
    printf("%d",n%8);
    n=n/8;
}
int bintodec(int n)
{
    int k,sum=0,i=0;
    while(n!=0)
    {
        k=n%10;
        sum=sum+(k*powe(2,i));
        n=n/10;
        i++;
    }
   return(sum);
}
int bintooct(int n)
{
    int res2;
    res=bintodec(n);
    res2=dectooct(res);
    return(res2);
}
int bintohex(int n)
{
    int res2;
    res=bintodec(n);
    res2=dectohex(res);
    return(res2);
}
int octtodec(int n)
{
  int k,sum=0,i=0;
    while(n!=0)
    {
        k=n%10;
        sum=sum+(k*powe(8,i));
        n=n/10;
        i++;
    }
   return(sum);   
}
int octtobin(int n)
{
    int res2;
    res=octtodec(n);
    res2=dectobin(res);
    return(res2);
}
int octtohex(int n)
{
    int res2;
    res=octtodec(n);
    res2=dectohex(res);
    return(res2);
}
int hextodec(int n)
{
    printf("Under construction.Please try again later!....");   
}
int hextobin(int n)
{
    printf("Under construction.Please try again later!....");
}
int hextooct(int n)
{
    printf("Under construction.Please try again later!...."); 
}
void main()
{
    int n,c;
    char k[30];
    printf("Instruction\n");
    printf(" 1.Decimal to Hexadecimal\t 4.Binary to Decimal    \t 7.Octal to Decimal    \t 10.Hexadecimal to Decimal\n");
    printf(" 2.Decimal to Binary     \t 5.Binary to Octal      \t 8.Octal to Binary     \t 11.Hexadecimal to Binary\n");
    printf(" 3.Decimal to Octal      \t 6.Binary to Hexadecimal\t 9.Octal to Hexadecimal\t 12.Hexadecimal to Octal\n");
    printf("Enter conversion");
    scanf("%d",&c);
    if(c>0 && c<4){
    printf("Enter a decimal number:");
    scanf("%d",&n);
    }
    else if(c<7)
    {
    printf("Enter a binary number:");
    scanf("%d",&n);  
    }
    else if(c<10)
    {
    printf("Enter a decimal number:");
    scanf("%d",&n);
    }
    else if(c<13)
    {
    printf("Enter a Hexadecimal number:");
    scanf("%d",&n);   
    }
    switch(c)
    {
    case 1:
    res=dectohex(n);
    printf("%d",res);
    break;
    case 2:
    res=dectobin(n);
    printf("%d",res);
    break;
    case 3:
    res=dectooct(n);
    printf("%d",res);
    break;
    case 4:
    res=bintodec(n);
    printf("%d",res);
    break;
    case 5:
    res=bintooct(n);
    printf("%d",res);
    break;
    case 6:
    res=bintohex(n);
    printf("%d",res);
    break;
    case 7:
    res=octtodec(n);
    printf("%d",res);
    break;
    case 8:
    res=octtobin(n);
    printf("%d",res);
    break;
    case 9:
    res=octtohex(n);
    printf("%d",res);
    break;
    case 10:
    res=hextodec(n);
    printf("%d",res);
    break;
    case 11:
    res=hextobin(n);
    printf("%d",res);
    break;
    case 12:
    res=hextooct(n);
    printf("%d",res);
    break;
    default:
    printf("Enter valid option...!");
    }
}