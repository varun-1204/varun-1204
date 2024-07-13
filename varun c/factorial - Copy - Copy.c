#include"stdio.h"
#include"math.h"
int main()
{   
    int i;
    int num;
    int fact=1;
    printf("enter the number:\n");
    scanf("%d",& num);
    for(i=num;i>0;i=i-1)
        {
            fact=fact*i;
        }
            printf("%d",fact);
return 55;
}
