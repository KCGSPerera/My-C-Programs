#include <stdio.h>
float calcPrice( int pizzaType, int quantity );
float getDiscount( float totPrice, float totalQuantity );

int main( void )
{
	int type, qty, totQty = 0;
	float subTotal = 0, netTotal = 0;
	
	printf( "Enter pizza Type : " );
	scanf( "%d", &type );
	
	while( type != -1 )
	{
		subTotal = subTotal + calcPrice( type, qty );
		
		if( type != 100 && type != 200 && type != 300 && type != 400 )
		{
			printf( "Invalid pizza type\n" );
		}
		
		else
		{
			printf( "Enter pizza quantity : " );
			scanf( "%d", &qty );
		}
		
		
		totQty = totQty + qty;
		
		netTotal = getDiscount( subTotal, totQty );
		
		printf( "Enter pizza Type : " );
		scanf( "%d", &type );
	}
	printf( "\n" );
	printf( "Total number of pizzas : %d\n", totQty );
	printf( "Total amount : %.2f\n\n", netTotal );
	printf( "Thank you for ordering with us" );
	
	return 0;
}

float calcPrice( int pizzaType, int quantity )
{
	if( pizzaType == 100 )
	{
		return 2300 * quantity;
	}
	else if( pizzaType == 200 )
	{
		return 2500 * quantity;
	}
	else if( pizzaType == 300 )
	{
		return 1750 * quantity;
	}
	else if( pizzaType == 400 )
	{
		return  2900 * quantity;
	}
	else
	{
		return;

	}
}

float getDiscount( float totPrice, float totalQuantity )
{
	if( totalQuantity >= 3 )
	{
		return ( totPrice - ( totPrice * 0.05 ) );
	}
	else
	{
		return totPrice;
	}
}
