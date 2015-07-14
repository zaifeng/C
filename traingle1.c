#include <stdio.h>

int main()
{
    int i,j,k,l ;
    printf("Please input a number:");
    scanf("%d" , &i);
    for(j=1;j<=i;j++)
    {
        for(l=i-j;l>0;l--){
            putchar(' ');
        }
        for(k=j;k>0;k--) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0 ;
}
