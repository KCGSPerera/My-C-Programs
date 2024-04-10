#include <stdio.h>
int main( void )
{
	int marks[ 10 ] = { 0 };
	int i, mark, sum = 0;
	float avg = 0;
	
	
	for( i = 0; i < 10; )
	{
		
		printf( "Enter marks %d : ", i+1 );
		scanf( "%d", &mark );
		
		if( mark >= 0 && mark <= 20 ) // always use this format. Don't use the format ( 0 < mark > 20 ) .Ask from Madam Shalini.
		{
			marks[ i ] = mark;
			sum = sum + marks[ i ];
			i++;	
		}
				
	}
	printf( "Sum : %d\n", sum );
	avg = sum / i;
	printf( "Average : %.2f\n", avg );
		
	for( i = 0; i < 10; i++ )
	{
		printf( "%d\n", marks[i] );
	}
	
	
	return 0;
}
