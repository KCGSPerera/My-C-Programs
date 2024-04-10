#include <stdio.h>
#include <assert.h>
#include <math.h>
double hypotenuse( double ang1, double ang2 );
int main( void )
{
	assert( fabs( hypotenuse( 3, 4 ) - 5 ) <= 0.01 );
	assert( fabs( hypotenuse( 5, 12 ) - 13 ) <= 0.01 );
	assert( fabs( hypotenuse( 8, 15 ) - 17 ) <= 0.01 );
	
	
	double input1, input2, output;
	
	printf( "Enter the angle 1 : " );
	scanf( "%lf", &input1 );
	
	printf( "Enter the angle 2 : " );
	scanf( "%lf", &input2 );
	
	output = hypotenuse( input1, input2 );
	
	printf( "Hypotenuse : %.2lf", output );
	
	return 0;
}
double hypotenuse( double ang1, double ang2 )
{
	return sqrt( ( ang1 * ang1 ) + ( ang2 * ang2 ) );
}



/* I have tried to write the above calculation which is within the "hypotenuse fuction" as

>>>	return sqrt( pow( ang1 ) + pow( ang2 ) );
	
	But after I have written it, there was an error message telling that the statement is too short 
	
	or that it is containing very few arguments */
