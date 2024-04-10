#include <stdio.h>
int main( void )
{
    int att[ 4 ][ 5 ] = { { 1, 0, 1, 1, 1 }, { 1, 1, 1, 1, 1 }, { 1, 1, 0, 1, 1 }, { 1, 1, 1, 1, 1 } };
    int i, j, count = 0;
    int attendance[ 4 ] = { 0 };

    for( i = 0; i < 4; i++ )
    {
        for( j = 0; j < 5; j++ )
        {
            if( att[ i ][ j ] == 1 )
            {
                count++;
            }
        }
        printf( "Count %d  : %d\n", i + 1, count );
        if( count == 5 )
        {
            attendance[ i ] = 1;
        }
        count = 0;
    }

    printf( "Everyday Attended students : \n" );
    for( i = 0; i < 4; i++ )
    {
        if( attendance[ i ] == 1 )
        {
            printf( "Student %d\n", i + 1 );
        }
    }
    return 0;
}
