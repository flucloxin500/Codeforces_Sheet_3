#include<stdio.h>
#include<stdlib.h>
int main (){
 
    long long m[100010],i , n , s = 0;
 
    scanf("%lld", &n);
 
    for ( i = 0 ; i <= n ; i++)
    {
        scanf("%lld", &m[i]);
    }
 
    for ( i = 0 ; i <= n ; i++)
    {
        s += m[i];
    }
 
    s = abs(s);
 
    printf("%lld\n", s);
 
    
    return 0 ;
}