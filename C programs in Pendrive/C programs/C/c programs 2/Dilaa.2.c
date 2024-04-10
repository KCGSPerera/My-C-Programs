#include <stdio.h>
int main( void )
{
	int age;
	char gender;
	
	printf( "Enter the age : " );
	scanf( "%d%*c", &age );
	
	if( age >= 65 )
	{
		printf( "Enter the gender( F / M ) : " );
		scanf( "%c%*c", &gender );
		
		if( gender == 'F' )
		{
			printf( "Senior Female" );
		}
		else
		{
			printf( "Senior Male" );
		}
	}
	else
	{
		printf( "Not a senior citizen" );
	}
	
	return 0;	
}

