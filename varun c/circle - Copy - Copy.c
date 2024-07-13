// program for are of circle
#include"stdio.h"
int main()
{
    float pi =3.14;
    float r;
    float area;
    printf("enter the value of r:\n");
    scanf("%f",& r);
    area=pi*r*r;
    printf("%0.4f",area);
    return 0;
}