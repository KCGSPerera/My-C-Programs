#include <stdio.h>
int main( void )
{
    float marks[ 10 ] = { 75, 45, 61, 91, 55, 43, 78, 56, 95, 12 };
    float total = 0, avg = 0;
    int i, passCount = 0;

    for( i = 0; i < 10; i++ )
    {
        total += marks[ i ];
    }
    avg = total / 10.0;

    for( i = 0; i < 10; i++ )
    {
        if( marks[ i ] >= avg )
            passCount++;
    }    

    printf( "The pass mark : %.2f\n", avg );
    printf( "Passed student count : %d\n", passCount );
    return 0;
  
}
