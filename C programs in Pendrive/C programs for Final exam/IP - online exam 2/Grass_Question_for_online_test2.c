#include <stdio.h>
float circleArea( float radius );
float rectangleArea( float width, float length );
float lCircleArea( float width );
float calPrice( int type, float totalArea );
int main( void )
{
	float recLength, recWidth, cirRadius, recArea , cirArea;
	float lCirArea, totLandArea, totalPrice;
	int grassType;
	
	printf( "Enter Circle radius : " );
	scanf( "%f", &cirRadius );
	
	cirArea = circleArea( cirRadius );
	
	printf( "Enter Rectangle Width : " );
	scanf( "%f", &recWidth );
	
	printf( "Enter Rectangle Length : " );
	scanf( "%f", &recLength );
	
	recArea = rectangleArea( recWidth, recLength );
	lCirArea = lCircleArea( recWidth );
	
	totLandArea = lCirArea + recArea - cirArea;
	
	printf( "Enter The grass type : " );
	scanf( "%d", &grassType );
	
	totalPrice = calPrice( grassType, totLandArea );
	
	printf( "Total Cost : %.2f\n", totalPrice );
	
	return 0;
}
float circleArea( float radius )
{
	return ( ( 7 / 22.0 ) * radius * radius );
}
float rectangleArea( float width, float length )
{
	return length * width;
}
float lCircleArea( float width )
{
	return ( ( 22 / 7.0 ) * ( ( width * width ) / 4 ) );
}
float calPrice( int type, float totalArea )
{
	if( type == 1 )
	{
		return 50 * totalArea;
	}
	else if( type == 2 )
	{
		return 60 * totalArea;
	}
	else if( type == 70 )
	{
		return 70 * totalArea;
	}
	else
	{
		return printf( "Invalid grass type" );
	}
}


