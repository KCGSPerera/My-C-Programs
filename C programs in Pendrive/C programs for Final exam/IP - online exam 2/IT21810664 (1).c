// IT21810664
// Perera K C G S
// WD_02.01.S1
// Malambe

// This program will take read item type and quantity from the user and calculate the total amount.

#include <stdio.h>
float getDiscountedUnitPrice( int itemType ); // declaration of function to calculate and return discounted item price
float calcPrice( int itemType, int quantity ); // declaration of function to calculate abd return total amount

int main( void ) // program execution begins with function main
{
	int type, qty, i = 1; // variable declaration
	float unitPrice = 0, totalAmount = 0; // variable declaration
	
		
	while( i != -1 ) // starting the loop
	{
		printf( "Enter item type ( Input -1 to exit ) : " ); // prompt to print
		scanf( "%d", &type ); // read an integer
		
		unitPrice = getDiscountedUnitPrice( type ); // calling the function
		
		printf( "Enter quantity : " ); // prompt to print
		scanf( "%d", &qty ); // read an integer
		
		
		totalAmount = calcPrice( type, qty ); // calling the function
		
		i++; // increament of counter variable
		
	}
	printf( "\n" );
	printf( "Total Amount : %.2f\n", totalAmount ); // display total amont
	
	
	return 0; 
} // end of function main

float getDiscountedUnitPrice( int itemType ) // function implementtion
{
	float price; // variable declaration 
	
	if( itemType == 1 ) // checking the conditions
	{
		price = 300 - ( 300 * ( 7.5 / 100.0 ) ); // calculate the item discounted price
		return price; // return the value to the main function
	}
	else if( itemType == 2 )
	{
		price = 250; // calculate the item discounted price
		return price; // return the value to the main function
	}
	else if( itemType == 3 )
	{
		price = 550; // calculate the item discounted price
		return price; // return the value to the main function
	}
	else if( itemType == 4 )
	{
		price = 120 - ( 120 * ( 5 / 100.0 ) );
		return price;
	}
	else if( itemType == 5 )
	{
		price = 240 - ( 240 * ( 2.5 / 100.0 ) ); // calculate the item discounted price
		return price; // return the value to the main function
	}
	else
	{
		printf( "Invalid item type\n" ); // display error message
		return; // return the value to the main function
	}
} // end of function

float calcPrice( int itemType, int quantity ) // implementation of function
{
	float total = 0; // variable declaration
	
	total = total + ( getDiscountedUnitPrice( itemType ) * quantity ); // calculating the total 
	return total; // return the value to the main function
	
} // end of function
