#include <stdio.h>
#define SIZE 10
int main( void )
{
	int a[ SIZE ];
	int i, max = 10;
	
	for( i =0; i < SIZE; i++ )
	{
		a[ i ] = 0;
	}
	
	for( i = 0; i < SIZE; i++ )
	{
		printf( "Enter number %d : ", i+1 );
		scanf( "%d", &a[ i ] );
	}
	
	for( i = 0; i < SIZE; i++ )
	{
		if( 10 < a[ i ] < 100 )
		{
			printf( "Number %d : %d\n", i + 1, a[ i ] );
			
			if( a[ i ] > a[ i - 1 ] )
			{
				max = a[ i ];
			}
			
		}
	}
	printf( " MAX : %d", max );
}
