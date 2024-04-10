// This program displays a structure of employees
#include <stdio.h>
struct employee // use of keyword struct 
{
	int empNo; // declaration of variables
	char gender; // declaration of variables
	float salary; // declaration of variables
}emp1, emp2;

int main( void ) // program excecution begins with function main
{
	emp1.empNo = 1250; // assigning employee number 
	emp1.gender = 'M'; // assigning the employee gender
	emp1.salary = 25000.00; // assigning employee salary
	
	printf( "Employee 1, Employee number is : %d\n", emp1.empNo ); // display the employee number
	printf( "Employee 1, gender is : %c\n", emp1.gender ); // display the employee gender
	printf( "Employee 1, Salary is : %.2f\n\n", emp1.salary ); // display the employee salary
	
	emp2.empNo = 1251; // assigning employee number 
	emp2.gender = 'F'; // assigning the employee gender
	emp2.salary = 27000.00; // assigning employee salary
	
	printf( "Employee 2, Employee number is : %d\n", emp2.empNo ); // display the employee number
	printf( "Employee 2, gender is : %c\n", emp2.gender ); // display the employee gender
	printf( "Employee 2, Salary is : %.2f\n", emp2.salary ); // display the employee salary
	
	return 0;
} // end of function main
