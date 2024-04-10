#include <stdio.h>
int main( void )
{
	int i, mark;
	char ID[ 10 ];
	char name[ 30 ];
	
	FILE * ftpr;
	
	ftpr = fopen( "marks4.dat", "a" );
	
	if( ftpr == NULL )
	{
		printf( "The file is not created" );
		return -1;
	}
	
	for( i = 1; i <= 3; i++ )
	{
		printf( "\n" );
		
		printf( "Enter ID : " );
		scanf( "%s", ID ); // Do not use address operater as id is a string value
		
		printf( "Enter name : " );
		scanf( "%s", name ); // Do not use address operater as id is a string value
		
		printf( "Enter marks : " );
		scanf( "%d", &mark );
		
		fprintf( ftpr, "%2s  %10s  %4d\n", ID, name, mark );
	}
	
	fclose( ftpr );
	
	return 0;
}
