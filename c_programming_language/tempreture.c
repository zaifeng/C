#include <stdio.h>

#define TEMP_MIN    0
#define TEMP_MAX    300
#define STEP        20
int main()
{
    int i ;
    for(i = TEMP_MIN ; i<= TEMP_MAX ; i+=STEP)
    {
        printf("%3d\t%.1f\n",i,(5.0/9)*(i-32));
    }
    return 0 ;
}
