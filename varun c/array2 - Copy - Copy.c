//get the valuse from user and print the input
#include"stdio.h"
int main()
{
    int n;
    printf("enter the number of value:\n");
    scanf("%d",&n);
    char arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("%s ",arr[i]);

    }
return 66;
}