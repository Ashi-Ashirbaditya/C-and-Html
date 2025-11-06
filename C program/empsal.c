#include<stdio.h>
void main()
{
    float bsal,gsal,hra,da;
    printf("Enter basic salary:");
    scanf("%f",&bsal);
    if(bsal<=10000)
    {
    hra=bsal*0.2;
    da=bsal*0.8;
    gsal=bsal+hra+da;
    printf("Gross salary=%.2f",gsal);
    }
    else if(bsal<=20000)
    {
    hra=bsal*0.25;
    da=bsal*0.9;
    gsal=bsal+hra+da;
    printf("Gross salary=%.2f",gsal);
    }
    else if(bsal>=20001)
    {
    hra=bsal*0.3;
    da=bsal*0.95;
    gsal=bsal+hra+da;
    printf("Gross salary=%.2f",gsal);
    }
}