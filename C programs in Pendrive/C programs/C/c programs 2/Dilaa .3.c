#include <stdio.h>
int main( void )
{
	int mark;
	
	printf( "Enter marks obtained for the IP module : " );
	scanf ( "%d", &mark );
	
	
	if( 100 >= mark >= 80 )
	{
		printf( "The grade is A" );
	}
	
	if( 79 >= mark >= 70 )
	{
		printf( "The grade is B" );
	}
	
	if( 69 >= mark >= 45 )
	{
		printf( "The grade is C" );
	}
	
	else
	{
		printf( "The grade is F" );
	}
	
	return 0;
}
