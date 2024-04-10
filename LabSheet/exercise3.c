#include <stdio.h>
int main( void )
{
	int marks[ 3 ][ 3 ];
	int i, j;
	int total = 0;
	float average[ 3 ];
	
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Marks for student %d\n", i + 1 );
		
		for( j = 0; j < 3; j++ )
		{
			printf( "Enter marks for Module %d : ", i + 1 );
			scanf( "%d", &marks[ i ][ j ] );
			
			total = total + marks[ i ][ j ];
		}
		average[ i ] = total / 3.0;
		
	}
	
	printf( "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" );
	printf( "\n\n" );
	
	printf( "Student No\tMarks 1\tMarks 2\tMarks 3\t   Average\n" );
	
	for( i = 0; i < 3; i++ )
	{
		{
			printf( "Student %d\t  %d\t %d\t %d\t %.2f\n", i + 1, marks[ i ][ j ], marks[ i ][ j + 1 ], marks[ i ][ j + 2 ], average[ i ] );		
		}
	}
	
	return 0;
}

