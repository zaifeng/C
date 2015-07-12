#include <stdio.h>

int main()
{
    int height ;
    printf("Please input you height:");
    scanf("%d" , &height);
    printf("Your standard weight is :%.1f kilo\n",(height - 100) * 0.9);
    return 0 ;
}
