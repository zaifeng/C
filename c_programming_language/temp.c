#include <stdio.h>

int main()
{
    int step;
    float start , max_tmp  ;
    step = 20 ;
    start = 0.0 ;
    max_tmp = 300.0 ;
    while(start <= max_tmp)
    {
        printf("%3.0f%6.1f\n" , start , 5.0/9*(start - 32));
        start += step ;
    }
    return 0 ;
}
