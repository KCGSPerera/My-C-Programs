#include <stdio.h>
int main( void )
{
	float item[ 3 ] = { 90.00, 20.00, 55.00 };
	int qtySold[ 3 ]  = { 0 };
	int i, j = 0;
	float amount[ 3 ] = { 0 };
	
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Enter item %d quantity : ", i + 1 );
		scanf( "%d", &qtySold[ i ] );
	}
	for( i = 0; i < 3; i++ )
	{
		amount[ i ] = item[ i ] * qtySold[ i ];
	}
	printf( "\n\n" );
	
	printf( "\tItem 1\t Item 2 \t Item 3\n" );
	printf( "Price   " );
	for( i = 0; i < 3; i++ )
	{
		printf( "%.2f\t", item[ i ] );
		
	}
	printf( "\n\n" );
	
	printf( "\t item1  item2  item3 \n" );
	printf( "Qty  " );
	for( i = 0; i < 3; i++ )
	{
		printf( "  %d\t", qtySold[ i ] );
	}
	printf( "\n" );
	
	for( i = 0; i < 3; i++ )
	{
		printf( "%.2f\t", amount[ i ] );
	}
	printf( "\n\n" );
	

	if( amount[ j ] < amount[ j + 1 ] && amount[ j ] < amount[ j + 2 ] )
	{
		printf( "Lowest income earned by Item %d\n", j + 1 );
	}
    if( amount[ j + 1 ] < amount[ j ] && amount[ j + 1 ] < amount[ j + 2 ] )
	{
		printf( "Lowest income earned by Item %d\n", j + 2 );
	}
	if( amount[ j + 2 ] < amount[ j ] && amount[ j + 2 ] < amount[ j + 1 ] )
	{
		printf( "Lowest income earned by Item %d\n", j + 3 );
	}
	return 0;
}
