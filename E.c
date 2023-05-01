#include<stdio.h>
#include<math.h>
#include<stdlib.h>    ///5
                     ///8 8 9 5 9

int main (){

    int y[10010] , n , i , min = -1 , pos ;

    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%d", &y[i]); // y[0] = 8 ;
    }
    min = y[0]; // min = 8 ;
    pos = 0;
    for ( i = 1 ; i < n ; i++)
    {
        if ( y[i] < min) // min
        {
        min = y[i];
        pos = i ;
        }
        
    }

    printf("%d %d\n", min , pos+1);

    return 0 ;
}
