#include <stdio.h>

int main()
{
    int var1 , var2 ;
    puts("Please input two integers");
    printf("Integer A:");
    scanf("%d",&var1);
    printf("Integer B:");
    scanf("%d",&var2);
    
    if(var1 > var2)
    {
        printf("A is bigger than B\n");
    }
    else
    {
        printf("A is smaller than B\n");
    }
    return 0;
}
