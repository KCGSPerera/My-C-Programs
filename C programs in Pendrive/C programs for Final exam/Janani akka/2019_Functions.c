#include <stdio.h>
int main( void )
{
	int ratings[ 3 ][ 4 ];
	int total[ 3 ] = { 0 };
	float average[ 3 ] = { 0 };
	int i, j, movie = 0;
	float max = 0;
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Movie %d\n", i + 1 );
		printf( ":::::::::::::::::::::::::::::::\n" );
		
		for( j = 0; j < 4; j++ )
		{
			printf( "Enter Reviewer %d Rating : ", i + 1 );
			scanf( "%d", &ratings[ i ][ j ] );
			
			total[ i ] = total[ i ] + ratings[ i ][ j ];
		}
		
		average[ i ] = total[ i ] / 4.0;
		
		if( average[ i ] >= max )
		{
			max = average[ i ];
			movie = i + 1;
		}
		
		printf( "\n" );
		printf( ":::::::::::::::::::::::::::::::\n" );
	}
	
	printf( "\tReviewer1\tReviewer2\tReviewer3\tReviewer4\n");
	for( i = 0; i < 3; i++ )
	{
		printf( "Movie %d  ", i +  1 );
		for( j = 0; j < 4; j++ )
		{
			printf( "%d\t\t", ratings[ i ][ j ] );	
		}
		printf( "\n" );
	}
	printf( "\n" );
	printf( "\n" );
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Monvie %d Average Rating : %.2f\n\n", i + 1, average[ i ] );
	}
	printf( "The highest rated movie : movie %d", movie );
	
	return 0;
}
