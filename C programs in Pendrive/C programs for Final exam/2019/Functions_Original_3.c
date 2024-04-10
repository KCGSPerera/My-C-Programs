#include <stdio.h>
#include <assert.h>
#include <math.h>
float calAnnualInterest( float interestRate, float amount );
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main( void )
{
    testTotalAmount();

    float rate, cashAmount, interest = 0, total = 0;
    int i = 1;

    printf( "Enter the interesr rate : " );
    scanf( "%f", &rate );

    printf( "Enter the cash amount : " );
    scanf( "%f", &cashAmount );

    for( i = 1; i <= 5; i++ )
    {
        interest = calAnnualInterest( rate, cashAmount );
        total = findTotalAmount( rate, cashAmount );

        printf( "Year %d Total : %.2f\n", i, total );
        cashAmount = total;
    }
    
    return 0;
}

float calAnnualInterest( float interestRate, float amount )
{
    if( amount >= 1000000 )
    {
        return amount * ( ( interestRate + 0.5 ) / 100.0 );
    }
    else
    {
        return amount * ( interestRate / 100.0 );
    }
}

float findTotalAmount(float interestRate, float amount )
{
    return ( amount + calAnnualInterest( interestRate, amount ) );					
}

void testTotalAmount()
{
    assert( fabs( findTotalAmount( 10, 500000 ) - ( 550000 ) ) < 0.01 );
    assert( fabs( findTotalAmount( 10, 2000000 ) - ( 2210000 ) ) < 0.01 );
    return;
}

