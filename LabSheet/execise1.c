#include <stdio.h>
int main( void )
{
	int number[ 2 ][ 10 ];
	int i, j;
	
	for( i = 0; i < 2; i++ )
	{
		for( j = 0; j < 10; j++ )
		{
			printf( "Enter Number : " );
			scanf( "%d", &number[ i ][ j ] );
		}
		
	}
	
	for( i = 0; i < 2; i++ )
	{
		for( j = 0; j < 10; j++ )
		{
			printf( "%d\t", number[ i ][ j ] );
		}
		printf( "\n" );
	}
	
	return 0;
}
