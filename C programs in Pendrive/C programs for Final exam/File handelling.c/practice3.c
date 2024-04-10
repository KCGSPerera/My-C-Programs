#include <stdio.h>
int main( void )
{
	char stdName[ 20 ];
	char stdID[ 6 ];
	int marks, i;
	int sum = 0;
	float average = 0;
	
	FILE *cfptr;
	cfptr = fopen( "studentMarks.txt", "w" );
	if( cfptr == NULL ) 
	{
		printf( "File cannot be opened" );
		return -1;
	}
	
	for( i = 1; i <= 3; i++ )
	{
		printf( "Enter name : " );
		scanf( "%s", stdName );
		printf( "Enter student ID : " );
		scanf( "%s", stdID );
		printf( "Enter marks : " );
		scanf( "%d", &marks );
		
		fprintf( cfptr, "%s %s %d\n", stdName, stdID, marks );
	}
	printf( "\n" );
	
	fclose( cfptr );
	
	cfptr = fopen( "studentMarks.dat", "r" );
	if( cfptr == NULL )
	{
		printf( "The file cannot be opened" );
		return -1;
	}
	
	fscanf( cfptr, "%s %s %d", stdName, stdID, &marks );
	
	while( !feof( cfptr ) )
	{
		printf( "%s\t %s\t %d\n", stdName, stdID, marks );
		fscanf( cfptr, "%s %s %d", stdName, stdID, marks );
		
	}
	fclose( cfptr );
	
	
	return 0;
}
