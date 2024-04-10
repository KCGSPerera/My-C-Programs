#include <stdio.h>
int main( void )
{
	int array[ 5 ] = { 0 };
	int x, i, number;
	
	for( i = 0; i < 5; i++ )
	{
	
		printf( "Enter an integer : " );
		scanf( "%d", &number );
		
		if( i == 0 )
		{
			array[ 4 ] = number;
		}
		else if( i == 1 )
		{
			array[ 0 ] = number;
		}
		else if( i == 2 )
		{
			array[ 1 ] = number;
		}
		else if( i == 3 )
		{
			array[ 2 ] = number;
		}
		else
		{
			array[ 3 ] = number;
		}
		
	}
	for( i = 0; i < 5; i++ )
	{
		printf( "%d\n", array[ i ] );
	}
	return 0;
}
