// write a function called calSum, to calulate the summation of two integers and return the sum
#include <stdio.h>
int calSum( int num1, int num2 ); // function declaration
int main()
{
	int n1, n2;
	int result = 0;
	
	printf( "Enter number 1 : " );
	scanf( "%d", &n1 );
	
	printf( "Enter number 2 : " );
	scanf( "%d", &n2 );
	
	result = calSum( n1, n2 ); // function calling or invote function
	
	printf( "The summation of two numbers is : %d", calSum );
	return 0;
}
int calSum( int num1, int num2 ) // function implementation
{
	int sum = 0;
	
	sum = num1 + num2;
	return sum;
}
