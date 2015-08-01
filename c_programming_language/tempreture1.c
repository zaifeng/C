#include <stdio.h>

#define START   0 
#define STOP    300
#define STEP    20
int main()
{
    int i ;
    while(i<=STOP)
    {
        printf("%3d\t%.1f\n" , i ,(5.0/9)*(i-32));
        i+=STEP ;
    }
    return 0 ;
}
