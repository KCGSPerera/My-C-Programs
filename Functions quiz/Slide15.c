#include <stdio.h>
#include <assert.h>
double calculateAmount( int type, double initial );
void printDetails( int type, double initial, double balance );
int checkEligibility( double balance );
int main( void )
{
	int accType, eligible;
	int i;
	double initialAmount, finalBalance;
	
	for( i = 1; i <= 5; i++ )
	{
		printf( "\n" );
		
		printf( "Enter Account type : " );
		scanf( "%d", &accType );
	
		printf( "Enter the initial balance : " );
		scanf( "%lf", &initialAmount );
	
		finalBalance = calculateAmount( accType, initialAmount );
	
		printDetails( accType, initialAmount, finalBalance );
	
		eligible = checkEligibility( finalBalance );
	
		printf( "Eligibility ( Eligible : 1, Not Eligible : 2 ) : %d\n", eligible );
	
	}
	return 0;
	
}
double calculateAmount( int type, double initial )
{
	double interest, balance;
	
	if( type == 1 )
	{
		interest = initial * ( 4 / 100.0 );
		balance = interest + initial;
	}
	else if( type == 2 )
	{
		interest = initial * ( 7 / 100.0 );
		balance = interest + initial;
	}
	else if( type == 3 )
	{
		interest = initial * ( 10 / 100.0 ); // Please check whether when we use double data type the printf statement shoud write as, ".2lf" or ".2f"
		balance = interest + initial;
	}
	else
	{
		printf( "Invalid account type" );
		return ;
	}
	
	return balance;
}
void printDetails( int type, double initial, double balance )
{
	printf( "\n\nAccount Type : %d\n", type );
	printf( "Initial Account Value at the begining of the year : %.2lf\n", initial );
	printf( "Account Balance : %.2lf\n", balance );
	
	return;	
}
int checkEligibility( double balance )
{
	if( balance >= 5000 )
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
