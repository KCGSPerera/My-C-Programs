#include <stdio.h>
int main( void )
{
	int i, j;
	int personNum, productNum;
	float pPrice[ 4 ][ 5 ];
	int total = 0;
	
	for( i = 0; i < 4; i ++ )
	{
		printf( "Person Number ( 0 / 1 / 2 / 3 ) : " );
		scanf( "%d", &personNum );
		
		for( i = 0; i < 5; i++ )
		{
			printf( "product Number ( 0 / 1 / 2 / 3 / 4 ) : " );
			scanf( "%d", &productNum );
			
			printf( "Enter Product Price : " );
			scanf( "%f", &pPrice[ personNum ][ productNum ] ); 
			
			total = total + pPrice[ personNum ][ productNum ];
		
		}
		printf( "\n" );
	}
		
	for( i = 0; i < 4; i ++ )
	{
		
		for( i = 0; i < 5; i++ )
		{
			printf( "Total sales of product %d : %.2f\n", i, total );
				
		
		}
		printf( "\n" );
		
	}
	return 0;
	
}
