#include <stdio.h>
#include <assert.h>
float calAnnualInterest( float interestRate, float amount );
float findTotalAmount( float interestRate, float amount );
void testTotalAmount();

int main( void )
{
	testTotalAmount();
	
	float cAmount, iRate, yInterest, yTotal, finalBalance;
	int i, j;
	
	printf( "Enter Amount : " );
	scanf( "%f", &cAmount );
	
	printf( "Enter Interest rate : " );
	scanf( "%f", &iRate );
	
	yInterest = calAnnualInterest( iRate, cAmount );
	yTotal = findTotalAmount( iRate, cAmount );	
	
	finalBalance = yTotal;
	
	for( i = 1; i <= 5; i++ )
	{
		printf( "Amount after year %d : %.2f \n", i, finalBalance );
		
		finalBalance = finalBalance + ( finalBalance * ( iRate / 100 ) );
	}
	
	return 0;	
}

float calAnnualInterest( float interestRate, float amount )
{
	int interest;
	
	if( amount >= 1000000 )
	{
		interest = amount * ( ( interestRate + 0.5 ) / 100 );
		return interest;
	}
	else
	{
		interest = amount * ( interestRate / 100 );
		return interest;
	}
		
}

float findTotalAmount( float interestRate, float amount )
{
	float totalAmount;
	
	totalAmount = calAnnualInterest( interestRate, amount ) + amount;
	return totalAmount;
}

void testTotalAmount()
{
	assert( calAnnualInterest( 10, 100000 ) - 10000 < 0.01 );
	assert( calAnnualInterest( 12, 200000 ) - 24000 < 0.01 );
	
	return;
}

