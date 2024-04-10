#include <stdio.h>
float getDiscountPrice( int noOfGuests, float chargePerGuest );
float getAmount( int noOfGuests, float chargePerGuest,  float discount );
int main( void )
{
	int number;
	float perCharge, totDiscount, amount;
	
	printf( "Enter the number of guests : " );
	scanf( "%d", &number );
	
	printf( "Enter the charge per guest : " );
	scanf( "%f", &perCharge );
	
	totDiscount = getDiscountPrice( number, perCharge );
	amount = getAmount( number, perCharge, totDiscount );
	
	printf( "Discount : %.2f\n", totDiscount );
	printf( "Amount to be paid : %.2f\n", amount );
	
	return 0;
	
}

float getDiscountPrice( int noOfGuests, float chargePerGuest )
{
	if( noOfGuests >= 200 )
	{
		return ( noOfGuests * chargePerGuest ) * ( 10 / 100.0 );
	}
	else
	{
		return 0;
	}
}

float getAmount( int noOfGuests, float chargePerGuest,  float discount )
{
	return ( noOfGuests * chargePerGuest ) - discount;
}

