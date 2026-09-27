#include <stdio.h>
//main函数的定义
 int main()//定义
 {
   int max(int x, int y);//声明
   int a,b,c;
   scanf("%d,%d",&a,&b);
      c= max(a,b);
   printf("max is %d\n",c);
   return 0;
 }
 //max函数的定义
 int max(int x, int y)//定义
 {
   int z;//声明
   if(x>y)
     z=x;
   else
     z=y;
   return z;//返回值
 }