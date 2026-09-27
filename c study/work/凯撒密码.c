#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[8]; /* '+'/'-' + 6位字符串 + '\0' */
	int shift;
    
	printf("请输入操作和6位字符串（+****** 加密，-****** 解密）：\n");
	if (scanf("%7s", input) != 1 || strlen(input) != 7 ||(input[0] != '+' && input[0] != '-')) 
    {
		printf("输入格式错误。\n");
		return 1;
	}

	printf("请输入移动位数：\n");
	if (scanf("%d", &shift) != 1) 
    {
		printf("移动位数无效。\n");
		return 1;
	}

	if (input[0] == '-')
		shift = -shift;
	shift %= 26;

	for (int i = 1; i < 7; ++i) 
    {
		char c = input[i];
		if (c >= 'A' && c <= 'Z')
			input[i] = (char)('A' + (c - 'A' + shift + 26) % 26);
		else if (c >= 'a' && c <= 'z')
			input[i] = (char)('a' + (c - 'a' + shift + 26) % 26);
	}

	printf("结果：%s\n", input + 1);
	return 0;
}
