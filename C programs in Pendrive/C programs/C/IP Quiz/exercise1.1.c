// IT21810664_Malambe_Group 02.01.s1
// This program display numbers from 10 to 20
#include <stdio.h>
int main( void ) // Program execution begins with function main
{
	int number = 10; // declaration and the initializaion of number variable
	
	while ( number <= 20 ) // check wherther the condition is true
	{
		printf( "%d\n", number ); // print the value of the number
		
		number = number + 1; // increase the number variable value by 1 
	} // end of while
	return 0; // end of fiunction main
}
