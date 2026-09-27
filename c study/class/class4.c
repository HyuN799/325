#include <stdio.h>
int main()
{
    float c,f;
    printf("请输入华氏温度");
        scanf("%f",&f);
    c=5*(f-32)/9;
        printf("摄氏温度为：%f\n",c);
return 0;
}