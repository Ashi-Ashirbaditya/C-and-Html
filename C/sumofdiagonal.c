#include<stdio.h>
void main()
{
    int a[100][100],i,j,n,sum=0;
    printf("Enter matrix size");
    scanf("%d",&n);
    //input elements in matrix
    printf("Enter element in matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            //Calculate sum of  diagonal elements
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    //Display the elements matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%u\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of diagonal elements=%u",sum);
}