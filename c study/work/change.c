#include <stdio.h>

int main() 
{
        int price = 0;
printf("请输入金额（元）：");
scanf("%d",&price);

       const int amount = 100;

        int change = amount - price;
printf("找零金额为：%d元\n", change);
 return 0;
}



