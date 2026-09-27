//输入10个整数，输出最大值
#include<stdio.h>
int main()
{
    int max,num;
    printf("Enter the first number: ");
    scanf("%d", &num);
    max = num;
  for(num=1;num<10;num++)
  {
    int num;
    printf("Enter the next number: ");
    scanf("%d", &num);
    if(num>max)
      max=num;
  }
  printf("The maximum number is: %d\n", max);
  return 0;
}