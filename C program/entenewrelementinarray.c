#include<stdio.h>
void main()
{
    int arr[100],i,n,pos,el;
    printf("Enter how many elements: ");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position of new element",pos);
    scanf("%d",&pos);
    pos--;
    //Shifting elements in array
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    printf("Enter the new element");
    scanf("%d",&el);
    arr[pos]=el;
    n++;
    //Display the new array
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}