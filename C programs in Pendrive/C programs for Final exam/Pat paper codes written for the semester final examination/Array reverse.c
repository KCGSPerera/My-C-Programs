#include <stdio.h> 
int main( void )
{
    int array1[ 6 ] = { 2, 4, 6, 8, 10, 12 };
    int array2[ 6 ] = { 0 };
    int i, j;

    for( i = 0; i < 6; i++ )
    {
        array2[ i ] = array1[ 5 - i ];
    }
    for( i = 0; i < 6; i++ )
    {
        printf( "%d    ", array2[ i ] );
    }
    return 0;

}
