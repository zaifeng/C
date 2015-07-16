#include <stdio.h>

int main()
{
    int n ;
    int num[10] ;
    int score[20] ;
    long int m ;
    printf("sizeof n = %d\n" ,sizeof n );
    printf("sizeof m = %d\n" ,sizeof m );
    printf("length of num = %d\n" ,sizeof num / sizeof num[0]);
    printf("length of score = %d\n" ,sizeof score / sizeof score[0]);
    return 0 ;
}
