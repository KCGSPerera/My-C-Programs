

#include <stdio.h>
int main( void )
{
	int mark;
	
	FILE * fptr;
	
	fptr = fopen( "marks.dat", "r" );
	
	if( fptr == NULL )
	{
		printf( "The file is not craeated" );
		return -1;
	}
	
	fscanf( fptr, "%d", &mark ); // We should write this "fscanf" statement before entering the loop.
	
	while( !feof( fptr ) )
	{
		printf( "%d\n", mark );
		fscanf( fptr, "%d", &mark ); // Then you can continue for the while loop with "fscanf".
	}
	
	fclose( fptr );
	
	return 0;
}
