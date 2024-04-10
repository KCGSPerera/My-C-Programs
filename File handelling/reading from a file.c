#include <stdio.h>
int main( void )
{
	float marks;
	char name[ 10 ];
	char ID[ 4 ];
	
	FILE *fptr;
	
	fptr = fopen( "results.txt", "r" );
	
	if( fptr == NULL )
	{
		printf( "file cannot be opened" );
		return -1;
	}
	
	fscanf( fptr, "%s %s %f", name, ID, &marks );
	
	while( !feof( fptr ) )
	{
		printf( "%s \t %s \t %.2f\n", name, ID, marks );
		
		fscanf( fptr, "%s %s %f", name, ID, &marks );
	}
	fclose( fptr );
	return 0;
}
