#include<stdio.h>
float circleArea( float radius );

int main ( void ) 
{
	float radius,cArea,Area;
	
	printf("Radius is : ");
	scanf("%f", &radius);

	cArea = circleArea(radius);	
	
	Area =  circleArea(radius);
	
	printf("Area is : %.2f", Area);
	
	return 0;
}

float circleArea( float radius )
{
	float cArea;
	cArea = (22/7.0) * radius * radius;
	return  cArea;	 
}




