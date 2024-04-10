#include <stdio.h>
#define SIZE 5
void modifyArray( int array2[], int size );

int main( void )
{
    int array[ SIZE ] = { 2, 4, 6, 8, 10 };
    int i;

    modifyArray( array, SIZE );
    for( i = 0; i < 5; i++ )
    {
        printf( "%d    ", array[ i ] );
    }
    return 0;
}

void modifyArray( int array2[], int size )
{
	int i; 
	
    for( i = 0; i < size; i++ )
    {
        array2[ i ] *= 2;
    }
    return;
}    
