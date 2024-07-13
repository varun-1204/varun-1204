#include"stdio.h"
int fact(int);
int main()
{
    int factorial;
    int n;
    n=5;
    int result=fact(n);
    printf("%d",result);
}
int fact(int)

{
    if(n==0)
    {
        return 1;
    }
    else
    {
        factorial=n*fact(n-1);

    }
return 0;
}
