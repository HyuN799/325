//1000以内正数开平方
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("请输入一个小于1000的正数：\n");
    scanf("%f",&a);
    while(a>=1000||a<=0)
    {
        printf("输入错误，请重新输入一个小于1000的正数：\n");
        scanf("%f",&a);
    }

sqrt(a);
    printf("该数的平方根为：%.2f\n",sqrt(a));
    return 0;
}   
