// program for leap year
#include"stdio.h"
int main()
{
    int year;
    printf("enter the year:\n");
    scanf("%d",& year);
    if((year%4==0) &&( year%100!=0||year%400==0))
    {
        printf("the entered year is leap ");

    }
    else
    {
        printf("the entered year is not leap");
    }
    return 0;
}