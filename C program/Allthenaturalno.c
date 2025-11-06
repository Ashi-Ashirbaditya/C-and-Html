#include <stdio.h>
void main()
{
    int n;
    fflush(stdin);
    int i=1;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        i++;
    }
}