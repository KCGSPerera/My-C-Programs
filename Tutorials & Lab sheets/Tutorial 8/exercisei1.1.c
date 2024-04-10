#include <stdio.h>
int main( void )
{
	int marks[ 10 ] = { 0 };
	int i, mark;
	
	
	for( i = 0; i < 10; )
	{
		
		printf( "Enter marks %d : ", i+1 );
		scanf( "%d", &mark );
		
		if( mark >= 0 && mark <= 20 ) // always use this format. Don't use the format ( 0 < mark > 20 ) .Ask from Madam Shalini.
		{
			marks[ i ] = mark;
			i++;
		}
	}
	
	for( i = 0; i < 10; i++ )
	{
		printf( "%d\n", marks[i] );
	}
	return 0;
}
