#include"stdio.h"
int main()
{
    int mat1[100][100];
    int sum;
    int row,col,i,j;
    printf("enter the value for row:\n");
    scanf("%d",& row);
    printf("enter the value for col:\n");
    scanf("%d",& col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            sum=sum+mat1[i][j];
            
        }
        printf("sum of row:%d\n",sum);
    }

    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            sum=sum+mat1[j][i];
            
        }
        printf("sum of col:%d\n",sum);
    }
    

return 0;
}