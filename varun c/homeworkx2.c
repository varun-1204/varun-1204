#include"stdio.h"
int main()
{
   int i,j;
   int mat1[100][100];
   int row,col;
   printf("enter the num of row:");
   scanf("%d",& row);
   printf("enter the value for col:");
   scanf("%d",& col);
   for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
    {
        scanf("%d",& mat1[i][j]);
    }

   }
   for(i=0;i<row;i++)
   {
    for(j=0;j<1;j++)
    {
        printf("the tem of first city:%d\n",mat1[i][j]);
    }
   }
   for(i=0;i<row;i++)
   {
    for(j=1;j<=1;j++)
    {
        printf("the tem of second city:%d\n",mat1[i][j]);
    }
   }
return 0;
}