#include <stdio.h>
int findBonusTimes( char empCategory );
float findBonus( float salary, int noOfTimes );
int main( void )
{
	char employeeCategory;
	float basicSalary, bonus;
	int times;
	
	printf( "Enter the Employee category( A / B / C / D / E ) : " );
	scanf( "%c", & employeeCategory );
	
	printf( "Enter the basic salary : " );
	scanf( "%f", &basicSalary );
	
	times = findBonusTimes( employeeCategory );
	bonus = findBonus( basicSalary, times );
	
	printf( "Bonus : %.2f", bonus );
	
	return 0;
}
int findBonusTimes( char empCategory )
{
	if( empCategory == 65 )
		return 1;
	else if( empCategory == 66 )
		return 2;
	else if( empCategory == 67 || empCategory == 68 || empCategory == 69 )
		return 3;
	else 
		return printf( "Invalid Employee Category" );
		
}
float findBonus( float salary, int noOfTimes )
{
	float bonus;
	
	bonus = noOfTimes * salary;
	return bonus; 
}
