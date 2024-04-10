#include <stdio.h>
int main( void )
{
	int type, qty;
	char size, mode;
	float amount = 0, total = 0, discount = 0;
	char online, loyalty, card;
	
	printf( "Enter pizza type( 1 / 2 ) : " );
	scanf( "%d%*c", &type );
	
	while( type != -1 )
	{
	
		printf( "Enter pizza size( L / M ) : " );
		scanf( "%c%*c", &size );
	
		printf( "Enter quantity : " );
		scanf( "%d%*c", &qty );
	
		if( type == 1 )
		{
			if( size == 'L' )
			{
				amount += 1720 * qty;
			}
			else if( size == 'M' )
			{
				amount += 975 * qty;
			}
			else
			{
				printf( "Invalid pizza size" );
			}
		
		}
		else if( type == 2 )
		{
			if( size == 'L' )
			{
				amount += 1820 * qty;
			}
			else if( size == 'M' )
			{
				amount += 1000 * qty;
			}
			else
			{
				printf( "Invalid pizza size" );
			}
		}
		else
		{
			printf( "Invalid pizza type" );
		}
		
		printf( "Enter pizza type( 1 / 2 ) : " );
		scanf( "%d%*c", &type );
	}
	
	printf( "Are you paying by card ( Y / N ) : " );
	scanf( "%c%*c", &card );
	
	printf( "Are you a Loyalty customer ( Y / N ) : " );
	scanf( "%c%*c", &loyalty );
	
	printf( "Is this an online order ( Y / N ) : " );
	scanf( "%c%*c", &online );
	
	if( online == 'Y' )
	{
		discount = amount * ( 5 / 100.0 );
	}
	if( loyalty == 'Y' )
	{
		discount = amount * ( 15 / 100.0 );
	}
	if( card == 'Y' )
	{
		discount = amount * ( 20 / 100.0 );
	}
	
	total = amount - discount;
	
	printf( "\n" );	
	printf( "Total Bill amount : %.2f\n", amount );	
	printf( "Discount : %.2f\n", discount );
	printf( "Net amount : %.2f\n", total );	

	return 0;
}

