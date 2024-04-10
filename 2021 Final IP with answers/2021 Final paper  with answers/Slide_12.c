#include <stdio.h>
#define SIZE1 25
#define SIZE2 15
int main( void )
{
    char newArray[ SIZE1 ] = { 0 };
    char newArray2[ SIZE2 ] = { 0 };
    int i, j = 0, count = 0;
    

    printf( "Enter a word with combination of upercase and lowercase letters : " );
    scanf( "%s", newArray );

    for( i = 0; i < SIZE1; i++ )
    {
        if( newArray[ i ] >= 65 && newArray[ i ] <= 90 )
        {
            newArray2[ j ] =  newArray[ i ];
            j++;
            count++;
        }
    }

    printf( "\n" );
    printf( "Modified array : %s\n", newArray2 );
    printf( "Number of Upper case letters : %d\n", count );
       
    return 0;
}
