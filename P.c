#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long m[100010] ;
    int f = 0 , n , i , rem;

    scanf("%lld", &n);     // 4

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%lld", &m[i]);    //  5   6   8   10
    }

    

    for ( i = 0 ; i < n ; i++)    //  0   1   2   3
                                  //  |   |   |   |
                                  //  24  48  32  40
    {
        if ( m[i] % 2 == 0)       //
        {
            rem = m[i] / 2 ;      //  24   48   32   40
                                  //  12   24   16   20
                                  //  6    12   8    10
                                  //  3    6    4    5

            //f++;   // 8

            if ( rem % 2 == 0)
            {
                f++;
            }
            else if ( rem % 2 != 0)
            {
                break;
            }
            
        }
        
    }

    printf("%d",f);
    return 0 ;
}
