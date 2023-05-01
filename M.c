#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    int y[10010] , n , i , min = 0 , max = 0 ,  t ;

    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%d", &y[i]); 
    }
    for ( i = 1 ; i < n ; i++)
    {
        if ( y[i] < y[min]) 
        {
        min = i;
        }

        if ( y[i] > y[max]) 
        {
        max = i;
        
        }
        
    }

    t = y[min] ;
    y[min] = y[max] ;
    y[max]  = t ;

    for ( i = 0 ; i < n ; i++)
    {
        printf("%d ", y[i]) ;
    }
    

    

    printf("%d ", y[i]);

    return 0 ;
}
