// This program reads the values stored in "marks1.dat" file.

#include <stdio.h>
int main( void )
{
	int number;
	
	FILE * ftpr;
	
	ftpr = fopen( "marks1.dat", "r" );
	
	if( ftpr == NULL )
	{
		printf( "The file is not craeated" );
		return -1;
	}
	
	fscanf( ftpr, "%d", &number );
	
	printf( "Number : %d\n", number );
	
	return 0;
}
