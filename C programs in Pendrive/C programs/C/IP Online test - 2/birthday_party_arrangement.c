// Malambe WD 02.01.s1 IT21810664
/* This program allows user to input package details 
and calculate the total bill amount for the party */

#include <stdio.h> 
int main( void ) //  program execution begins with function main
{
	int packageNo, noOfGuests; // variable declaration;
	char foodType; // variable declaration;
	float totalPrice = 0; // variable declaration and initialization;
	
	printf( "Package number 1 - birthday cake, ballon decorations\n" ); // display the items included for the package
	printf( "Package number 2 - birthday cake, flower decorations\n" ); // display the items included for the package
	
	printf( "Input the packge number ( 1 / 2 ) : " ); // prompt for print
	scanf( "%d%*c", &packageNo ); // raed an integer
	
	if( packageNo == 1) // compare the user input with the is statement
	{
		totalPrice = 15000.00; // initializing variables
		
		printf( "Enter the food type ( S - snack, D - dinner, L - lunch ) : " ); // prompt for print
		scanf( "%c%*c", &foodType ); // raed an integer
		
		if( foodType == 'S' ) // compare the user input with the is statement
		{
			printf( "Enter the number of guests : " ); // prompt for print
			scanf( "%d%*C", &noOfGuests ); // raed an integer
			
			totalPrice = totalPrice + ( 1500.00 * noOfGuests ); // calculate the total bill
			printf( "Bill amount : %.2f\n", totalPrice ); // display the total bill
		}
		else if( foodType == 'D' ) // compare the user input with the is statement
		{
			printf( "Enter the number of guests : " ); // prompt for print
			scanf( "%d%*C", &noOfGuests );  // raed an integer
					
			totalPrice = totalPrice + ( 3000.00 * noOfGuests ); // calculate the total bill
			printf( "Bill amount : %.2f\n", totalPrice ); // display the total bill
		}
		else if( foodType == 'L' ) // compare the user input with the is statement
		{
			printf( "Enter the number of guests : " ); // prompt for print
			scanf( "%d%*C", &noOfGuests );	// raed an integer
					
			totalPrice = totalPrice + ( 2500.00 * noOfGuests ); // calculate the total bill
			printf( "Bill amount : %.2f\n", totalPrice ); // display the total bill
		}
		else // compare the user input with the is statement
		{
			printf( "Invalid food type" ); // display error message
		}
			
	}
	else if( packageNo == 2 ) // compare the user input with the is statement
	{
		totalPrice = 30000.00; // initializing  a value to the variable
			
		printf( "Enter the food type ( S - snack, D - dinner, L - lunch ) : " ); // prompt for print
		scanf( "%c%*c", &foodType ); // raed an integer
		
		if( foodType == 'S' ) // compare the user input with the is statement
		{
			printf( "Enter the number of guests : " ); // prompt for print
			scanf( "%d%*C", &noOfGuests ); // raed an integer
			
			totalPrice	 = totalPrice + ( 1500.00 * noOfGuests ); // calculate the total bill
			printf( "Bill amount : %.2f\n", totalPrice ); // display the total bill 
		}
		else if( foodType == 'D' ) // compare the user input with the is statement
		{
			printf( "Enter the number of guests : " ); // prompt for print
			scanf( "%d%*C", &noOfGuests );	// raed an integer
					
			totalPrice = totalPrice + ( 3000.00 * noOfGuests ); // calculate the total bill
			printf( "Bill amount : %.2f\n", totalPrice ); // display the total bill
		}
		else if( foodType == 'L' ) // compare the user input with the is statement
		{
			printf( "Enter the number of guests : " ); // prompt for print
			scanf( "%d%*C", &noOfGuests ); // raed an integer	
					
			totalPrice = totalPrice + ( 2500.00 * noOfGuests ); // calculate the total bill
			printf( "Bill amount : %.2f\n", totalPrice ); // display the total bill
		}
		else // compare the user input with the is statement
		{
			printf( "Invalid food type" ); // display error message
		}
		
		return 0; // exit from the function main
	}
}
