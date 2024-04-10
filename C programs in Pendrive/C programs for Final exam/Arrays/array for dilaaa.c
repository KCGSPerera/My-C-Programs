#include <stdio.h>
int main( void )
{
	int array[ 10 ] = { 0 };
	int number, i = 0;
	
	while( i < 10 )
	{
		printf( "Enter an integer : " );
		scanf( "%d", &number );
		
		if( number >= 10 && number <= 100 )
		{
			array[ i ] = number;
			i++;
		}
		else
		{
			printf( "Not within the range\n" );
		}

	}
	
	for( i = 0; i < 10; i++ )
	{
		printf( "%d\t", array[ i ] );
	}
	return 0;
}
