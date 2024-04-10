// Malambe Y1 S1 WD IT21810664
/* This program take user inputs 
and display the totak rent */

#include <stdio.h>
int main( void ) // program execution befins with function main
{
	int bookType, noOfDays; // variable declaration
	float amount = 0; // variable declaration and initialization
	
	printf( "Book type : " ); // prompt for print
	scanf( "%d", &bookType ); // read an integer
	
	if( bookType == 1 ) // check whether the statement is true
	{
		printf( "Number of days : " ); // prompt for print
		scanf( "%d", &noOfDays ); // read an integer
		
		if( noOfDays > 14 ) // check whether the statement is true
		{
			amount = 10.0 * noOfDays; // calculate rental
			amount = amount * ( 110 / 100.0 ); // calculate rental
			
			printf( "Rental per day : 10.00\n" ); // display message
			printf( "Rental amount : %.2f", amount); // display amount
		}
		else // check whether the statement is true
		{
			amount = noOfDays * 10.00; // calculate rental
			
			printf( "Rental per day : 10.00\n" ); // display message
			printf( "Rental amount : %.2f", amount); // display amount
		}

	}
	else if( bookType == 2 ) // check whether the statement is true
	{
		printf( "Number of days : " ); // prompt for print
		scanf( "%d", &noOfDays ); // read an integer
		
		if( noOfDays > 14 ) // check whether the statement is true
		{
			amount = 8.0 * noOfDays; // calculate rental
			amount = amount * ( 110 / 100.0 ); // calculate rental
			
			printf( "Rental per day : 8.00\n" ); // display message
			printf( "Rental amount : %.2f", amount); // display amount
		}
		else // check whether the statement is true
		{
			amount = noOfDays * 8.00; // calculate rental
			
			printf( "Rental per day : 8.00\n" ); // display message
			printf( "Rental amount : %.2f", amount); // display amount
		}
	}
	else // check whether the statement is true
	{
		printf( "Invalid user input" ); // display error message
	}
	return 0;
} // end of function main
