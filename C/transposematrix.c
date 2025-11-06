#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    //input elements in matrix
    printf("Enter element in matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Display the elements matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //Diplay transpose elements in matrix
    printf("\n Transpose:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}