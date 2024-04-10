#include <stdio.h>
int main( void )
{
    int fib[ 10 ] = { 0, 1 };
    int i, j = 0;

    for( i = 2; i < 10; i++ )
    {
        fib[ i ] = fib[ j ] + fib[ j + 1 ];
        j++;
    }
    for( i = 0; i < 10; i++ )
    {
        printf( "%d    ", fib[ i ] ); 
    }
    return 0; 
}
