// This program store and display the colours of the LED panel. 
// This program display the locations of the Red colcur LED bulbs. 

#include <stdio.h>
int main( void )
{
    char colour[ 4 ][ 4 ] = { 0 };
    int i, j;

    for( i = 0; i < 4; i++ )
    {
        printf( "LED Row %d \n", i + 1 );
        for( j = 0; j < 4; j++ )
        {
             printf( "Enter colour ( R / G /B ) : " );
             scanf( "%c%*c", &colour[ i ][ j ] );

        }
    }

    for( i = 0; i < 4; i++ )
    {
        for( j = 0; j < 4; j++ )
        {
            printf( "%c    ", colour[ i ][ j ] );
        }
        printf( "\n" );
    }

    printf( "Locations of the Red LEDs' : " );
    for( i = 0; i < 4; i++ )
    {
        for( j = 0; j < 4; j++ )
        {
            if( colour[ i ][ j ] == 'R' )
            printf( " [ %d ][ %d ]    ", i + 1, j + 1 );
        }
    }
    return 0;
}
