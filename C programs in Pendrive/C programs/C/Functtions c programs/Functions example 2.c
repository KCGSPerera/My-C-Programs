// Write a function called calSum to calculate the summation of integers and print sum.
#include <stdio.h>
void calSum( int num1, int num2 ); // function declaration
int main( void )
{
	int n1, n2;
	
	printf( "Enter number 1 : " );
	scanf( "%d", &n1 );
	
	printf( "Enter number 2 : " );
	scanf( "%d", &n2 );
	
	calSum( n1, n2 ); // function calling or invoke funvction
	
	return 0;
}
void calSum( int num1, int num2 ) // function implementation
{
	int sum = 0;
	sum = num1 + num2;
	
	printf( "The summation of two numbers : %d", sum );
	return;
}


