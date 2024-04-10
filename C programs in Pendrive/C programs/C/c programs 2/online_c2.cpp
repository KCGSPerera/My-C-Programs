#include <stdio.h>
int main( void )
{
	int units, type;
	float total = 0;
	
	printf( "Enter the customer type ( 1 - Domestic / 2 -Samurdhi ) : " );
	scanf( "%d", &type );
	
	if( type == 1 )
	{
		printf( "Enter the number of units : " );
		scanf( "%d", &units );
		
		if( units <= 100 )
		{
			total = units * 10;
			
			printf( "Total is : %.2f\n", total );
		}
		else
		{
			total = 100 * 10;
			units = units - 100;
			total = ( total + ( units * 30 ) );
			total = total * 120 / 100.0;
			
			printf( "Total is : %.2f\n", total );
		}
	}
	else
	{
		printf( "Enter the number of units : " );
		scanf( "%d", &units );
		
		if( units <= 100 )
		{
			total = units * 10;
			
			printf( "Total is : %.2f\n", total );
		}
		else
		{
			total = 100 * 10;
			units = units - 100;
			total = total + ( units * 30 );
			
			printf( "Total is : %.2f\n", total );
		}
	}
	return 0;
}
