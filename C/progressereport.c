#include<stdio.h>\
#include<conio.h>
void main()
{
    int roll; 
    float m1,m2,m3,m4,m5,total;
    float percent;
    char name[20];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter roll no");
    scanf("%d",&roll);
    printf("Enter science mark");
    scanf("%f",&m1);
    printf("Enter math mark");
    scanf("%f",&m2);
    printf("Enter eng mark");
    scanf("%f",&m3);
    printf("Enter computer mark");
    scanf("%f",&m4);
    printf("Enter odia mark");
    scanf("%f",&m5);
    total=m1+m2+m3+m4+m5;
    percent=(total/500);
    percent=percent*100;
    printf(" Progress   Report\n");
    printf("----------------------------\n");
    printf("|name :- soumyaranjan jena|\n");
    printf("|roll no :- %d            |\n",roll);
    printf("----------------------------\n");
    printf("|Subjects   | Marks       |\n");
    printf("----------------------------\n");
    printf("|Science    |%.2f           |\n",m1);
    printf("|math       |%.2f           |\n",m2);
    printf("|English    |%.2f           |\n",m3);
    printf("|Computer   |%.2f           |\n",m4);
    printf("|Odia       |%.2f           |\n",m5);
    printf("---------------------------\n");
    printf("|Percent    |%.2f         |",percent);
    getch();
}