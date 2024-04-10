#include <stdio.h>

int main( void )
{
	char type;
	int count = 0;
	float totalH = 0;
	float totalM = 0;
	float totalF = 0;
	
	
	
	while( count < 8 )
	{
		printf( "Enter course type : " );
		scanf( "%c%*c", &type );
		
		if( type == 'H' || type == 'h' )
		{
			totalH += 1500;
			count++;
		}
	
		else if( type == 'M' || type == 'm' )
		{
			totalM += 2000;
			count++;
		}
		else if( type == 'F' || type == 'f' )
		{
			totalF += 2500;
			count++;
		}
		else
		{
			printf( "Input course type\n" );
		}
		
	//	printf( "Enter course type : " );
	//	scanf( "%c%*c", &type );
			
	}
	
	printf( "\n\n" );
	printf( "The total count of students : %d\n", count );
	printf( "The total income from Hospitality Management : %.2f\n", totalH );
	printf( "The total income from Hospitality Management : %.2f\n", totalM );
	printf( "The total income from Hospitality Management : %.2f\n", totalF );
	
	return 0;
	
	
}
