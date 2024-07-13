// program for area of triangle
#include<stdio.h>
int main()
{
    float b;
    float h;
    float area;
    printf("enter the value for b:\n");
    scanf("%f",& b);
    printf("enter the value for h:\n");
    scanf("%f",& h);
    area=0.5*b*h;
    printf("%f",area);
    return 0;
}