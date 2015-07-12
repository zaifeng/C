#include <stdio.h>

int main()
{
    int v1 ,v2;
    printf("Please input a integer:");
    scanf("%d",&v1);
    v2 = v1 ;
    if(v1 < 0)
    {
        v2 = -v1 ;
    }
    printf("%d 's abstract value is %d \n",v1 , v2);
    return 0 ;
}
