#include <stdio.h>
int main( void )
{
	int numbers[ 5 ] = { 0 };
	int i;
	
	for( i = 0; i < 5; i++ )
	{
		printf( "Enter the number %d : ", i + 1 );
		scanf( "%d", &numbers[ i ] );			
	}
	
	for( i = 0; i < 5; i++ )
	{
		printf( "%d\n", numbers[ i ] );
	}
	return 0;
}
