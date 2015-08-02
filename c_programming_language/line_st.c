/**
 * file lines statistic
 */
#include <stdio.h>

int main()
{
    int c ,ln,space ,tab;
    ln = tab = space = 0 ;
    while((c=getchar())!= EOF)
    {
        if(c == '\n') ln++ ;
        if(c == '\t') tab++ ;
        if(c == ' ') space++ ;
    }

    printf("line:%d\t space:%d tab:%d\n" , ln,space,tab);
    return 0 ;
}

