#include<stdio.h>
#include<conio.h>
void main()
{
    float unit,bill,total,ed=35,mc=28;
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
        bill=(50*3.40);
        unit=unit-50;
        bill=unit*4.80;
    }
    total=bill+ed+mc;
    printf("ED charge=%d",ed);
    printf("Maintainance charge=%d",mc);
    printf("Total amount paid=%d",total);
}