// Malambe Y1 S1 WD It21810664
/* This program allows user to input the working years 
and sold items and then calculate the monthly comission */
#include <stdio.h>
int main( void ) // main function begins program execution
{
	int noOfYears, noOfUnits; // variavble declaration
	float comission = 0; // variable declaration and initialization
	
	printf( "Enter the number of years worked : " ); // prompt for print
	scanf( "%d", &noOfYears ); // read an integer from the keyboard
	
	if( noOfYears > 2 ) // check whether the statement is true
	{
		printf( "Enter the number of units sold per month : " ); // prompt for print
		scanf( "%d", &noOfUnits ); // read an integer
		
		if( noOfUnits >= 100 ) // check whether the statement is true
		{
			comission = 3500 * noOfUnits; // calculate the comission
			printf( "The monthly comission : %.2f", comission ); // print comission
		}
		else if( noOfUnits >=31 ) // check whether the statement is true
		{
			comission = 2500 * noOfUnits; // calculate the comission
			printf( "The monthly comission : %.2f", comission ); // print the comission
		}
		else // check whether thestatement is true
		{
			
			comission = 1000 * noOfUnits; // calculate the comission
			printf( "The monthly comission : %.2f", comission ); // print the comission
		}
	}
	else // check whether the statement is true
	{
		printf( "Enter the number of units sold per month : " ); // prompt for print
		scanf( "%d", &noOfUnits ); // read an integer
		
		printf( "The monthly comission : %.2f", comission ); // display the comission
	}
	return 0; 
} // end of funtion main
