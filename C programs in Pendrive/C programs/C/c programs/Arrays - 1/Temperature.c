#include <stdio.h>
int main( void )
{
	float temp[ 25 ] = , sum = 0, average = 0;
	int i;
	
	for( i = 0; i < 24; i++ )
	{
		printf( "Enter the temperature : " );
		scanf( "%f", &temp[ i ] );
		
		sum = sum + temp[ i ];	
	}
	
	for( i = 0; i < 24 ; i++ )
	{
		printf( "Hourly temperature : %.2f\n", temp[ i ] );
	}
	
	average = sum / 25;
	
	printf( "Average : %.2f", average );
	return 0;
}
