#include <stdio.h>
#include <assert.h>
#include <math.h>

float calDiscount( int time, float totalAmount );
void testDiscount();
void displayGift( float finalTotal );

int main( void )
{
	testDiscount();
	
	float total, discount = 0, finalTot = 0;
	int timer;
	
	printf( "Enter time ( ex : 16 ) : " );
	scanf( "%d", &timer );
	
	printf( "Enter total bill : " );
	scanf( "%f", &total );
	
	discount = calDiscount( timer, total );
	finalTot = total - discount;
	displayGift( finalTot );
	
	
	printf( "Discount : %.2f\n", discount );
	printf( "The Net amount : %.2f\n", finalTot );	
	
	return 0;
}

float calDiscount( int time, float totalAmount )
{
	
	if( time >= 16 && time <= 19 )
	{
		if( totalAmount >= 5000 )
		{
			return totalAmount * ( 10 / 100.0 );
		}
		else if( totalAmount >=2500 && totalAmount <=5000 )
		{
			return totalAmount * ( 7 / 100.0 );
		}
		else
		{
			printf( "Not eligible\n" );
			return;
		}
	}
	else if( time >= 20 && time <= 22 )
	{
		if( totalAmount >= 5000 )
		{
			return totalAmount * ( 12 / 100.0 );
		}
		else if( totalAmount >=2500 && totalAmount <=5000 )
		{
			return totalAmount * ( 9 / 100.0 );
		}
		else
		{
			printf( "Not eligible\n" );
			return;
		}
	}
	else
	{
		printf( "Not eligible\n" );
		return;
	}
}

void testDiscount()
{
	assert( fabs( calDiscount( 16, 7000 ) - 700 ) < 0.01 );
	assert( fabs( calDiscount( 21, 6000 ) - 720 ) < 0.01 );
	
	return;
}

void displayGift( float finalTotal )
{
	if( finalTotal >= 7000 )
	{
		printf( "Gift : Packet of Milk\n" );
	}
	else if( finalTotal >= 5000 )
	{
		printf( "Gift : 1kg of Sugar\n" );
	}
	else if( finalTotal >= 3000 )
	{
		printf( "Gift : Pack of 6 Eggs\n" );
	}
	else
	{
		printf( "Not eligible\n " );
		return;
	}
	return;
	
}
