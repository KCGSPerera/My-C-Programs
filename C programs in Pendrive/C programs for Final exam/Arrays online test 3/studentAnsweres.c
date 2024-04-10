#include <stdio.h>
int main( void )
{
	char correctAnswers[ 6 ] = { 'T', 'F', 'F', 'T', 'F', 'T' };
	char studentAnsweres[ 6 ] = { 0 };
	int i, j = 0;
	
	for( i = 0; i < 6; i++ )
	{
		printf( "Enter mark %d : ", i + 1 );
		scanf( "%c%*c", &studentAnsweres[ i ] );
	}
	for( i = 0; i < 6; i++ )
	{
		if(  studentAnsweres[ i ] == 'T' )
		{
			j++;
		}
	}
	
	for( i = 0; i < 6; i++ )
	{
		printf( "%c\t", correctAnswers[ i ] );
	}
	printf( "\n" );
	
	for( i = 0; i < 6; i++ )
	{
		printf( "%c\t", studentAnsweres[ i ] );
	}
	printf( "\n" );
	
	printf( "Number of correct answrs : %d\n", j );
	return 0;
	
}
