#include"stdio.h"
int main()
{
    int i;
    int num;
    int table;
    printf("enter the value:\n");
    scanf("%d",& num);
    {
        for(i=0;i<=10;i++)
            {
                table=num*i;
                
                printf("%d*%d=%d\n",i,num,table);
            }

    }
return 55;
}