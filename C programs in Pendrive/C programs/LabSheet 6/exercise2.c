#include <stdio.h>
float calBonus( float basicSalary );
int main( void )
{
	float salary;
	float netSalary, bonusAmount;
	
	printf( "Enter the salary : " );
	scanf( "%f", &salary );
	
	 bonusAmount = calBonus( salary );
	 netSalary = salary + bonusAmount;
	 
	 printf( "Net salary : %.f", netSalary );
	
	return 0;
	
}
float calBonus( float basicSalary )
{
	int bonus = 0;
	
	if( basicSalary > 20000.00 )
	{
		bonus = basicSalary * 2;
		
		return bonus;
	}
	else if( basicSalary <= 20000.00 )
	{
		bonus = basicSalary * 0.5;
		
		return bonus;
	}
	else
	{
		return 0;
	}
}

