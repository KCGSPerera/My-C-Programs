#include <stdio.h>
int main( void )
{
	int array[ 10 ] = { 25, 32, 45, 2, 13, 9, 6, 10, 17, 4 };
	int searchKey, i, x;
	
	for( x = 0; x < 10; x++ )
	{
		printf( "Enter the search key : " );
		scanf( "%d", &searchKey );	
		
		for( i= 0; i < 10; i++ )
		{
		
			if( array[ i ] == searchKey  )
			{
				printf("Index no : %d\n", i );
			
			}

		}
		printf( "Invalid\n ");	
	
	}
 
	
	return 0;
} 
