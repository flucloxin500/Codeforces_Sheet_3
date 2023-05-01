#include<stdio.h>
int main (){
 
    int n ,  i , j , t , A[10010] ;
    scanf("%d", &n);
    for ( i = 0 ; i < n ; i++)
    {
        scanf("%d", &A[i]);
    }
    for ( i = 0 ; i < n-1 ; i++)
    {
        for ( j = 0 ; j < n-1-i ; j++)
        {
           if ( A[j]>A[j+1])
            {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t ;
            } 
        }
    }
    for ( i = 0 ; i < n ; i++)
    {
        printf("%d ", A[i]);
    }

    


    return 0 ;
}

/*
for ( j = 0 ; j < n-1-i ; j++)
        {
            f = 0 ;
            if ( A[j]>A[j+1])
            {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t ;

                f=1;
            }
        }

        if ( f == 0)
        {
            break ;
        }
*/