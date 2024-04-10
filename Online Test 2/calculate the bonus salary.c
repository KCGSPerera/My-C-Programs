#include <stdio.h>
float calIncreament( float salary, int noOfYearsWorked );
float calTotalSalary( float salary, float increament );
int main( void )
{
	int years;
	float bSalary = 0, tSalary, inPrice;
	
	printf( "Enter the salary : ");
	scanf( "%f", &bSalary );
	
	printf( "Number of years worked : " );
	scanf( "%d", &years );
	
	inPrice = calIncreament( bSalary, years );
	tSalary = calTotalSalary( bSalary, inPrice );
	
	printf( "\nTotal Salary : %.2f", tSalary );
	
	return 0;
}
float calIncreament( float salary, int noOfYearsWorked )
{
	if( noOfYearsWorked > 2 )
		return salary * 0.1;
	else
		return printf( "You are not eligible for the increament" ); /* As I have entered the return typr of the function as float, the output for
																		this function is gives a different value for the inputs which are below 3 years.
																		How to solve that question and display the proper answer for the input yeras == 1 */
}
float calTotalSalary( float salary, float increament )
{
	float totalSalary;
	
	totalSalary = ( salary + increament );
	
	return totalSalary;
}


