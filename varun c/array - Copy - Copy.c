#include"stdio.h"
int main()
{
    int sum=0;
    int avg;
    float per;
    char name[100];
    char dept[100];
    int i;
    int sub[5];
    printf("enter the name:\n");
    scanf("%s",& name);
    printf("enter the dept:\n");
    scanf("%s",& dept);
    for (i=0;i<5;i++)
    {
        printf("enter the marks:\n");
        scanf("%d",&sub[i]);
    
        sum=sum+sub[i];
        avg=sum/5;
        per=(sum*100)/500;
    }
    printf("%s\n",name);
    printf("%s\n",dept);
    printf("%d\n",avg);
    printf("%f\n",per);
    return 0;
}