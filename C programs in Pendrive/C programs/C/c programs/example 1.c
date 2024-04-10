#include <stdio.h>
int main( void ) // program execution begins with function main
{
	int numbers[ 5 ] = { 0 }; // declaring and initializing array
	int i; // variable declaration
	
	for( i = 0; i < 5; i++ ) // storing values using for loop
	{
		printf( "Enter the number %d : ", i + 1 );
		scanf( "%d", &numbers[ i ] );			
	}
	printf( "Array elements : " ); // printing the array elements
	
	
	for( i = 0; i < 5; i++ ) // printing the arrau elements using a for loop 
	{
		printf( " %d\t", numbers[ i ] ); 
	}
	return 0;
}
