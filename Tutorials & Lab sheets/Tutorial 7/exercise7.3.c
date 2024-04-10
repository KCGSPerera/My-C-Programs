#include <stdio.h>
#include <assert.h>
#include <math.h>
double hypotenuse( double ang1, double ang2 );
void testHypotenuse();
int main( void )
{
	testHypotenuse();
	
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
void testHypotenuse()
{
	assert( fabs( hypotenuse( 3, 4 ) - 5 ) <= 0.01 );
	assert( fabs( hypotenuse( 5, 12 ) - 13 ) <= 0.01 );
	assert( fabs( hypotenuse( 8, 15 ) - 17 ) <= 0.01 );
}
