#include <stdio.h>
int main( void )
{
	int array[ 10 ];
	int i, n, counter = 0;
	
	for( i = 0; i < 10; i++ )
	{
		printf( "Enter number : " );
		scanf( "%d", &array[ i ] );
	}
	printf( "Enter the devisioble number : " );
	scanf( "%d", &n );

	for( i = 0; i < 10; i++ )
	{
		if( array[ i ] % n == 0 )
		{
			counter++;
		}
	}
	
	if( counter == 10 )
	{
		printf( "The array is devisible" );
	}
	else
	{
		printf( "The array is not devidible" );	
	}	

	return 0;
}
