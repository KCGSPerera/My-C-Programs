#include <stdio.h>
float calPayment( int type, float weight, char deliver );
int main( void )
{
	int serviceType;
	float totalWeight, payment;
	char need;
	
	printf( "Enter Service type : " );
	scanf( "%d", &serviceType );
	
	printf( "Enter total weight : ");
	scanf( "%f%*c", &totalWeight );
	
	printf( "Do you need to delivery service( Y / y /N / n ) : " );
	scanf( "%c%*c", &need );
	
	payment = calPayment( serviceType, totalWeight, need );
	
	printf( "Total Payment : %.2f\n", payment );
	
	return 0;
}
float calPayment( int type, float weight, char deliver )
{
	if( type == 1 )
	{
		if( deliver == 'Y' || deliver == 'y' )
		{
			return ( 1000 + ( 750 * weight ) );
		}
		else
		{
			return 750 * weight;
		}
		
	}
	else if( type == 2 )
	{
		if( deliver == 'Y' || deliver == 'y' )
		{
			return ( 1000 + ( 500 * weight ) );
		}
		else
		{
			return 500 * weight;
		}
	}
	else if( type == 3 )
	{
		if( deliver == 'Y' || deliver == 'y' )
		{
			return ( 1000 + ( 350 * weight ) );
		}
		else
		{
			return 350 * weight;
		}
	}
	else
	{
		printf( "Invalid service type" );
		return;
	}
}
