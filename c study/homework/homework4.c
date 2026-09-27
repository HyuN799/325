//计算GDP增长
#include<stdio.h>
int main()
{
    float t,r,p,n;
    printf("请输入增长率\n");
    scanf("%f",&r);
    printf("请输入初始GDP\n");
    scanf("%f",&t);
    printf("请输入年数\n");
    scanf("%f",&n);
    for(int i=1;i<=n;i++)
    {
        p=t*(1+r);
        t=p;
    }
    printf("经过%f年后，GDP为：%f\n",n,p);
    return 0;
}  

