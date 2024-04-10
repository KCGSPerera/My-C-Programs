#include<stdio.h>
float calArea ( float length , float width );
main ( void )
{
	float len,wid,Area=0;
	
	printf("Enter the length : ");
	scanf("%f", &len);
	
	printf("Enter the width : ");
	scanf("%f", &wid);
	
	Area = calArea ( len,wid );
	printf("Area is :%.2f", Area);
	
	return 0;
}
float calArea ( float length , float width )
{
	float area;
	area = length * width;
	return area;
	
}
