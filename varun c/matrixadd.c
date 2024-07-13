#include"stdio.h"
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10];
    int col,row,i,j;
    printf("ente rthe value for row:\n");
    scanf("%d",& row);
    printf("enter  the value for col:\n");
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
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat2[i][j]);
            
        }
    
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf(" %d",mat3[i][j]);
        }
        printf("\n");
    }

return 0;
}    





























    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
