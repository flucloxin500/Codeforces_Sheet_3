#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long m[100010] , n , i , f  ;

    scanf("%lld", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%lld", &m[i]);
    }
    f = 0 ;   /// f = 1;
    for ( i = 0 ; i < n/2 ; i++)
    {
        if ( m[n-i-1] == m[i])   /// m[n-i-1] != m[i]
        {
            f++ ;                /// f = 0 
        }
    }

    if ( f == n/2 )              /// f == 1
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    } 

    return 0 ;
}
