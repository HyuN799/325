#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("请输入形式为 ax^2 + bx + c = 0 的方程参数:\n");
     printf("请输入a的值: ");
    scanf("%f",&a);
     while(a == 0)
    {
        printf("a不能为0，请重新输入a的值: ");
        scanf("%f",&a);
    }
     printf("请输入b的值: ");
    scanf("%f",&b);
     printf("请输入c的值: ");
    scanf("%f",&c);
    d = b*b - 4*a*c;
    if(d > 0)
    {
        float x1 = (-b + sqrt(d)) / (2*a);
        float x2 = (-b - sqrt(d)) / (2*a);
        printf("方程有两个不同的实数根: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if(d == 0)
    {
        float x = -b / (2*a);
        printf("方程有一个实数根: x = %.2f\n", x);
    }
    else
    {
        printf("方程没有实数根。\n");
    }
    return 0;
}