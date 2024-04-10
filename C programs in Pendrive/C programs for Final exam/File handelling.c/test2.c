#include <stdio.h>
int main( void )
{
	int number, i;
	char Name[ 10 ];
	char ID[ 4 ];
	
	FILE *fptr;
	
	fptr = fopen( "marks.txt", "w" );
	
	if( fptr == NULL )
	{
		printf( "File cannot be open" );
		return -1;
	}
	
	for( i = 1; i <= 3; i++ )
	{
		printf( "Enter name : " );
		scanf( "%s", Name );
		
		printf( "Enter ID : " );
		scanf( "%s", ID );
		
		printf( "Enter Marks : " );
		scanf( "%d", &number );
		
		fprintf( fptr, "%s %s %d\n", Name, ID, number );
	}
	
	fclose( fptr );
	return 0;
}
