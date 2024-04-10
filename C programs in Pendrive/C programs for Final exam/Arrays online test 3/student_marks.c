#include <stdio.h>
int main( void )
{
	int marks[ 5 ][ 2 ] = { 0 };
	float total[ 5 ] = { 0 };
	int i, j;
	
	for( i = 0; i < 5; i++ )
	{
		for( j = 0; j < 2; j++ )
		{
			printf( "Enter student %d mark %d : " , i + 1, j + 1 );
			scanf( "%d", &marks[ i ][ j ] );
		
		}
		printf( "\n" );
		
	}
	
	for( i = 0; i < 5; i++ )
	{
		total[ i ] = ( marks[ i ][ 1 ] * 0.4 ) + ( marks[ i ][ 2 ] * 0.6 );
	}
	printf( "\n" );
	
	for( i = 0; i < 5; i++ )
	{
		printf( "Student %d final marks : %.2f\n", i + 1, total[ i ] );
	}
	return 0;
}
