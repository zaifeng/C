#include <stdio.h>

int main(int argc , const char *argv[])
{
    int num1 , num2 ;
    float percent ;
    puts("Please input two integers:");
    printf("integer One:");
    scanf("%d",&num1);
    
    printf("integer two:");
    scanf("%d",&num2);
    percent = (1.0 * num1)/num2 ;
    printf("%d is %.0f%% of %d\n" , num1 , percent*100 , num2);
    return 0 ;
}
