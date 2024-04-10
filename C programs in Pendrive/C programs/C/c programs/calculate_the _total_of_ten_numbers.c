// This program allows user to input 10 numbers and calculate the sum
#include <stdio.h>
int main( void ) //program excecution begins with function main
{
	int no = 0; // variable declaration
	int sum = 0; // variable declaration
	int count = 0; // variable declaration
	float average = 0; // variable declaration
	
	printf( "Input number : "); // prompt to print
	scanf( "%d", &no ); // read the integer value
	
	if ( count <= 10 ) // check whether the count is less than 10 or not
	{	
		sum = sum + no; // calculating the sum
		count = count + 1; // calculating the count
	}
	else
	{
		average = sum / 10.00; // calculating the average
		printf( "The sum of ten numbers is %d\n", sum ); // display the sum
		printf( "The average is %.2f\n", average); // display the average
	}
	return 0;
}
