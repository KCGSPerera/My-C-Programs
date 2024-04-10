#include <stdio.h>
int main( void )
{
	int i;
	
	int arr[5] = { 1, 2, 3, 4, 5 };
		
	for( i = 0; i < 4; i++ )
	{
		arr[ i ] = arr[ 4 - i ];
	}

	
	for( i = 0; i < 4; i++ )
	{
		printf( "%d\n", arr[ i ] );
	}
	return 0;
}
