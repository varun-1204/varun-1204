//program for reverse the given number
#include"stdio.h"
int main()
{
    int num1;
    int reverse=0,reminder;
    printf("enter the num");
    scanf("%d", & num1);
    while(num1!=0)
    {
        reminder=num1 %10;
        reverse=reverse*10+reminder;
        num1/=10;
    }
    printf("reversed number:%d",reverse);
    return 0;
}