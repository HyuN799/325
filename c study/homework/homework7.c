//函数计算
#include<stdio.h>
#include<math.h>
int main()
{
    float a,x,y;
printf("这是一个函数计算器，给出了函数y=x(x<1 y=2x-1(1<=x<10) y=3x-11(x>=10)的图像，请输入一个数：\n");
scanf("%f",&a);

if(a<1)
 {
    x=a;
    y=x;
    printf("当x=%.3f时，y=%.3f\n",x,y);
 }
else if(a>=1&&a<10)
 {
    x=a;
    y=2*x-1;
    printf("当x=%.3f时，y=%.3f\n",x,y);
 }    
else if(a>=10)
 {
    x=a;
    y=3*x-11;
    printf("当x=%.3f时，y=%.3f\n",x,y);
 }
}