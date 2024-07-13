#include"stdio.h"
int main()
{
    char choice;
    int num1;
    int num2;
    int num3;
    printf("enter the choice:\n");
    scanf("%c", & choice);
    switch (choice)
    {
        case '+':
            printf("enter the value for num1:\n");
            scanf("%d",& num1);
            printf("enter the value for num2:\n");
            scanf("%d",& num2);
            num3=num1+num2;
            printf("%d", num3);
            break;
        case '-':
            printf("enter the value for num1:\n");
            scanf("%d",& num1);
            printf("enter the value for num2:\n");
            scanf("%d",& num2);
            num3=num1-num2;
            printf("%d", num3);
            break;
        case '*':
            printf("enter the value for num1:\n");
            scanf("%d",& num1);
            printf("enter the value for num2:\n");
            scanf("%d",& num2);
            num3=num1*num2;
            printf("%d", num3);
            break;
        case '/':
            printf("enter the value for num1:\n");
            scanf("%d",& num1);
            printf("enter the value for num2:\n");
            scanf("%d",& num2);
            num3=num1/num2;
            printf("%d", num3);
            break;
    }
    return 55;
}