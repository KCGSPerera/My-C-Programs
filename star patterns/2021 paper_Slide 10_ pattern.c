#include <stdio.h>
int main( void )
{
    int i, j;

    for( i = 4; i <= 7; i++ )
    {
        for( j = 1; j <= i; j++ )
        {
            printf( "*" );
        }
        printf( "\n" );
    }

    for( i = 6; i >= 1; i-- )
    {
        for( j = 1; j <= i; j++ )
        {
            printf( "*" );
        }
        printf( "\n" );
    }
    return 0;
}