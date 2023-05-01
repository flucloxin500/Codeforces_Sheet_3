#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long m[100010] , n , i , x , min = -1 , f = 0;

    scanf("%lld", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%lld", &m[i]);
    }

    min = m[0] ;

    for ( i = 1 ; i < n ; i++)
    {
        if ( m[i] < min )
        {
            min = m[i];
        }
    }

    for ( i = 0 ; i < n ; i++)
    {
        if  ( min == m[i])
        {
            f++;
        }
    }

    if ( f % 2 != 0)
    {
        printf("Lucky\n");
    }
    else if ( f % 2 == 0)
    {
        printf("Unlucky\n");
    }

    

    return 0 ;
}
