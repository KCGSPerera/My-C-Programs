#include <stdio.h>
float calAdditionalCharges( int orderType, float subTotal ); // function declaration 1
float calTotal( float subTotal, float charges ); // function declaration 2
int main( void ) // program execution begins with function main
{
	int type; // variable declaration
	float sTotal, adCharges, total; // variable declaration
	
	printf( "Enter the order type : " ); // prompt to print
	scanf( "%d", &type ); // read an integer
	
	printf( "Enter the Sub Total : " ); // prompt to print
	scanf( "%f", &sTotal ); // read an integer
	
	adCharges = calAdditionalCharges( type, sTotal );  // what is the comment that we can use for this statement ???
	total = calTotal( sTotal, adCharges ); // what is the comment taht we can use for this statement ???
	
	printf( "Total Bill Amount : %.2f", total ); // display the total bill amount
	
	return 0;
} // end of function main

float calAdditionalCharges( int orderType, float subTotal ) // implementation of function 1
{
	switch( orderType ) // beginning of switch
	{
		case 1: return ( subTotal * 0.12 ) + ( subTotal * 0.1 ); break; // check whether the statement is true
		
		case 2: return ( subTotal * 0.12 ); break; // check whether the statement is true
		
		case 3: return ( subTotal * 0.12 ) + ( subTotal * 0.05 ); break; // check whether the statement is true
		
		default : return printf( "Invalid order type" ); // if all the above statements are false execute this statement
		
	} // end of switch
} // end of function 1

float calTotal( float subTotal, float charges ) // implementation of function 2
{
	return subTotal + charges; // calculate the total bill
} // end of function 2


