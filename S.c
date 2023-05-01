#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long m[100][100] ,row,col, j , i , f , x;

    scanf("%lld %lld", &row,&col);

    for ( i = 0 ; i < row ; i++)
    {
        for ( j = 0 ; j < col ; j++)
    {
        scanf("%d" , &m[i][j]);
    }
    }
    scanf("%d", &x) ;
    f = 0 ;
    for ( i = 0 ; i < row ; i++)
    {
        for ( j = 0 ; j < col ; j++)
    {
        if ( m[i][j] == x )
        {
            f = 1;
            break;
        }
    }
    }

    if ( f==1 )
    {
        printf("will not take number\n");
    }
    else 
    {
        printf("will take number\n");
    }

    return 0 ;
}
