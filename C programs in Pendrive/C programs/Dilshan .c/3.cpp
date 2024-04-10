#include<stdio.h>
float findincreasePercent( int category );
float findNewPrice( int percentage , float price );
main ( void )
{
	int pCategory,percentages;
	float nPrice,oPrice;
	
	printf("Enter the product category : ");
	scanf("%d", &pCategory);
	
	printf("Enter the  old price : ");
	scanf("%d", &oPrice);
	
	nPrice = oPrice + oPrice * (percentages/100.0);
	printf("New price is :%.2f",nPrice);
	return 0;
}
float findincreasePercent( int category )
{	
	float newPrice;
	float price;
	if( category == 1)
	{
		newPrice = price + ( price * (10/100.0));	
		return newPrice;	
	}
	else if( category == 2)
	{
		newPrice = price + ( price * (15/100.0));	
		return newPrice;	
	}	
	else if( category == 3)
	{
		newPrice = price + ( price * (20/100.0));	
		return newPrice;	
	}	
	else
	{
		printf("User input invalid Category");	
		return 0;	
	}		
	
}

float findNewPrice( int percentage , float price )
{
	float newPrice;
	newPrice = price + ( price * (percentage/100.0));
	return newPrice;
}
