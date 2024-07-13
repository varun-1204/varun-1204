#include "stdio.h"
int main()
{
  int sub1;
  int sub2;
  int sub3;
  int sub4;
  int sub5;
  float average;
  int total;
  printf("enter the sub1:\n");
  scanf("%d", & sub1);
  printf("enter the sub2:\n");
  scanf("%d", & sub2);
  printf("enter the sub3:\n");
  scanf("%d", & sub3);
  printf("enter the sub4:\n");
  scanf("%d", & sub4);
  printf("enter the sub5:\n");
  scanf("%d", & sub5);
  average=(sub1+sub2+sub3+sub4+sub5)/5;
  total=sub1+sub2+sub3+sub4+sub5;
  printf("average:%0.1f\n",average);
  printf("total:%d\n",total);
  return 55;
}