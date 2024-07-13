#include"stdio.h"
int main()
{
    char s1[100];
    gets(s1);
    int i,count=0;
    for(i=0;s1[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}