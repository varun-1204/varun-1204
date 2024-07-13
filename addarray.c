#include<stdio.h>
int main()
{
    int r,c,a[r][c],b[r][c],e[r][c];
    int i,j;
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    printf("/n");
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("%d",b[i][j]);
        }
    }
    printf("/n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            e[i][j]=a[i][j]+b[i][j];
            printf("%d",&e[i][j]);
        }
    }
    
}