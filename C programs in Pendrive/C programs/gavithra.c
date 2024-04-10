#include <stdio.h>
float findIncreasePercentage( int category );
float findNewPrice( int percentage, float price );
int main( void )
{
	int pCategory; 
	float oPrice;
	float nPrice, percentages;
	
	printf( "Enter the Item category : " );
	scanf( "%d", &pCategory );
	
	printf( "Enter the item old price : " );
	scanf( "%d", &oPrice );
	
	percentages = findIncreasePercentage( pCategory );
	printf( "The price increament : %.2f\n", percentages );
	
	findNewPrice( )
	
	nPrice = findNewPrice( percentages, nPrice );
	printf( "New Price : %.2f", nPrice );
	
	return 0;
	
}
float findIncreasePercentage( int category )
{
	float pPrice;
	
	if( category == 1 )
	{
		return 10;
	}
	else if( category == 2 )
	{
		return 15;
	}
	else if( category = 3 )
	{
		return 20;
	}
	else
	{
		printf( "Invalid product category" );
		return;
	}
	
}
float findNewPrice( int percentage, float price )
{
	float newPrice;
	
	newPrice = price + price * ( percentage / 100.0 );
	
	return newPrice;
}

