#include <stdio.h>
int main( void )
{
	int no1, no2;
	
	printf( "Enter number one : " );
	scanf( "%d", &no1 );
	
	printf( "Enter number two : " );
	scanf( "%d", &no2 );
	
	if ( no1 == no2 )
		printf( "Two numbers are equal" );
		
	return 0;	
}
