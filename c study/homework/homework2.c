//输出1900年至2000年之间的所有闰年。
#include<stdio.h>
int main()
{
   int year;
    for(year=1900;year<=2000;year=year+1)
    {
        if(year%4==0&&year%100!=0||year%400==0)
        {
            printf("%d 是闰年\n",year);
        }
    }
    return 0;
}
