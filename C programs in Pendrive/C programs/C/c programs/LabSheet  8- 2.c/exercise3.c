#include <stdio.h>
int main( void )
{
	int data[ 12 ] = { 0 };
	int i;
	int max, min;
	
	for( i = 0; i < 12; i++ )
	{
	printf( "Enter average monthly rainfall for month %d : ", i + 1 );
	scanf( "%d", &data[ i ] );
	}
	
	max = data[ 0 ];
	min = data[ 0 ];
	
	for( i = 0; i < 12; i++ )
	{
		
		
		if( max < data[ i ] )
		{
			max = data[ i ];
		}
		
		if( min > data[ i ] )
		{
			min = data[ i ];
		}
	}
	
	printf( "Max : %d\n", max );
	printf( "Min : %d\n", min );
	
	return 0;
	
}
