// IT21810664
// Perera K C G S
// WD_02.01.S1
// Malambe


#include <stdio.h>
float getDiscountedUnitPrice( int itemType ); 
float calcPrice( int itemType, int quantity );
int main( void )
{
	int type, qty; 
	float unitPrice = 0, totalAmount = 0; 
	
		
	while( type != -1 ) 
	{
		printf( "Enter item type ( Input -1 to exit ) : " ); 
		scanf( "%d", &type );
		
		unitPrice = getDiscountedUnitPrice( type ); 
		
		printf( "Enter quantity : " ); 
		scanf( "%d", &qty ); 
		
	
		totalAmount = calcPrice( type, qty ); 
	}
	
	printf( "\n" );
	printf( "Total Amount : %.2f\n", totalAmount ); 
	
	
	return 0; 
} 

float getDiscountedUnitPrice( int itemType ) 
{
	float price; 
	
	if( itemType == 1 ) 
	{
		price = 300 - ( 300 * ( 7.5 / 100.0 ) ); 
		return price; 
	}
	else if( itemType == 2 )
	{
		price = 250; 
		return price; 
	}
	else if( itemType == 3 )
	{
		price = 550; 
		return price; 
	}
	else if( itemType == 4 )
	{
		price = 120 - ( 120 * ( 5 / 100.0 ) );
		return price;
	}
	else if( itemType == 5 )
	{
		price = 240 - ( 240 * ( 2.5 / 100.0 ) ); 
		return price; 
	}
	else if( itemType == -1 )
	{
		return printf( "Thank you for shoppig with us" );
	}
	else
	{
		printf( "Invalid item type\n" ); 
		return; 
	}
} 

float calcPrice( int itemType, int quantity ) 
{
	float total = 0; 
	
	total = total + ( getDiscountedUnitPrice( itemType ) * quantity ); 
	return total; 
	
} 
