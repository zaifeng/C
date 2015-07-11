/**
 * get summary of two integers
 */

#include <stdio.h>

int main(int argc , const char *argv[])
{
    int num1,num2 ;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d" , &num1);
    printf("整数2：");scanf("%d" , &num2);
    printf("它们的乘积是%d\n",num1 * num2);
    return 0 ;
}
