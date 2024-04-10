#include <stdio.h>
#define SIZE 3
int main( void )
{
	int mark[ SIZE ] = { 0 };
	int i, j;
	
	for( i = 0; i < SIZE; i++ )
	{
		printf( "Marks for the student %d  \n", i + 1 );
		
		for( j = 0; j < SIZE; j++ )
		{
			printf( "Enter the maodule %d marks : ", j + 1 );
			scanf( "%d", &mark[ j ] );
		}
	}
	
	for( i = 0; i < SIZE; i++ )
	{
		printf( " Module Mark for student %d : \n", i + 1 );
		
		for( j = 0; j < SIZE; j++ )
		{
			printf( "Module %d : %d \n", j + 1, mark[ j ] );
		}
		printf( "\n" );
	}
	
	return 0; 
}
