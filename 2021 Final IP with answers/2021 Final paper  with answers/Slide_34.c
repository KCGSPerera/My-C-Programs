#include <stdio.h>
int main( void )
{
    int marks[ 10 ] = { 80, 30, 23, 78, -10, 90, 43, 15, 91, 84 };
    int i;

    for( i = 0; i < 10; i++ )
    {
        if( marks[ i ] < 0 || marks[ i ] > 100 )
        {
            printf( "Marks are not valid\n" );
            return -1;
        }
    }
    printf( "Marks are valid\n" );
    return 0;
}
