#include<stdio.h>
void main()
{
   int i,*p,n;
   printf("Enter total elements: ");
   scanf("%d",&n);
   p=(int*)malloc(n*sizeof(int));
   for( i=0;i<n;i++)
   {
   scanf("%d",(p+i));
   }
   for( i=0;i<n;i++)
   {
   printf("%d",*(p+i));
   }
   free(p);
}