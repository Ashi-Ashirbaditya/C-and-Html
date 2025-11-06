#include <stdio.h>
void main()
{
    char p[5];
    int alloca[5],allocb[5],allocc[5],maxa[5],maxb[5],maxc[5],avla,avlb,avlc;
    int needa[5],needb[5],needc[5],n;
    printf("Enter total number of process:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter process id");
    scanf("%c",&p[i]);
    printf("Enter Allocation:");
    scanf("%d%d%d",&alloca[i],&allocb[i],&allocc[i]);
    printf("Enter Max values:");
    scanf("%d%d%d",&maxa[i],&maxb[i],&maxc[i]);
    }
    printf("Enter Availablity:");
    scanf("%d%d%d",&avla,&avlb,&avlc);
}