#include <stdio.h>
int main( void )
{
	char type;
	double distance;
	float discount = 0;
	
	printf( "Enter the vehicle type( C / V / B ) : " );
	scanf( "%c%*c", &type );
	
	printf( "Enter the distance : " );
	scanf( "%lf%*c", &distance );
	
	if( type == 'C')
	{
		
		if( distance >= 100 )
		{
			discount = ( distance * 40 ) * ( 0.05 );
			
		}
		else
		{
			discount = 0;
			
		}
	}
	else if( type == 'V' )
	{
		if( distance >= 100 )
		{
			discount = ( distance * 50 ) * ( 5 / 100.0 );
			
		}
		else
		{
			discount = 0;
			
		}
	}
	else if( type == 'B' )
	{
		printf( "There is no discount for vehicle type BUS" );
	}
	else
	{
		printf( "Invalid vehicle type" );
	}
	printf( "Discount : %.2f\n", discount );
	
	
	return 0;
	
}
