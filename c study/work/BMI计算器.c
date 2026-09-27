#include<stdio.h>
#include<math.h>
int main()
{
    float weight,height,BMI;
    printf("请输入您的体重(公斤kg): ");
    scanf("%f", &weight);
    printf("请输入您的身高(米m): ");
    scanf("%f", &height);
    BMI = weight / (height * height);
    printf("您的BMI值是: %.2f\n", BMI);
    if(BMI < 18.5)
    {
        printf("体重过轻\n");
    }
    else if(BMI >= 18.5 && BMI < 24)
    {
        printf("体重正常\n");
    }
    else if(BMI >= 24 && BMI < 28)
    {
        printf("体重过重\n");
    }
    else
    {
        printf("肥胖\n");
    }
    return 0;
}