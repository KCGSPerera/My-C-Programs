#include <stdio.h>
int findBonusTimes( char empCategory );
float findBonus( float salary, int noOfTimes );
int main( void )
{
	char category;
	int times;
	float basicSalary, bonus;
	
	printf( "Enter the Basic Salary : ");
	scanf( "%f%*c", &basicSalary );
	
	printf( "Enter the Employee category : ");
	scanf( "%c%*c", &category );
	
	times = findBonusTimes( category );
	bonus = findBonus( basicSalary, times );
	
	printf( "Bonus : %.2f", bonus );	
	
	return 0;
}
int findBonusTimes( char empCategory )
{
	switch( empCategory )
	{
		case 65: return 1; break;
		
		case 66 : return 2; break;
		
		case 67 : return 3;
		
		case 68 : return 3;
		
		case 69 : return 3; break;
		
		default : return printf( "Invalid Emplopyee Category" );
	}
}
float findBonus( float salary, int noOfTimes )
{
	float bonus;
	
	bonus = salary * noOfTimes;
	
	return bonus;
}
