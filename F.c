#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long m[100010] , n , i , x ;

    scanf("%lld", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%lld", &m[i]);
    }
    
    for ( i = n-1 ; i >= 0 ; i--)
    {
        x = m[i];
        printf("%lld ", x);
    }
    

    return 0 ;
}
