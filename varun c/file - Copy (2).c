
#include"stdio.h"
#include"stdlib.h"
int main(){
FILE*fa;
fa=fopen("file.txt","w");
if(fa==NULL)
{
    printf("the file is empty");

}
else
{
    printf("the is created");
}
return 0;
}

