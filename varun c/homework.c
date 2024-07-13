//program for circumference of circle
#include"stdio.h"
int main()
{
    float pi=3.14;
    float circumference;
    float r;
    printf("enter the value for r:\n");
    scanf("%f",& r);
    circumference=2*pi*r;
    printf("%0.4f",circumference);
    return 0;
}