//program to count the digit
#include<stdio.h>
int main()
{
    int num;
    int count=0;

    int dig;
    printf("enter the number\n");
    scanf("%d\n",& num);
    while(num!=0)
    {
        dig=num%10;
        num=num/10;
        count=count+1;
        printf("%d",count);
    }
return 0;
}