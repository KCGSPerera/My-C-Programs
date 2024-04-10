// This program store the daily electricity usage and display the summary report

#include <stdio.h>
int main( void )
{
    float powerArray[ 4 ][ 7 ] = { { 1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0 }, { 1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2 }, { 2.3, 4.0, 1.2, 2.1, 0.8, 0.0, 2.6 }, { 2.1, 1.7, 7.0, 1.2, 2.1, 8.0, 0.0 } };
    int i, j;
    float max = powerArray[ 0 ][ 0 ], min = powerArray[ 0 ][ 0 ], total = 0.0, avg = 0.0; 
    int maxWeek = 0, maxDay = 0, minWeek = 0, minDay = 0;

    for( i = 0; i < 4; i++ )
    {
        for( j = 0; j < 7; j++ )
        {
            if( powerArray[ i ][ j ] >= max )
            {
                max = powerArray[ i ][ j ];
                maxWeek = i + 1;
                maxDay = j + 1;
            }
            if( powerArray[ i ][ j ] <= min )
            {
                min = powerArray[ i ][ j ];
                minWeek = i + 1;
                minDay = j + 1;
            }
            total += powerArray[ i ][ j ];
        }
    }
    avg = total / 28.0;
    printf( "\n\n" );

    printf( "Day of maximum Usage : Week %d   Day %d\n", maxWeek, maxDay );
    printf( "Maximum number of units : %.2f\n", max );
    printf( "Day of minimum Usage : Week %d   Day %d\n", minWeek, minDay );
    printf( "Minimum number of units : %.2f\n", min );
    printf( "Total units usage for month : %.2f\n", total );
    printf( "Average units usage for month : %.2f\n", avg );

    return 0;
}
