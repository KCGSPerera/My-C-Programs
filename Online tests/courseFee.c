#include <stdio.h>
int main( void )
{
	int marks, courseNo;
	float courseFee, discount = 0;
	
	printf( "Enter the course number ( 1 / 2 ) : " );
	scanf( "%d", &courseNo );
	
	if( courseNo == 1 )
	{
		printf( "Enter the Aptitude test marks ( max - 100 ) : " );
		scanf( "%d", &marks );
	
		if( marks >= 80 )
		{
			discount = 150000 * ( 7.5 / 100 );
			courseFee = 150000 - discount;
			
			printf( "Discount : %.2f\n", discount );
			printf( "Course fee : %.2f", courseFee );
		}
		else
		{
			courseFee = 150000.0;
			
			printf( "Discount : %.2f\n", discount );
			printf( "Course fee : %.2f", courseFee );
		}
	}
	else if( courseNo == 2 )
	{
		printf( "Enter the Aptitude test marks ( max - 100 ) : " );
		scanf( "%d", &marks );
	
		if( marks >= 80 )
		{
			discount = 175000 * ( 7.5 / 100 );
			courseFee = 175000 - discount;
			
			printf( "Discount : %.2f\n", discount );
			printf( "Course fee : %.2f", courseFee );
		}
		else
		{
			courseFee = 175000.0;
			
			printf( "Discount : %.2f\n", discount );
			printf( "Course fee : %.2f", courseFee );
		}
	}
	else
	{
		printf( "Invalid user input" );
	}
	
	return 0;
}
