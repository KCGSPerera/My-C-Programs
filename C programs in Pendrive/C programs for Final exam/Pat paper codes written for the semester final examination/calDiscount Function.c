// Ths program calculate the discount for the total bill according to the Total bill amount and the time they have spent in the super market.
// This program will also display a gift for the bills which complete the required conditions.

#include <stdio.h>
#include <assert.h>
#include <math.h>
float calDiscount( int time, float totalAmount );
void displayGift( float totAmount );
void testCalDiscount( );

int main( void )
{
    float totalAmount = 0, finalTotal = 0, discount = 0;
    int timer;

    printf( "Enter time ( 16 - 22 ) : " );
    scanf( "%d", &timer );

    if( timer < 16 || timer > 22 )
    {
        printf( "No offers and discounts for this time range" );
        return -1;
    }

    printf( "Enter Bill amount : " );
    scanf( "%f", &totalAmount );
    
    testCalDiscount( );

    discount = calDiscount( timer, totalAmount );
    finalTotal = totalAmount - discount;

    printf( "Net Total : %.2f\n", finalTotal );

    void displayGift( float finalTotal );
    return 0;
}

float calDiscount( int time, float totAmount )
{
    if( time >= 16 && time < 20 )
    {
        if( totAmount >= 5000 )
        {
            return totAmount * 0.1;
        }
        else if( totAmount < 5000 && totAmount >= 2500 )
        {
            return totAmount * 0.07;
        }
        else
        {
            return 0;
        }
    }
    if( time >= 20 && time >= 22 )
    {
        if( totAmount >= 5000 )
        {
            return totAmount * 0.12;
        }
        else if( totAmount < 5000 && totAmount >= 2500 )
        {
            return totAmount * 0.09;
        }
        else
        {
            return 0;
        }    
    }
    
}

void displayGift( float finalTot )
{
    if( finalTot < 3000 )
        printf( " Gift : No Gift\n" );
    else if( finalTot <= 4999 )
        printf( " Gift : Pack of 6 eggs\n" );
    else if( finalTot <= 6999 )
        printf( " Gift : 1 KG of sugar\n" );
    else 
        printf( "Gift : Packet of Milk" );
        
    return;
}

void testCalDiscount( )
{
    assert( fabs( calDiscount( 16, 6000 ) - 600 ) < 0.01 );
    return;
}
