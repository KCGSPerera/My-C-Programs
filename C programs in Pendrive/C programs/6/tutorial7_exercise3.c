#include <stdio.h>
int add( int num1, int num2 );
int mul( int num3, int num4 );
int sqr( int num5 );
int main( void )
{
	int n1 = 3, n2 = 4, n3 = 5, n4 = 7;
	
	int result1, result2, result3, result4;
	
	
	result1 = mul( n1, n2 );
	
	result2 = mul( n3,n4 );
	
	result3 = add( result1, result2 );
	
	result4 = sqr( result3 );
	
	printf( "The Answer is : %d", result4 );

	return 0;
}
int add( int num1, int num2 )
{
	int sum = 0;
	
	sum = num1 + num2;
	return sum;
}
int mul( int num3, int num4 )
{
	int mult = 0;
	
	mult = num3 * num4;
	return mult;
}
int sqr( int num5 )
{
	return num5 * num5;
}
