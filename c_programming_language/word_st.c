/**
 * word statistic
 */

#include <stdio.h>

#define IN 1
#define OUT 0
int main()
{
    int nl,nw,nc,c ;
    int state ;
    nl = nw = nc = 0 ;
    state = OUT ;
    while ((c=getchar()) != EOF)
    {
        if(c == '\n')    
        {
            nl++ ;
        }

        if (c == '\t' || c=='\n' || c==' ')
        {
            state = OUT ;
        }
        else if(state == OUT)
        {
            state = IN ;
            ++nw ;
            
        }
    }
    return 0 ;
}
