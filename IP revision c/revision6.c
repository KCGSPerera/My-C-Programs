/* This program allows the user 
to enter a word from he keyboard and 
count the number of capital letters 
in the word and display the count. */

#include <stdio.h>
#include <string.h>
int main( void )
{
	char array[ 30 ];
	int size, counter = 0, i;

	printf( "Enter a word : " );
	scanf( "%s", array );
	
	size = strlen( array );
	
	for( i = 0; i < size; i++ )
	{
		if( array[ i ] <= 90 && array[ i ] >= 65 )
		{
			counter++;
		}
	}
	printf( "Number of capital letters : %d\n", counter );
	
	return 0;
}
