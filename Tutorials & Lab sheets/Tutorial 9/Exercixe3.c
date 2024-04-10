#include <stdio.h>
int main( void )
{
	int i, j;
	int personNum, productNum;
	float pPrice[ 4 ][ 5 ];
	
	for( i = 0; i < 20; i++ )
	{
		printf( "Enter sales person number : " );
		scanf( "%d", &personNum );
		
		if( personNum == 1 )
		{
			printf( "Enter product number : " );
			scanf( "%d", &productNum );
			
			if( productNum == 1 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );		
			}
			else if( productNum == 2 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 3 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 4 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}		
		}
		
		else if( personNum == 2 )
		{
			printf( "Enter product number : " );
			scanf( "%d", &productNum );
			
			if( productNum == 1 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );		
			}
			else if( productNum == 2 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 3 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 4 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}			
		}
		
		else if( personNum == 3 )
		{
			printf( "Enter product number : " );
			scanf( "%d", &productNum );
			
			if( productNum == 1 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );		
			}
			else if( productNum == 2 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 3 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 4 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}			
		}
		
		else if( personNum == 4 )
		{
			printf( "Enter product number : " );
			scanf( "%d", &productNum );
			
			if( productNum == 1 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );		
			}
			else if( productNum == 2 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 3 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else if( productNum == 4 )
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}
			else
			{
				printf( "Enter Product Price : " );
				scanf( "%f", &pPrice[ personNum - 1][ productNum - 1 ] );
			}			
		}			
	}
	
	for( i = 0; i < 4; i++ )
	{
		for( i = 0; i < 5; i++ )
		{
			printf( "%.2f", pPrice[ i ][ j ] );
		}
		printf( "\n " );
	}
	
	return 0;
}
