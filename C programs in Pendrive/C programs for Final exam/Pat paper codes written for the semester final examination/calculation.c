// This program calculate the value of variable C using the given expression.

#include <stdio.h>
#include <math.h>
int main( void )
{
	float a  = 3, b = 4, c, angle;
	
	printf( "Enter the angle : " );
	scanf( "%f", &angle );
	
	c = sqrt( ( ( a * a )  + ( b * b ) ) - ( 2 * a * b * cos( angle ) ) );
	
	printf( " value of C is : %f\n", c );
	
	return 0;
	
}
