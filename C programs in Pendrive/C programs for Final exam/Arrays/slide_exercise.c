#include <stdio.h>
int main( void )
{
	float marks[ 3 ][ 3 ];
	int i, j;
	float total[ 3 ] = { 0 };
	float average[ 3 ] = { 0 };
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Student %d;\n", i + 1 );
		
		for( j = 0; j < 3; j++ )
		{
			printf( "Enter mark %d : ", i + 1 );
			scanf( "%f", &marks[ i ][ j ] );
			
			total[ i ] = total[ i ] + marks[ i ][ j ];
		}
		average[ i ] = total[ i ] / 3;
	}
	printf( "\n\n" );
	
	printf( ":::::::::::::::::::::::::::::::::::::\n\n" );	
	printf( "Student marks\n" );
	printf( ":::::::::::::::::::::::::::::::::::::\n" );
	printf( "\t\t\t Subject 1\t subject 2\t Subject 3\t Total Marks\t Average Marks\n");
	
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Student %d marks : \t", i + 1 );
		
		for( j = 0; j < 3; j++ )
		{
			printf( " %.2f\t\t ", marks[ i ][ j ] );
		}
		printf( "%.2f\t\t", total[ i ] );
		printf( " %.2f\n", average[ i ] );
	}
	printf( ":::::::::::::::::::::::::::::::::::::\n\n" );	
	
	return 0;
}
