#include<stdio.h>
void main()
{
    int by,bm,bd;
    int cy,cm,cd;
    int ay,am,ad;
    printf("Enter dob in yyyymmdd format:");
    scanf("%d%d%d",&by,&bm,&bd);
    printf("Enter current date in yyyymmdd format:");
    scanf("%d%d%d",&cy,&cm,&cd);
    //for month february
    if(bm==2)
    {
        if(cd<bd)
        {
            cd=cd+28;
            cm--;
            if(cm<bm)
            {
            cm+=12;
            cy--;
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);
            }
            else
            {
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);   
            }
        }
        else{
            if(cm<bm)
            {
            cm+=12;
            cy--;
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);
            }
            else
            {
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);   
            }
        }
    }
    //For 30days months
    else if(bm== 4||6||9||11)
    {
        if(cd<bd)
        {
            cd=cd+30;
            cm--;
            if(cm<bm)
            {
            cm+=12;
            cy--;
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);
            }
            else
            {
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);   
            }
        }
        else{
            if(cm<bm)
            {
            cm+=12;
            cy--;
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);
            }
            else
            {
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);   
            }
        }
    }
    //for 31 days months
    else{
        if(cd<bd)
        {
            cd=cd+31;
            cm--;
            if(cm<bm)
            {
            cm+12;
            cy--;
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);
            }
            else
            {
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);   
            }
        }
        else{
            if(cm<bm)
            {
            cm+=12;
            cy--;
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);
            }
            else
            {
            ay=cy-by;
            am=cm-bm;
            ad=cd-bd;
            printf("Your age is %d years %d months %d days",ay,am,ad);   
            }
        }
    }
}