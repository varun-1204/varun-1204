//program for the expression
#include<stdio.h>
int main()
{
    int expression1=10&&8;
    int expression2=0&&8;
    int expression3=0&&0;
    int expression4=0&&0;
    printf("Expression1:%d\n",expression1);
    printf("Expression2:%d\n",expression2);
    printf("Expression3:%d\n",expression3);
    printf("Expression4:%d\n",expression4);
    return 0;
}