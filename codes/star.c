#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,mid ;
    int i, j, sp ;
    int sn = 1 ;
    printf("Please input a odd num:");
    scanf("%d",&num);
    mid = (num + 1) / 2 ;
    for(i=1;i<=num;i++) {
        //print space
        sp = abs(mid - i) ;
        while(sp){
            putchar(' ');
            sp-- ;
        }
        //print star
        for(j=1;j<=sn;j++){
            putchar('*');
        }
        if(i < mid) {
            sn += 2 ;
        } else {
            sn -= 2 ;
        }
        putchar('\n');
    }
    
}
