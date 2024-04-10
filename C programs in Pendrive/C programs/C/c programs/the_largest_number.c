// This program allows user to input two numbers and display the largest number
#include <stdio.h>
int main( void ) // function main begins program excecution

{
	int no1, no2; // variable declaration
	
	printf( "Enter number 1 : " ); // prompt
	scanf( "%d", &no1 ); // read integer 
	
	printf( "Enter number 2 : " ); //  prompt
	scanf( "%d", &no2 ); // read integer
	
	if ( no1 >= no2 ) // check whether the number 1 is greater than number 2
	{
		printf( "largest number is %d", no1 ); // display number 1
	}
	if ( no2 >= no1 ) //  check whether the number 2 is greater than number 1
	{
	printf( "largest number is %d", no2 ); // display number 2		
	}
	
	return 0;
} // end of function main
