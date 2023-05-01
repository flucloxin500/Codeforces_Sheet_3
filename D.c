#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    int m[10010] , n , i ;

    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%d", &m[i]);
    }
    /*
    if ( m[i]<= 10 )
        {
            printf("A[%d] = %d" ,i , m[i]);
        }
    */
   for ( i = 0 ; i < n ; i++)
    {
        if ( m[i]<= 10 )
        {
            printf("A[%d] = %d\n" ,i , m[i]);
        }
    }
    return 0 ;
}
