#include <stdio.h>

int main()
{
    int v1 , v2 , v3 ;
    int max ;
    puts("Please input three integers");
    printf("Integer A:");scanf("%d", &v1);
    printf("Integer B:");scanf("%d", &v2);
    printf("Integer C:");scanf("%d", &v3);
    
    max = v1 ;
    if(max < v2){
        max = v2 ;
    }

    if(max < v3)
    {
        max = v3 ;
    }
    printf("max num of three is %d\n" , max);
    return 0;
}
