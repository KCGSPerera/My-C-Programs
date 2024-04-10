#include<stdio.h>
void display( int side );
int main( void )
{
	display();
	return 0;
}
void display( int side )
{
	int i, j;
	int side = 4; 
	
	for( i = 1; i <= side; i++ )
	{
		for( j = 1; j <= side; j++ )
		{
			printf( "*" );
		}
		printf( "\n" );
	}
	return;
}
