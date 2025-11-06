#include <stdio.h> 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a%b, b); 
    if(b>a)    
       return gcd(a, b%a); 
} 
void main() 
{ 
    int a,b,res;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    res=gcd(a,b);
    printf("GCD of %d and %d is %d ", a, b,res); 
}