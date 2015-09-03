#include <stdio.h>

int main(){
    int a = 3; 
    int b = 4;

    printf("%d",a+b%(a+b)/a+a*b-b);
    return 0;
}
