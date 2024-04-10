#include <stdio.h>
float calPayment( int itemCode, int quantity);
int main( void ) 
{
	float payment = 0;
	int itemNo, units;
	
	printf( "Enter the item code ( 1 / 2 ): " );
	scanf( "%d", &itemNo );
	
	printf( "Enter the quantity : " );
	scanf( "%d", &units );
	
	payment = calPayment( itemNo, units );
	printf( "Total payment : %.2f", payment );
	
	return 0;
}
float calPayment( int itemCode, int quantity)
{
	float price = 0;
	
	if( itemCode == 1 )
	{
		price = 50.0 * quantity;
		return price;
	}
	else if( itemCode == 2 )
	{
		price = 100.0 * quantity;
		
		return price;
		
	}
	else
	{
		return 0;
	}
}
