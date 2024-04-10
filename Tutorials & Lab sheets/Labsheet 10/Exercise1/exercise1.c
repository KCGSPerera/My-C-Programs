#include <stdio.h>
int main( void )
{
	int num, i;
	
	FILE *fptr; // create file pointer
	
	fptr = fopen( "number.txt", "w" ); // create and open file for write
	if( fptr == NULL )
	{
		printf( "the file cannot be opened" );
		return -1;
	}
	for( i = 0; i < 5; i++  )
	{
		printf( "Enter a number : " );
		scanf( "%d", &num)  ;
		
		fprintf( fptr, "%d ", num ); // writing the numbers to the file
	}
	fclose( fptr );
	
	fptr = fopen( "number.txt", "r" );
	if( fptr == NULL )
	{
		printf( "The file cannot be opened" );
		return -1;
	}
	
	fscanf( fptr, "%d", &num ); // You can use the same variable tho read & store the readinf=gs from the filereadings from the file
	
	
	while( !feof( fptr ) ) // using sentinal controlled loop to read the file sequencially
	{
		printf( "%d\t", num );
		fscanf( fptr, "%d", &num ); // raeding numbers from the file
	}
	fclose( fptr );   // close the file
	
	return 0;
}
