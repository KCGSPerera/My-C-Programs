include <stdio.h>
int qualityPoints( int average );
int main( void )
{
	int avg;
	int grade;
	
	printf( "Enter the marks : " )
	scanf( "%d", &avg );
	
	grade = qualityPoints( avg );
	printf( "The grade is %d", grade );
	
	return 0;
}
int qualityPoints( int average )
{
	int out = 0;
	
	if( 90 <= average <=100 )
	{
		out = 4;
		printf( "The result is %d", out );
	}
	else if( 80 <= average <= 89 )
	{
		out = 3;
		printf( "The result is %d", out );
	}
	else if( 70 <= average <= 79)
	{
		out = 2;
		printf( "The result is %d", out );
	}
	else if( 60 <= mark <= 69 )
	{
		average = 1;
		printf( "The result is %d", out );
	}
	else
	{
		average = 0;
		printf( "The result is %d", out );
	}
	return out;
}

