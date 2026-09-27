//输入四个整数，要求按由小到大的顺序输出
#include<stdio.h>
int main()
{
    int digits[4];
    int i,j,temp;

for (i = 0; i < 4; i++)
{
    printf("请输入第%d个数\n",i+1);
     scanf("%d",&digits[i]);     
}
for (i = 0; i < 3; i++)
{
    for(j = 0;j < 3 - i; j++)
  {
    if(digits[j] > digits[j+1])//冒泡排序
    {
        temp = digits[j];
        digits[j] = digits[j + 1];//temp中转换序
        digits[ j + 1] = temp;
    }
  }
}
printf("从小到大的结果是：");
for(i=0;i<4;i++)
{
    printf("%d ",digits[i]);
}
printf("\n");
return 0;
}




