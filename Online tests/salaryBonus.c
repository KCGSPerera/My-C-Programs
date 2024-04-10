#include <stdio.h>
int main( void )
{
	int months;
	float salary, bonus = 0;
	
	printf( "Enter the number of months : " ); 
	scanf( "%d", &months );
	
	if( months  < 6 )
	{
		printf( "Enter the basic salary : " );
		scanf( "%f", &salary );
		
		printf( "Bonus : %.2f", bonus );
	}
	else 
	{
		printf( "Enter the basic salary : " );
		scanf( "%f", &salary );
		
		bonus = months * salary;
		
		if( salary <= 45000.00 && months >= 12 )
		{
			bonus = bonus + salary;
			 printf( "Bonus : %.2f", bonus );
		}
		else
		{
			printf( "Bonus : %.2f", bonus );
		}
	}
	return 0;
	
}
