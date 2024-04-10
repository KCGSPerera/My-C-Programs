#include <stdio.h>
int main( void )
{
	int mark;
	char grade;
	float average;
	
	printf( "Input the mark : " );
	scanf( "%d%*c", &mark );
	
	printf( "Input the grade : " );
	scanf( "%c", &grade );
	
	printf( "Input the average : " );
	scanf( "%f", &average );
	
	printf( "Mark is %d\n", mark );
	printf( "Grade is %c\n", grade );
	printf( "Average is %.2f\n", average );
	
	return 0;
}
