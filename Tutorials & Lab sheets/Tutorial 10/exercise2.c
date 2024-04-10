#include <stdio.h>
int main( void )
{
	int count1 = 0, count2 = 0, count3 = 0;
	int i;
	char name[ 20 ];
	char type;
	
	FILE *fptr;
	
	fptr = fopen( "patient.dat", "w" );
	if( fptr == NULL )
	{
		printf( "File not opened" );
		return -1;
	}
	
	for( i = 0; i < 5; i++ )
	{
		printf( "Enter patient name : " );
		scanf( "%s%*c", name );
		
		printf( "Enter treatment type : " );
		scanf( "%c", &type );
		
		fprintf( fptr, "%s %c\n", name, type );
	}
	fclose( fptr );
	
	fptr = fopen( "patient.dat", "r" );
	if( fptr == NULL )
	{
		printf( "File cannot open" );
		return -1;
	}
	printf( "\n\n" );
	printf( "Name  Treatment type\n");
	fscanf( fptr, "%s %c", name, &type );
	
	
	while( !feof( fptr ) )
	{
		
		printf( "%s  %c\n", name, type );
		if( type == 'c' )
		{
			count1++;
		}
		else if( type == 's' )
		{
			count2++;
		}
		else if( type == 't' )
		{
			count3++;
		}
		else
		{
			printf( "Invalid treatment type" );
		}
		
		fscanf( fptr, "%s %c%*c", name, &type );
		
	}
	printf( "\n\n" );
	printf( "Type 'C' patients : %d\n", count1 );
	printf( "Type 'S' patients : %d\n", count2 );
	printf( "Type 'T' patients : %d\n", count3 );
	
	fclose( fptr );
	return 0;
}

