
#include"stdio.h"
#include"stdlib.h"
int main(){
FILE*fa;
fa=fopen("file.txt","r");
char filedata[100];
fscanf(filedata,100,fa);
printf("%s",filedata);
return 0;
}