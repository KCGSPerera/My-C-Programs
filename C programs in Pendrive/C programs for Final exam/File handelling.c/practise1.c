#include <stdio.h>
int main( void )
{
	int number = 10;
	
	FILE *ptr;
	
	ptr = fopen( "mark.txt", "" );
	
	if( ptr == NULL )
	{
		printf( "Cannot open file" );
		return -1;
	}
	
	fprintf( ptr, "%d\n", number );
	fclose( ptr );
	return 0;
}
