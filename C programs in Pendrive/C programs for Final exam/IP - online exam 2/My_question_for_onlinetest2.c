#include <stdio.h>
float getDiscountedUnitPrice( int itemType );
float calcPrice( int itemType, int quantity );

int main( void )
{
	float totAmount = 0, discountedPrice = 0;
	int type, qty;
	
	printf( "Enter Item Type ( 1 /2 / 3 / 4 / 5 ) : " );
	scanf( "%d", &type );
		
	while( type != -1 )
	{
		if( type )
		discountedPrice = getDiscountedUnitPrice( type );

		printf( "Enter the product quantity : " );
		scanf( "%d", &qty );
		
		totAmount = totAmount + calcPrice( type, qty );
		
		printf( "Enter Item Type ( 1 /2 / 3 / 4 / 5 ) : " );
		scanf( "%d", &type );				
	}
	printf( "\n" );
	printf( "The total Bill Amount : %.2f\n", totAmount );
	
	return 0;
}
float getDiscountedUnitPrice( int itemType )
{
	if( itemType == 1 )
	{
		return ( 300 - ( 300 * 0.075 ) );	
	}
	else if( itemType == 2 ) 
	{
		return 250.0;
	}
	else if( itemType == 3 ) 
	{
		return 550.0;
	}
	else if( itemType == 4 ) 
	{
		return ( 120 - ( 120 * 0.05 ) );
	}
	else if( itemType == 5 ) 
	{
		return ( 240 - ( 240 * 0.025 ) );
	}
	else if( itemType == (-1) )
	{
		return printf( "Thank you for shopping with us\n" );
	}
	else
	{
		return printf( "Invalid package type\n" );
	}
}
float calcPrice( int itemType, int quantity )
{
	return getDiscountedUnitPrice( itemType ) * quantity;
}
