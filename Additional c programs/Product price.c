#include <stdio.h>
float priceIncreasePercentage( int category );
float findNewPrice( int percentage, float price );
int main( void )
{
	int type, percent;
	float nPrice, oPrice;
	
	printf( "Enter the product category : " );
	scanf( "%d", &type );
	
	printf( "Enter the product Price : " );
	scanf( "%f", &oPrice );
	
	percent = priceIncreasePercentage( type );
	nPrice = findNewPrice( percent, oPrice );
	
	printf( "New Price : %.2f\n", nPrice );
	
	
	return 0;
}
float priceIncreasePercentage( int category )
{
	int type;
	
	if( category == 1 )
		return 10;
	else if( category == 2 )
		return 15;
	else if( category == 3 )
		return 20;
	else
		printf( "Invalid product category\n" );
		return 0;
}
float findNewPrice( int percentage, float price )
{
	float newPrice;
	
	newPrice = price + price * ( percentage / 100.00 );
	
	return newPrice;
}


/* >>>In this program, how to print the "Invalid user input" statement, without displaying the 
    promt to input product tyoe and the newPrice output in the output window ??? */
