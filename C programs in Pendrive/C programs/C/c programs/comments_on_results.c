#include <stdio.h>
int main( void )
{
	char grade;
	
	printf( "Enter the grade : ");
	scanf( "%c", &grade);
	
	switch(grade)
	{
	case 'A': printf( "very good " );
		break;
	case 'B': printf( "good" );
		break;
	case 'C': printf( "satisfy" );
		break;
	default : printf( "need to improve" );
		break;
	}
	
	return 0;
}
