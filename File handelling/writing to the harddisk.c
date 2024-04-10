#include <stdio.h>
int main( void )
{
	int i;
	float marks;
	char name[ 20 ];
	char ID[ 4 ];
	
	FILE *fptr;
	
	fptr = fopen( "results.txt", "w" );
	
	if( fptr == NULL )
	{
		printf( "File cannot be opened" );
		return -1;
	}
	
	for( i = 1; i <= 3; i++ )
	{
		printf( "Enter name : " );
		scanf( "%s", name );
		printf( "Enter ID : " );
		scanf( "%s", ID);
		printf( "Enter marks : " );
		scanf( "%f", &marks );
		
		fprintf( fptr, "%s %s %.2f\n", name, ID, marks );
	}
	
	fclose( fptr );
	return 0;
}
