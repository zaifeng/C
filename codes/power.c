#include <stdio.h>

int power(int m, int n);

int main()
{
    int i ;
    for(i=0;i<10;i++) {
        printf("%d %d %d\n",i, power(2,i),power(-3,i));
    }
    return 0;
}

int power(int base, int n)
{
    int i,cal= 1;
    for(i=1;i<=n;i++) {
        cal *= base ;
    }
    return cal;
}
