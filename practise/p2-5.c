#include <stdio.h>

int main()
{
    int var1 , var2 ;
    puts("Please input two integers");
    printf("Integer A:");
    scanf("%d",&var1);
    printf("Integer B:");
    scanf("%d",&var2);

    printf("A is %f%% of B\n",100.0*var1 / var2);
    return 0;
}
