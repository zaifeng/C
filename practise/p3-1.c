#include <stdio.h>

int main()
{
    int var1 , var2 ;
    puts("Please input two integers");
    printf("Integer A:");
    scanf("%d",&var1);
    printf("Integer B:");
    scanf("%d",&var2);
    
    if(var1 % var2 == 0)
    {
        printf("B is A 's yueshu\n");
    }
    else
    {
        printf("B isn't yueshu of A\n");
    }
    return 0;
}
