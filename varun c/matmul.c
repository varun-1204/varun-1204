#include"stdio.h"
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10];
    int col1,row1,i,j,k,col2,row2;
    printf("ente rthe value for row1 :\n");
    scanf("%d",& row1,& col1);
    printf("ente rthe value for col1 :\n");
    scanf("%d",& row1);
    printf("enter  the value for row2:\n");
    scanf("%d",& row2);
    printf("enter  the value for col2:\n");
    scanf("%d",& col2);
    if(col1==row2)
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);

        }
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
            
        }
    
    }
    for(i=0;i<row1;i++)
    {
      for(j=0;j<col2;j++)
      {
        mat3[i][j]=0;
        {
            for(k=0;k<row2;k++)
            {
                   mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
            }
            printf("%d",mat3[i][j]);
        }
      }  
    }
    return 0;
}
    