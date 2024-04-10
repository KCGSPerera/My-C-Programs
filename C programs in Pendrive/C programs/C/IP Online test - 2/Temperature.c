// Malambe WD 02.01.s1 iT21810664
/* This program allows user to input temperature in 
celcius or farenhite and convert it to celcius or farenhite */
 
#include <stdio.h>
int main( void ) // program execution begins with function main
{
	int choice; // variable declaration
	float temperature = 0; // variable declaration and initialization
	int count = 1; // variable declaration and initialization
	
	printf( "**************************\n\n"); // display the menu
	printf( "1. Celcius to Farenhite\n"); // display the menu
	printf( "2. Farenhite to Celcius\n"); // display the menu
	printf( "3. Exit\n\n" ); // display the menu	
	printf( "Input your choice : " ); // prompt to print
	printf( "\n\n**************************\n"); // display menu
	
	scanf( "%d", &choice ); // raed an integer
	
	
	while( choice != 3 ) // check whether the statement is true
	{
		if( choice == 1 ) // check whether the statement is tru
		{
			printf( "Enter the temperature : " ); // prompt to print
			scanf( "%f", &temperature ); // read an integer
		
			temperature = ( temperature * 9 / 5.0 ) + 32; // calculate the temperature
		
			printf( "Temperature : %.2f Farenhite\n\n", temperature ); // display the temperarture
			
			printf( "Input your choice : " ); // prompt to print
			scanf( "%d", &choice ); // read an integer
		}
		else if( choice == 2 ) // check whether the statement is tru
		{
			printf( "Enter the temperature : " ); // prompt to print
			scanf( "%f", &temperature ); // read an integer
			
			temperature = ( ( temperature - 32 ) * 5 / 9.0 ); // calculate the temperature
		
			printf( "Temperature : %.2f Celcius\n\n", temperature ); // display the temperarture
			
			printf( "Input your choice : " ); // prompt to print
			scanf( "%d", &choice ); // read an integer
		}	
		else // decesion if the statement is false
		{
				printf( "Invalid user input" ); // display error message
		}
	}
	printf( "\nThank you for using temperature convertor" ); // conclusion statement
		
	return 0;
} // end of function main
