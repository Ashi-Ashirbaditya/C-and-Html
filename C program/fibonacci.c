#include<stdio.h>
void main()
{
    int i=0,j=1,k,c,n;
    printf("Enter  total no.of terms");
    scanf("%d",&n);
    printf("%d\t",i);
    printf("%d\t",j);
    k=i+j;
    for(c=2;c<n;c++)
    {
        printf("%d\t",k);
        i=j;
        j=k;
        k=i+j;
    }
}