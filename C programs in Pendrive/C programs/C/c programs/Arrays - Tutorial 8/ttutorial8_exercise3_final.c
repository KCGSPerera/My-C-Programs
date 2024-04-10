#include <stdio.h>
int main( void )
{
	float priceArray[ 5 ][ 4 ];
	float totalArray[ 5 ] = { 0 };
	float productPrice, totalPrice = 0;
	int i, j;
	
	for( i = 0; i < 5; i++ )
	{
		printf( ":::::::::::::::::::::::::::::::::::::::::::::::::\n\n" );
		printf( "product %d prices\n\n", i + 1 );
		
		for( j = 0; j < 4; j++ )
		{
			printf( "Enter product price for sales person %d : ", j + 1 );
			scanf( "%f", &priceArray[ i ][ j ] );
			
			totalArray[ i ] = totalArray[ i ] + priceArray[ i ][ j ]; 
		}
		printf( "\n\n" );
		printf( ":::::::::::::::::::::::::::::::::::::::::::::::::\n\n" );
	}
	printf( ":::::::::::::::::::::::::::::::::::::::::::::::::\n\n" );
	
	for( i = 0; i < 5; i++ )
	{
			printf( "::::::::::::::::::::::::::::::::::::::::::::::\n\n" );
			printf( "Total price of product %d : %.2f\n", i, totalArray[ i ] );
	}
	printf( "\n\n" );
	printf( "::::::::::::::::::::::::::::::::::::::::::::::" );
	
	return 0;
}
