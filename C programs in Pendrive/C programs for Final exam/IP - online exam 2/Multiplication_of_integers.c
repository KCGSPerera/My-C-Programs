#include <stdio.h>
void multiply( int number, int range );
int main( void )
{
	int num, numRange;
	
	printf( "Enter an integer : " );
	scanf( "%d", &num );
	
	printf( "Enter Range : " );
	scanf( "%d", &numRange );
	
	multiply( num, numRange );
	
	return 0;
}
void multiply( int number, int range )
{
	int i;
	
	for( i = 1; i <= range; i ++ )
	{
		printf( "%d * %d = %d\n", number, i, number * i );
	}
	return;
}
