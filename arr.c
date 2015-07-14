#include <stdio.h>
#define CNT 5
int main(void)
{
    int arr[CNT] = {5,4,3,2,1};
    int i,j,temp;
    for(i=0,j=CNT-1;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j] ;
        arr[j] = temp ;
    } 

    //print result
    for(i=0;i<CNT;i++)
    {
        printf("arr[%d] = %d\n" , i , arr[i]);
    }
    return 0 ;
}
