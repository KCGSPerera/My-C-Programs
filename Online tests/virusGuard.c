#include <stdio.h>
int main( void )
{
	int productNo, noOfUsers;
	float total = 0;
	
	printf( "Enter the product number ( 1 / 2 ) : " );
	scanf( "%d", &productNo );
	
	if( productNo == 1 )
	{
		printf( "Enter the number of users : " );
		scanf( "%d", &noOfUsers );
		
		if( noOfUsers <= 100 )
		{
			total = 15.50 * noOfUsers;
			printf( "Amount to be paid : %.2f", total );
		}
		else
		{
			total = ( 100 * 15.50 );
			total = total + ( 25.50 * ( noOfUsers - 100 ) );
			
			printf( "Amount to be paid : %.2f", total );
		}
	
	}
	else if( productNo == 2 )
	{
		printf( "Enter the number of users : " );
		scanf( "%d", &noOfUsers );
		
		if( noOfUsers <= 100 )
		{
			total = 25.00 * noOfUsers;
			printf( "Amount to be paid : %.2f", total );
		}
		else
		{
			total = ( 100 * 25.00 );
			total = total + ( 35.00 * ( noOfUsers - 100 ) );
			
			printf( "Amount to be paid : %.2f", total );
		}
	}
	else
	{
		printf( "Invalid user input" );
	}
	return 0;
}
