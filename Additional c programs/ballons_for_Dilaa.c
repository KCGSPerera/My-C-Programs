#include <stdio.h>
int main( void )
{
	char type;
	float total;
	int packageNo, guest;
	
	printf( "Enter the Package number : " );
	scanf( "%d%*c", &packageNo );
	
	if( packageNo == 1 )
	{
		total = 15000;
		
		printf( "Enter the Food Type : " );
		scanf( "%c%*c", &type );
		
		if( type == 'S' )
		{
			printf( "Enter the number of guests : " );
			scanf( "%d", &guest);
			
			total = total + ( guest * 1500 );
			printf( "Total Amount : %.2f", total );
		}
		else if( type == 'D') 
		{
			printf( "Enter the number of guests : " );
			scanf( "%d", &guest);
			
			total = total + ( guest * 3000 );
			printf( "Total Amount : %.2f", total );
		}
		else if( type == 'L' )
		{
			printf( "Enter the number of guests : " );
			scanf( "%d", &guest);
			
			total = total + ( guest * 2500 );
			printf( "Total Amount : %.2f", total );
		}
		else
		{
			printf( "Invalid user input" );
		}
	}
	else if( packageNo == 2 )
	{
		total = 30000;
		
		printf( "Enter the Food Type : " );
		scanf( "%c%*c", &type );
		
		if( type == 'S' )
		{
			printf( "Enter the number of guests : " );
			scanf( "%d", &guest);
			
			total = total + ( guest * 1500 );
			printf( "Total Amount : %.2f", total );
		}
		else if( type == 'D') 
		{
			printf( "Enter the number of guests : " );
			scanf( "%d", &guest);
			
			total = total + ( guest * 3000 );
			printf( "Total Amount : %.2f", total );
		}
		else if( type == 'L' )
		{
			printf( "Enter the number of guests : " );
			scanf( "%d", &guest);
			
			total = total + ( guest * 2500 );
			printf( "Total Amount : %.2f", total );
		}
		else
		{
			printf( "Invalid user input" );
		}
	}
	else
	{
		printf( "Invalid user input" );
	}
	return 0;
}
