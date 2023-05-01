#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[100][100];
    int n , i , j , k;
    int sum = 0 , sum1 = 0 , s;

    scanf("%d", &n);
    for ( i = 0 ; i < n ; i++)
    {
        for ( j = 0 ; j < n ; j++)
        {
            scanf("%d", &arr[i][j]) ;
        }
    }
    for ( i = n-1 , j = 0 ; i > 0 , j < n ; i-- , j++)
    {
        sum += arr[i][j];
    }
    for ( i = 0 , j = 0 ; i < n , j < n ; i++ , j++)
    {
        sum1 += arr[i][j];
    }
    s = abs(sum1-sum);

    printf("%d", s);
    
    return 0;
}