#include <stdio.h>
int main( void )
{
	
	int num, number, counter = 0;
	FILE *fptr;
	
	fptr = fopen( "number.dat", "r+" );
	if( fptr == NULL )
	{
		printf( "The file cannot be opened" );  // w+ == File 
		return -1;
	}
	
	printf( "Enter a number : " );
	scanf( "%d", &num );
	
	fscanf( fptr, "%d", &number );
	
	while( !feof( fptr ) )
	{
		if( num == number )
		{
			printf( "the number already exists" );
			return -1;
		}	
		fscanf( fptr, "%d", &number );
	}
	
	fprintf( fptr, "%d", num );
	fclose( fptr );
	
	
	fptr = fopen( "number.dat", "r" );
	
	if( fptr == NULL )
	{
		printf( "The file not found" );
		return -1;
	}
	
	fscanf( fptr, "%d", &number );
	
	while( !feof( fptr ) );
	{
		printf( "%d\t", number );
		fscanf( fptr, "%d", &number );
	}
	fclose( fptr );
	return 0;
}
