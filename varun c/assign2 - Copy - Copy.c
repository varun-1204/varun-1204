//program for evalute1

#include "stdio.h"
int main()
{
    int first;
    int second;
    int third;
    first = 4 > 3 && 3 > 2;
    second = (2 + 3) > (4 + 5);
    third = 6 > (3 + 2) < 5;

    // if(4>3&3>2){
    // printf("result: %s\n", "True");
    // }

    printf("result: %d\n", first);
    printf("result: %d\n", second);
    printf("result: %d\n", third);
    return 34;
}