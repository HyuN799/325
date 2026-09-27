//五位以下正整数信息
#include <stdio.h>

int main()
{
    int number;       // 保存用户输入的正整数
    int digits[5];    // 保存每一位数字，最多5位
    int count = 0;    // 记录数字的位数

    printf("请输入一个不多于5位的正整数：");

    // 检查输入是否为整数，并确认它在有效范围内
    if (scanf("%d", &number) != 1 || number < 1 || number > 99999) //非真数字||小于一数||大于五位数
    {
        printf("输入无效。\n");
        return 1;     // 输入无效，结束程序
    }

    int temp = number; // 用临时变量拆分数字，避免改变原数

    // 每次取出个位数字，并保存到数组中
    while (temp > 0) 
    {
        digits[count] = temp % 10; // 取出个位，%取余
        count++;                   // 位数加1
        temp /= 10;                // 去掉已经取出的个位，取整赋值 temp /= 等效于temp = temp / 10
    }

    // 输出数字的位数
    printf("它是%d位数。\n", count);

    // 数字是从个位开始存进数组的，所以从后往前输出
    printf("各位数字：");
    for (int i = count - 1; i >= 0; i--) 
    {
        printf("%d%s", digits[i], i == 0 ? "\n" : " ");//三目运算符
    }

    // 数组中保存的顺序正好是原数的逆序，直接输出即可
    printf("逆序输出：");
    for (int i = 0; i < count; i++) 
    {
        printf("%d", digits[i]);
    }
    printf(" 程序输出完毕\n");

    return 0; // 程序正常结束
}