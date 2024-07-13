// program for left shift and right shift
#include <stdio.h>
int main()
{
    int num = 10;
    num <<= 4;
    printf("Left shift by 4 digits: %d\n", num);
    num >>= 3;
    printf("Right shift by 3 digits: %d\n", num);
    return 0;
}
