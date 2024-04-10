// Lecture slide(5) - Writing  data into a sequential access file. 

#include <stdio.h>
int main( void )
{
	int number = 10;
	
	FILE *ftpr;
	
	ftpr = fopen( "marks3.txt", "w" );
	
	if( ftpr == NULL )
	{
		printf( "The File is not created" );
		return -1;
	}
	
	fprintf( ftpr, "%d", number );
	
	fclose( ftpr );
	return 0;
}
