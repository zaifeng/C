#include <stdio.h>

int main()
{
    int i,start , max_tmp ,step ;
    start   = 0 ;
    max_tmp = 300 ;
    step    = 20 ;
    for(i=start ;i<=max_tmp ; i+=step)
    {
        printf("%3d%5d\n" , i ,5*(i-32)/9);
    }
    return 0 ;
}
