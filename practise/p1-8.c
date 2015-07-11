/**
 * get addiation of two integers
 */

#include <stdio.h>

int main(int argc , const char *argv[])
{
    int num1,num2 ,num3;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d" , &num1);
    printf("整数2：");scanf("%d" , &num2);
    printf("整数3：");scanf("%d" , &num3);
    
    printf("它们的和是%d\n",num1 + num2 + num3);
    return 0 ;
}
