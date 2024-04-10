// This program calculate the total and the average of te amrks atored in the array
// Then this program will count the number of the pass and fail students in the class.
// Then will display the total, average and the pass and fail student counts.

#include <stdio.h>
int main( void )
{
    float marks[ 10 ] = { 75, 45, 61, 91, 55, 43, 78, 56, 95, 12 };
    float total = 0, avg = 0;
    int i, j, pass = 0, fail = 0;

    for( i = 0; i < 10; i++ )
    {
        total += marks[ i ];
    }
    avg = total / 10.0;
    printf( "Total : %.2f\n", total );
    printf( "Average : %.2f\n", avg );

    for( i = 0; i < 10; i++ )
    {
        if( marks[ i ] >= avg )
        {
            pass++;
        }
        else
        {
            fail++;
        }
    } 
    printf( "\n" );

    printf( "Number of Pass students : %d\n", pass );
    printf( "Number of fail students : %d\n", fail );
    return 0;
}
