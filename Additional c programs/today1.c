#include <stdio.h>
int main( void )
{
	int marks[ 5 ];
	int i, sum = 0;
	float average = 0;
	
	for( i = 0; i < 5; i++ )
	{
		marks[ i ] = 0;
	}
	
	for( i = 0; i < 5; i++ )
	{
		printf( "Enter mark %d : ", i + 1 );
		scanf( "%d", &marks[ i ] );
		
		sum = sum + marks[ i ];
	}
	
	for( i = 0; i < 5; i++ )
	{
		printf( "Mark : %7d\n", marks[ i ] );
	}
	
	average = ( float )sum / i;
	
	printf( "\n%s%24s\n\n", "Element", "Value" );
	
	printf( "Sum of the first 2 elements : %d\n", marks[ 0 ] + marks[ 1 ] + marks[ 2 ] );
	printf( "Total : %23d\n", marks[ 4 ] + 2 );
	
	printf( "Sum : %25d\n", sum );
	printf( "Average : %21.2f\n", average );
	
	return 0;
	

}
