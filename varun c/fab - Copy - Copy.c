#include"stdio.h"
int main()
{
    int fab1=0;
    int fab2=1;
    int fab3;
    int num;
    for(num=2;num<=8;num=num+1)
        {
            
            fab3=fab1+fab2;
        
            printf("%d",fab3);
        
            fab1=fab2;
            fab2=fab3;
        }
return 66;

        
}