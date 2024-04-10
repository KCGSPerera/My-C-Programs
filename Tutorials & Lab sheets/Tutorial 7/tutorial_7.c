#include <stdio.h>
int qualityPoints( int average );
int main( void )
{
	int avg;
	int grade;
	
	printf( "Enter the average : " );
	scanf( "%d", &avg );
	
	grade = qualityPoints( avg );
	printf( "The grade is %d", grade );
	
	return 0;
}
int qualityPoints( int average )
{
	int out = 0;
	
	if( average >= 90 )
	{
		out = 4;
	}
	else if( average >= 80 )
	{
		out = 3;
	}
	else if( average >= 70 )
	{
		out = 2;
	}
	else if( average >= 60 )
	{
		out = 1;
	}
	else
	{
		out =0;
	}
	return out;
}
