#include<stdio.h>
struct cricket{
    char name[20],tname[20];
    float avg;
};
void main()
{
    struct cricket a[50];
    int i;
    printf("Enter 50 records of players as \n ");
    for(i=1;i<50;i++)
    {
        printf("%d.player name",i);
        scanf("%s",&a[i].name);
        printf("%d.Team name",i);
        scanf("%s",&a[i].tname);
        printf("%d.Batting avarage",i);
        scanf("%f",&a[i].avg);
    }
    for(i=1;i<=50;i++)
    {
        printf("%s\n",a[i].tname);
        printf("%s\t",a[i].name);
        printf("%f\n",a[i].avg);
    }  
}
