#include <stdio.h>

int main() 
{
int price = 0;
printf("请输入金额（元）：");
scanf("%d",&price);

int change = 100 - price;
printf("找零金额为：%d元\n", change);
return 0;
}



