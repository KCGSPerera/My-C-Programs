#include <stdio.h>
int main( void )
{
	FILE *ftpr;
	
	ftpr = fopen( "marks1.dat", "w" );
	
	if( ftpr == NULL )
	{
		printf( "The File is not created" );
		return -1;
	}
	
	fprintf( ftpr, "%d", 10 );
	
	fclose( ftpr );
	return 0;
}
