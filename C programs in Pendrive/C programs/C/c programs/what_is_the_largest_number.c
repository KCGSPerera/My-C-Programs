#include <stdio.h>
int main( void )
{
	int no1, no2;
	
	printf( "Input number 1 : " );
	scanf( "%d", &no1 );
	
	printf( "Input number 2 : " );
	scanf( "%d", &no2 );
	
	if ( no1 >= no2 )
	{
		printf( "%d is larger than %d\n", no1, no2 );
		printf( "%d is the largest number\n", no1 ); 
	}
	else
	{
		printf( "%d is larger than %d\n", no2, no1 );
		printf( "%d is the largest number\n", no2 );
	}
	return 0;
}	


