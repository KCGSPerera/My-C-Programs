#include <stdio.h>
#include <assert.h>
int qualityPoints( int average );
int main( void )
{
	assert( qualityPoints( 100 ) == 4 );
	assert( qualityPoints( 90 ) == 4 );
	assert( qualityPoints( 80 ) == 3 );
	assert( qualityPoints( 70 ) == 2 );
	assert( qualityPoints( 60 ) == 1 );
	assert( qualityPoints( 50 ) == 0 );
	
	assert( qualityPoints( 95 ) == 4 );
	assert( qualityPoints( 85 ) == 3 );
	assert( qualityPoints( 75 ) == 2 );
	assert( qualityPoints( 65 ) == 1 );
	assert( qualityPoints( 55 ) == 0 );
	assert( qualityPoints( 25 ) == 0 );
	
	int mark, grade = 0;
	
	printf( "Enter Average : " );
	scanf( "%d", &mark );
	
	grade = qualityPoints( mark );
	
	printf( "\nGrade : %d", grade );
	
	return 0;
}
int qualityPoints( int average )
{
	if(  average > 100 )
		return printf( "Invalid average" ); // This format also do not giving a proper output. What is the reason??
	else if( average >= 90 )														
		return 4;
	else if( average >= 80)
		return 3;						/* If the function return type is int, float or double, how can we display an " Invalid input" message,
										 in that same function */
	else if( average >= 70 )
		return 2;
	else if( average >= 60 )
		return 1;
	else if( average >= 0 )
		return 0;
	else
		return printf( "Invalid average" );
} 




/* In this program I have tried to enter the first if statement like this;

>>>>>>>	if( 100 >= average >= 90 )
	
>>	After using this statement like this, I cannot take the grade as 4, if the average is 100.
>>	There is  a compiler error, when I have trired with above format.
	
>>	What can be the reason??
>>	what is the solution for that?? */
