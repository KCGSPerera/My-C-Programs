// This progrsm is write to read the values stored in the exercise 1 ( "marks4.dat" ).

#include <stdio.h>
int main( void )
{
	int mark, max, i = 0;
	char ID[ 10 ];
	char name[ 20 ];
	
	FILE *fptr;
	
	fptr = fopen( "marks4.dat", "r" );
	if( fptr == NULL )
	{
		printf( "The file is not created" );
		return -1;
	}
	
	fscanf( fptr, "%s %s %d", ID, name, &mark );
	max = mark;
	
	while( !feof( fptr ) )
	{
		
		printf( "%10s  %30s %5d\n", ID, name, mark );
		fscanf( fptr, "%s %s %d", ID, name, &mark );		
		
		if( mark >= max )
		{
			max = mark;
		}
		i++;
	}
	
	printf( "   \n\nNumber of records : %d\n", i );
	printf( "Max mark : %d", max );
	fclose( fptr );
	
	return 0;
}
