// Write a function call calArea to calculate the area of a rectangle and return area.
#include <stdio.h>
float calArea( float length, float width );
int main( void )
{
	float l, w;
	float result;
	
	printf( "Enter the Length : " );
	scanf( "%f", &l );
	
	printf( "Enter the Width : " );
	scanf( "%f", &w );
	
	result = calArea( l, w );
	printf( "The area of the rectangle is %.2f", result );
	
	return 0;
}
float calArea( float length, float width)
{
	float area;
	
	area = length * width;
	return area;
}

