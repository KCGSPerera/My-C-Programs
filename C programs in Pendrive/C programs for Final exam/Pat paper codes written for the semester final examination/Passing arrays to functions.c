#include <stdio.h>
#define SIZE 6
void modifyArray( int b[], int size );
int main( void )
{
    int a[ SIZE ]  = { 1, 2, 3, 4, 5, 6 };
    int i;
    
    
      for( i = 0; i < SIZE; i++ )
    {
        printf( "%d\t", a[ i ] );
    }
    printf( "\n" ); 
    
    
    modifyArray( a, SIZE );
    
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%d\t", a[ i ] );
    }
    printf( "\n" ); 
    
    return 0;
}
void modifyArray( int b[], int size )
{
    int j;
    
    for( j  = 0; j < size; ++j )
    {
        b[ j ] *= 2;

    }
    return;
}
