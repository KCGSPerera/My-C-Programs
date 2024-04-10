#include <stdio.h>
int main( void )
{
	int fib[ 10 ] = { 0, 1 };
	int i;
	
	for( i = 0; i < 10; i++ )
	{
		printf("%d    ", fib[ i ] );
	}
	
	return 0;
	
}
