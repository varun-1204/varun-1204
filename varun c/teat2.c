// centimeter
#include"stdio.h"
int main()
{
    float centimeter;
    float meter;
    float kilometer;
    printf("enter the value for centimeter: \n");
    scanf("%f",& centimeter);
    meter=centimeter/100;
    kilometer=centimeter/1000;
    printf("meter:%0.2f\n",meter);
    printf("kilometer:%0.2f\n",kilometer);
    return 55;
}