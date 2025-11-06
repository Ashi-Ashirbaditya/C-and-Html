#include<stdio.h>
void main()
{ 
    int n;
    printf("Enter an number");
    scanf("%d",&n);
    printf("%d",recurSum(n));  
} 
int calculate(int n) 
{ 
    if (n <= 1) 
        return n; 
    return n + calculate(n - 1); 
} 
  