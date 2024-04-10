#include <stdio.h>
int main( void )
{
    double temp[ 2 ][ 3 ] = { 0 };
    double avgTemp[ 2 ] = { 0 };
    int i, j;
    float total[ 2 ] = { 0 };

    for( i = 0; i < 2; i++ )
    { 
        printf( "Day %d\n", i + 1 );
        
        for( j = 0; j < 3; j++ )
        {
            printf( "Enter temperature of city %d : ", i + 1 );
            scanf( "%lf", &temp[ i ][ j ] );

            total[ i ] = total[ i ] + temp[ i ][ j ];
        }
        avgTemp[ i ] = total[ i ] / 3.0;
    }
    printf( "\n" );
    
    printf( "\tmorning\t noon\tevening\n" );
    for( i = 0; i < 2; i++ )
    { 
        printf( "City %d : ", i + 1 );
        for( j = 0; j < 3; j++ )
        {
            printf( "%.2lf    ", temp[ i ][ j ] );
        }
        printf( "\n" );
    }
    printf( "\n" );

    for( i = 0; i < 2; i++ )
    {
        printf(  "City %d average temp : %.2lf\n", i + 1, avgTemp[ i ] );
    }
    return 0;
}
