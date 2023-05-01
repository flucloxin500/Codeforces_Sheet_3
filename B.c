#include<stdio.h>
#include<stdlib.h>
int main (){

    long long m[100010],i , n , x , pos = 0 ;

    scanf("%lld", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%lld", &m[i]);
    }

    scanf("%lld", &x);

    

    for ( i = 0 ; i < n ; i++)
    {
        if ( x == m[i])

        {
            pos++;
           printf("%lld\n", i);
           break; 
        }
             
    }

    if ( pos == 0)
    {
        printf("-1\n");
    }
     
    return 0 ;
}

