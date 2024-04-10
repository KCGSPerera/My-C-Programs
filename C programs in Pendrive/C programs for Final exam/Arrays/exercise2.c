#include <stdio.h> 
int main( void )
{
	int i, num;
	int array[ 5 ] = { 10, 20, 30, 40, 50 };
	
	for( i = 0; i < 5; i++ )
	{
		printf( "Enter Number : " );
		scanf( "%d", &num );
		
		array[ i ] = num;
	}
	
	for( i = 0; i < 5; i++ )
	{
		printf( "%d\t", array[ i ] );
	}
	
	for( i = 0; i < 5; i++ )
	{
		array[ 5 - ( i + 1 ) ] = array[ i ];
	} 
	
	printf( "\n" );
	for( i = 0; i < 5; i++ )
	{
		printf( "%d\t", array[ i ] );
	}
	return 0;	
}
