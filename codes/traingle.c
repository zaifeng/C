#include <stdio.h>

int main()
{
    int i,j,k ;
    printf("Please input a number:");
    scanf("%d" , &i);
    for(j=1 ; j<=i;j++)
    {
        for(k=1;k<=j;k++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0 ;
}
