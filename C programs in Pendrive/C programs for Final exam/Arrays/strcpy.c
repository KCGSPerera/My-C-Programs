#include <stdio.h>
#include <string.h>
#define SIZE 5
void modifyArray( int b[], int size );

int main( void )
{
	int a[ SIZE ] = { 0, 1, 2, 3, 4 };
	
	modifyArray( a, SIZE );
	
	return 0;
	
}
void modifyArray( int b[], int size )
{
	int j;
	int result;
	
	for( j = 0; j < size; ++j )
	{
		b[ j ] *= 2;
		printf( "%d\n", b[ j ] );
		
	}
	return;
}
