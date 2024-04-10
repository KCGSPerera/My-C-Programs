// IT21810664
// Perera K C G S
// Malambe
// Y1_S1_WD_02.01.S1

// This program read angles in degrees and calculate the radian value

#include <stdio.h>
float findRadianValue( float angleInDegrees );
void printRadianValues( float angleInDegrees, float angleInRadian );


int main( void )
{
	float degreeValue, radianValue;
	int i;
	
	for( i = 1; i <= 6; i++ );
	{
		printf( "Enter angle in Degrees : " );
		scanf( "%f", &degreeValue );
		
		radianValue = findRadianValue( degreeValue );
		printRadianValues( degreeValue, radianValue );
	}
	return 0;
}
float findRadianValue( float angleInDegrees )
{
	float radian;
	
	radian = ( 22 / 7.0 ) / (  180 * angleInDegrees );
	return radian;
}

void printRadianValues( float angleInDegrees, float angleInRadian )
{
		printf( " Angle( Degrees ) \t Angle( Radian )\n" );
		printf( "%.2f \t\t\t %.2f\n", angleInDegrees, angleInRadian );	
		
}
