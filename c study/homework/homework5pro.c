//ASCII码加密字符
#include<stdio.h>
int main()
{ 
    /*c1=67;//'C'
    c2=104;//'h'
    c3=105;//'i'
    c4=110;//'n'
    c5=97;//'a'*/
      char arr[5]={67,104,105,110,97};
    
    //printf方法
    printf("printf方法输出：");
    printf("%c%c%c%c%c\n",arr[0]+4,arr[1]+4,arr[2]+4,arr[3]+4,arr[4]+4);
    //putchar方法
    printf("putchar方法输出：");
    for(int i=0;i<5;i++)
    {
        putchar(arr[i]+4);//+4是为了输出E、l、m、r、e加密

    }
    putchar('\n');
    return 0;
} 