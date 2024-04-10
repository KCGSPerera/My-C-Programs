// This program is written to read the values from the "marks.dot" file ( program2.c ) .

#include <stdio.h>
int main( void )
{
	int mark;
	FILE *ftpr;
	
	ftpr = fopen( "marks.dat", "a" ); // The previous data also will be displayed, as we use "a". If we use "w", pevious data will be discarded. 
	
	if( ftpr == NULL )
	{
		printf( "The File is not created" );
		return -1;
	}
	for( i = 1; i <= 5; i++ )
	{
		printf( "Enter Mark %d : " , i );
		scanf( "%d", &mark );
		
		fprintf( ftpr, "%d\n", mark );	
	}
	fclose( ftpr );
	return 0;
}
