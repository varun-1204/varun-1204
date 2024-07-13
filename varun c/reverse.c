#include"stdio.h"
int main()
{
    int num;
    int dig;
    int reverse=0;
    printf("enter the value:\n");
    scanf("%d",& num);
    {
        while (num>0)
        {
            dig=num%10;
            reverse=reverse*10+dig;
            dig=dig/10;
        

        }
        printf("%d",num);
    }
return 55;
}