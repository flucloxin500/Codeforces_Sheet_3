#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    int  n , i , sum = 0;
    scanf("%d", &n);
    char m[n];

    for ( i = 0 ; i < n ; i++)
    {
        scanf(" %c", &m[i]);
        sum = sum + m[i] - '0' ;

    }

    printf("%d", sum);

    
    return 0 ;
}
