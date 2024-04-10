#include<stdio.h>
float calculateWeeklySalary( int grade, float hoursWorked );
void printDetails( int grade , float hoursWorked , float salary);
int main(void)
{
	int grades;
	float hrsWorked,salarys;
	
	printf("Enter the Grade : ");
	scanf("%d", &grades);
	
	printf("Enter the hours worked : ");	
	scanf("%f", &hrsWorked);
	
	printf("Enter the salarys : ");
	
	return 0;
}
float calculateWeeklySalary( char grade, float hoursWorked )
{
	char grade;
	if (grade == 1)
	{
		return 100.0;
	}
	else if( grade == 2 )
	{
		return 200.0;
	}
	else if( grade == 3)
	{
		return 300.0;
    }
    else
    {
    	printf("Invalid grade input\n");
	}
}
void printDetails( int grade , float hoursWorked , float salary)
{
	weeklyHours = hoursWorked * hourlyRate;
	return worklyHours;
}
