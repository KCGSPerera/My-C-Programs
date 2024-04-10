#include <stdio.h>
int main( void )
{
    int myArray[ 10 ] = { 0 };
    int total = 0, j = 0, i;
    float average = 0;
    int largeNum[ 10 ] = { 0 };

    for( i = 0; i < 10; i++ )
    {
        printf( "Enter an integer : " );
        scanf( "%d", &myArray[ i ] );

        total += myArray[ i ];
    }
    average = total / 10.0;
    printf( "Average  : %.2f\n", average );

    for( i = 0; i < 10; i++ )
    {
        if( myArray [ i ] > average )
        {
            largeNum[ j ] = myArray[ i ];
            j++;
        }
    }
  
    for( i = 0; i < 10; i++ )
    { 
        printf( "%d    ", myArray[ i ] );
    }
    printf( "\n" );

    for( i = 0; i < j; i++ )
    { 
        printf( "%d    ", largeNum[ i ] );
    } 
    return 0;
}
