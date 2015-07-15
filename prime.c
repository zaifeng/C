#include <stdio.h>

int main()
{
    int prime[200];
    int i , j,flag ;
    int idx = 0 ;

    prime[idx++] = 2 ;
    prime[idx++] = 3 ;
    for(i = 5 ; i < 1000 ;i+=2)
    {
        flag = 0 ;
        for(j=1 ; prime[j]*prime[j]<=i ; j++)
        {
            if(i% prime[j] == 0){
                flag = 1 ;
                break ;
            }
        }
        if(!flag)
        {
            prime[idx++] = i ;
        }
    }
    
    for(i=0 ; i<idx ; i++)
    {
        printf("prime[%3d] = %d\n" , i , prime[i]);
    }
    return 0 ;
}
