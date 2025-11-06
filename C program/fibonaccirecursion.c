#include<stdio.h>
void fibo(int n)
{
    static int i=0,j=1,k;
    if(n>0){
        k=i+j;
        i=j;
        j=k;
        printf("%d\t",k);
        fibo(n-1);
    }
}
void main()
{
    int n,n1=0,n2=1;
    printf("Enter total no.of terms:");
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    fibo(n-2);
}