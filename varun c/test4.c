#include"math.h"
#include"stdio.h"
int main()
{
    int num1;
    int num2;
     long long int num3;
    printf("enter the value for num1:\n");
    scanf("%d",& num1);
    printf("enter the value for num2:\n");
    scanf("%d",& num2);
    num3=pow(num1,num2);
    printf("result:%lld",num3);
    return 10;
}