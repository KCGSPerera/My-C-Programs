#include <stdio.h>
float calculateIncreament(  int grade , float salary );
float calcTotSalary( float salary, float increament );
int main( void )
{
	int empGrade;
	float bSalary, totalSalary, sIncreament;
	
	printf( "Enter Employee number : " );
	scanf( "%d", &empGrade );
	
	printf( "Enter basic salary : " );
	scanf( "%f", &bSalary );
	
	sIncreament = calculateIncreament( empGrade, bSalary );
	totalSalary = calcTotSalary( bSalary, sIncreament );
	
	printf( "Salary Increament : %.2f\n", sIncreament );
	printf( "Total Salary : %.2f\n", totalSalary );
	
	return 0;
}
float calculateIncreament( int grade, float salary )
{
	float increase;
	
	if( grade == 1 )
	{
		increase = salary * ( 10 / 100.0 );
		return increase;
	}
	else if( grade == 2 )
	{
		increase = salary * ( 15 / 100.0 );
		return increase;
	}
	else if( grade == 3 )
	{
		increase = salary * ( 20 / 100.0 );
		return increase;
	}
	else
	{
		printf( "Invalid Grade" );
		return;
	}
}
float calcTotSalary( float salary, float increament )
{
	return salary + increament;
}
