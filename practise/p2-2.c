#include <stdio.h>

int main()
{
    int num1 , num2 ;
    puts("Input two integers");
    printf("integer num1:");
    scanf("%d",&num1);
    
    printf("integer num2:");
    scanf("%d",&num2);
    
    printf("sum is :%d , multi is %d\n" , num1 + num2 , num1 * num2);
    return 0 ;
}
