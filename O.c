#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long fib[100010];
    int n , i ;

    scanf("%d", &n);
    fib[1] = 0 ;
    fib[2] = 1 ;

    for ( i = 3 ; i <= n ; i++)
    {
        
        fib[i] = fib[i-1] + fib[i-2] ;
    }

    printf("%lld", fib[n]);


    return 0 ;
}
