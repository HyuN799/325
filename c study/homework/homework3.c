//输入10个整数，输出最大值
#include<stdio.h>
 int main()
 {
    int max;
    int a,b,c,d,e,f,g,h,i,j;
    printf("请输入10个整数,用逗号分隔：\n");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
   if(a>b)
      max=a;
   else
      max=b;
    if(max<c)
      max=c;
    if(max<d)
      max=d;
    if(max<e)
      max=e;
    if(max<f)
      max=f;
    if(max<g)
      max=g;
    if(max<h)
      max=h;
    if(max<i)
      max=i;
    if(max<j)
      max=j;
    printf("max is %d\n",max);
 }
