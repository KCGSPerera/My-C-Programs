#include <stdio.h> 
int main( void )
{
    float size[ 3 ][ 5 ] = { 0 };
    float avgSize[ 3 ] = { 0 };
    int i, j;
    float total[ 3 ] = { 0 };
    float average[ 3 ] = { 0 };

    for( i = 0; i < 3; i++ )
    { 
        printf( " Machine %d\n", i + 1 );
        for( j = 0; j < 5; j++ )
        {
            printf( "Enter ball %d size : ", i + 1 );
            scanf( "%f", &size[ i ][ j ] );

            total[ i ] += size[ i ][ j ];
        }
        average[ i ] = total[ i ] / 5.0;
    }
    printf( "\n" );

    for( i = 0; i < 3; i++ )
    {
        printf( "Machine %d average ball size : %.2f\n",i + 1, average[ i ] );
    }
    return 0;
}

  
