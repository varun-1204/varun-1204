//program for convert fahrenheit to celsius

#include <stdio.h>

int main() 
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%0.2f", celsius);
    return 0;
}