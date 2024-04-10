#include <stdio.h>
struct employee
{
	char ID[ 10 ];
	char name[ 20 ];
	int years;
	float salary;
	
} employee[ 3 ];

int main( void )
{
	int i, j;
	float increament[ 3 ] = { 0 };
	
	for( i = 0; i < 3; i++ )
	{
		printf( "Employee %d\n", i + 1 );
		
		printf( "Enter ID : " );
		scanf( "%s", employee[ i ].ID );
			
		printf( "Enter name : " );
		scanf( "%s", employee[ i ].name );
			
		printf( "Enter experiance : " );
		scanf( "%d", &employee[ i ].years );
			
		printf( "Enter salary : " );
		scanf( "%f", &employee[ i ].salary );
		
		printf( "\n" );
	}
	
	printf( "\tID \tName \tIncreament\n" );
	for( i = 0; i < 3; i++ )
	{
		printf( "Employee %d : ", i + 1 );
		
		if( employee[ i ].years >= 2 )
		{
			increament[ i ] = employee[ i ].salary * ( 10 / 100.0 );
		}
		printf( "\t%s \t%s \t%.2f\n", employee[ i ].ID, employee[ i ].name, increament[ i ] );
	}
	return 0;
}
