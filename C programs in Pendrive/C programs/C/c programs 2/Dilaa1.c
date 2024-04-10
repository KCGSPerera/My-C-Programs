#include <stdio.h>
int main( void )
{
	int mark1, mark2;
	float average = 0;
	
	printf( "Enter the marks for the subject 1 : " );
	scanf( "%d", &mark1 );
	
	printf( "Enter the marks for the subject 2 : " );
	scanf( "%d", &mark2 );
	
	average = ( mark1 + mark2 ) / 2.0;
	
	printf( "Average is %.2f\n\n", average );
	
	if( average >= 45 )
		printf( "Pass" );
	else
		printf( "Fail" );
		
	return 0;	
}
