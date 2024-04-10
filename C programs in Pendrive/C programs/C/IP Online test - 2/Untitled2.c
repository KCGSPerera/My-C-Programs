#include <stdio.h>
void display( int side );


int main(void)
{
	int side = 4;
	int ret;
	
	ret = display(side);

	
	return 0;
}


void display( int side )
{
	int i, j;
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
