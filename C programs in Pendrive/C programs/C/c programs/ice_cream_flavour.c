#include <stdio.h>
int main( void )
{
	char flavour;
	
	printf( "Enter the first letter of your favourite ice-cream flavour : " );
	scanf( "%c", &flavour );
	
	switch(flavour)
	{
	case 'c':
	case 'C': printf( "Favourite ice-cream flavour is Chocolate" );
		break;
	case 'v':
	case 'V': printf( "Favourite ice-cream flavour is Vanilla" );
		break;
	case 's':
	case 'S': printf( "Favourite ice-cream flavour is Strawberry" );
		break;
	default : printf( "Incorrect flavour" );
	}
	return 0;
}   
