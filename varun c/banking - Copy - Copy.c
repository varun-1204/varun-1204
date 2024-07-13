//program for banking
#include "stdio.h"
int main()
{
    int total_amount;
    int debited_amount;
    int avl_balance;
    printf("enter the total amount:\n");
    scanf("%d",& total_amount);
    printf("enter the amount to withdraw: \n");
    scanf("%d", & debited_amount);
    avl_balance=total_amount-debited_amount;
    printf("avl_balance:%d", avl_balance);
    return 0;


}