#include<stdio.h>
#include<stdlib.h>
int main (){

    int m[100010],i , n , x  ;

    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%d", &m[i]);
    }
    
   for ( i = 0 ; i < n ; i++)
    {
        if ( m[i] > 0)
        {
            printf("1 ");
        }
    else if ( m[i] < 0)
        {
            printf("2 ");
        }
    else if ( m[i] == 0)
        {
            printf("%d ", m[i]);
        }
    }
    return 0 ;
}

