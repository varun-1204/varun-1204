#include"stdio.h"
int main()
{
    int i,j,n=0;
    for(i=0;i<10;i++)
    {
        for(j=1;j<i+1;j=j+1)
        {
            n = n + 1;
            printf("%d", n);

        } 
        printf("\n");
    }
r