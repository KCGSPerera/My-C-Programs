#include <stdio.h>
int main ( void )
{
    int number, i, c;

    printf( "Enter a number : " );
    scanf( "%d", &number );

    while( number < 0 )
    {
         printf( "Invalid number\n" );

         printf( "Enter a number : " );
         scanf( "%d", &number );
    }
    
    for( i = 1; i <= 12; i++ )
    {
        printf( "%d * %d = %d\n", number, i, number * i );
    }
    return 0;
}



                                               
