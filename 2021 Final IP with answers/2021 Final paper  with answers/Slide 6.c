#include <stdio.h>
#define SIZE 5
void modifyArray( float arr2[], int size );

int main( void )
{
    float arr1[ SIZE ] = { 2, 4, 6, 8, 10 };
    int i;

    modifyArray( arr1, SIZE );
    
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%.2f    ", arr1[ i ] );
    }
    return 0;
    
}

void modifyArray( float arr2[], int size )
{
    int i;

    for( i = 0; i < size; i++ )
    {
        arr2[ i ] *= ( 110 / 100.0 );
    }
    return;
}
