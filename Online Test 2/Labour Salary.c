#include <stdio.h>
float calculateWeeklySalary( int grade, float hoursWorked );
void printDetails( int grade, float hoursWorked, float salary );
int main( void )
{
	int pGrade;
	float wSalary, hours;
	
	printf( "Enter the grade : " );
	scanf( "%d", &pGrade );
	
	printf( "Enter worker hours for the week : " );
	scanf( "%f", &hours );
	
	wSalary = calculateWeeklySalary( pGrade, hours );
	
	printDetails( pGrade, hours, wSalary );
	
	return 0;
}
float calculateWeeklySalary( int grade, float hoursWorked )
{
	if( grade == 1 )
		return 	hoursWorked * 100;
	else if( grade == 2 )
		return hoursWorked * 200;
	else if( grade == 3 )
		return hoursWorked * 300;
	else 
		return printf( "Invalid grade" );
}
void printDetails( int grade, float hoursWorked, float salary )
{
	printf( "\n\nGrade : %d\nHours worked : %.1f\nWeekly Salary : %.2f\n", grade, hoursWorked, salary );
	return;
}

