#include<stdio.h>
#include<conio.h>
void main()
{
    float unit,bill,total,ed=35,mc=26;
    printf("Enter Unit:");
    scanf("%f",&unit);
    if (unit<=50)
    {
      bill= unit*3.40;  
    }
    else if (unit<200)
    {
        bill=(50*3.40)+(unit-50)*4.80;
    } 
    else if (unit>=200)
    {
        bill=(50*3.40)+(150*4.80)+(unit-200)*5.40;
    }
    total=bill+ed+mc;
    printf("ED charge=%.2f\n",ed);
    printf("Maintainance charge=%.2f\n",mc);
    printf("Total amount paid=%.2f\n",total);
}