#include <stdio.h>
int main( void )
{
	int type;
	float totalBill, finalBill;
	
	printf( "\n1 - Loyalty customer" );
	printf( "\n2 - Non-loyalty customer\n\n" );
	
	printf( "The customer type ( 1 / 2 ) : " );
	scanf( "%d", &type );
	
	if( type == 1 )
	{
		printf( "Enter the total bill amount : " );
		scanf( "%f", &totalBill );
		
		if( totalBill <= 2500 )
		{
			finalBill = totalBill * ( 95 / 100.0 );
			printf( "The final bill is : %.2f", finalBill );
		}
		else
		{
			finalBill = totalBill * ( 90 / 100.0 );
			printf( "The final bill is %.2f", finalBill );
		}
	}
	else if( type == 2 )
	{
		printf( "Enter the total bill amount : " );
		scanf( "%f", totalBill );
		
		if( totalBill <= 5000 )
		{
			finalBill = totalBill;
		}
		else
		{
			finalBill = totalBill * ( 90 * 100.0 );
			printf( "The final bill is %.2f", finalBill );
		}
		
	}
	else
	{
		printf( "Invalid user input" );
	}
	return 0;
	
}
