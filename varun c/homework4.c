//program for simpleintrest
#include<stdio.h>
int main()
{
    int p;
    int r;
    int t;
    int SI;
    printf("enter the value for p:\n");
    scanf("%d", & p);
    printf("enter the value for r:\n");
    scanf("%d", & r);
    printf("enter the value for t:\n");
    scanf("%d", & t);
    SI=(p*r*t)/100;
    printf("%d",SI);
    return 0;

}