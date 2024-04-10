#include <stdio.h>
int main( void )
{
    char name[ 5 ] = { 'c', 'i', 'v', 'i', 'c', '\0' };
    int i;

    for( i = 0; i < 5 / 2; i++ )
    {
        if( name[ i ] != name[ 4 - i ] )
        {
           printf( "Not a palindrome" );
           return -1;
        }
    }
    printf( "This is a plaindrome" );
    return 0;

}
