#include <stdio.h>

int main() 
{
    int kilometers;
    int meters;
    printf("enter the kilometer:");
    scanf("%d",& kilometers);
    meters=kilometers*1000;
    printf("%d", meters);
    return 0;
}