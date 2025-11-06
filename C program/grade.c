#include<stdio.h>
void main()
{
    float phy,chem,bio,math,comp,total,per;
    printf("Enter marks of phy,chem,bio,math,comp:");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
    total=phy+chem+bio+math+comp;
    per=total/5.0;
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else if(per<40)
    printf("Grade F");
}