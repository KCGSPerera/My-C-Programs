#include <stdio.h> 
#define SIZE 5
void arrNum( int num[], int size  );

int main( void )
{
	int i;
	int array[ SIZE ] = { 0, 1, 2, 3, 4 };
	
	for( i = 0; i < SIZE ; ++i )
	{
		printf( "%3d",  array[ i ] );
	}
	puts( " " );
	
	arrNum( array, SIZE );
	
	for( i = 0; i < SIZE; ++i )
	{
		printf( "%3d", array[ i ] );
	}
	
	return 0;
}
void arrNum( int num[], int size )
{
	int j;
	
	for( j = 0; j < size; ++j )
	{
	
		num[ j ] *= 2;
		
	}
	return;
}
