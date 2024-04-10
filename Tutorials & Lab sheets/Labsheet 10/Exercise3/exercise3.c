#include <stdio.h>
int main( void )
{
	int NIC, accNumber, i, inputAcc, count = 1;
	char name[ 20 ];
	float balance = 0, cBalance = 0;
	char type;
	float amount = 0, finalBalance = 0;
	
	FILE *fptr;
	
	fptr = fopen( "account.txt", "w" );
	if( fptr == NULL )
	{
		printf( "The file cannot be opened" );
		return -1;
	}
	
	for( i = 1; i <= 4; i++ )
	{
		printf( "Enter account number : ");
		scanf( "%d", &accNumber );
		
		printf( "Enter NIC number : ");
		scanf( "%d", &NIC );
		
		printf( "Enter customer name : ");
		scanf( "%s", name );
		
		printf( "Enter account balance : ");
		scanf( "%f", &balance );
		
		fprintf( fptr, "%d %d %s %.2f\n", accNumber, NIC, name, balance );
	}
	fclose( fptr );
	
	fptr = fopen( "account.txt", "r" );
	if( fptr == NULL )
	{
		printf( "File cannot be opened" );
		return -1;
	}
	printf( "\n\n" );
	printf( "Enter the account number to check the update account balance : " );
	scanf( "%d", &inputAcc );
	
	fscanf( fptr, "%d %d %s %f", &accNumber, &NIC, name, &balance );
	while( !feof( fptr ) )
	{
		i++;
		
		if( inputAcc == accNumber)
		{
			cBalance = balance;	
			count = i;
		}
		fscanf( fptr, "%d %d %s %f", &accNumber, &NIC, name, &balance );
	}
	fclose( fptr );
	
	fptr = fopen( "transaction.txt", "r" );
	if( fptr == NULL )
	{
		printf( "The file cannot be opened" );
		return -1;
	}
	
	for( i = 1; i == count; i++ )
	{
		fscanf( fptr, "%c %f", &type, &amount );
		
		if( type == 'W' )
		{
			finalBalance = cBalance - amount;
		}
		else if( type == 'D')
		{
			finalBalance = cBalance + amount;
		}
		else
		{
			printf( "Not applicable" );
		}
	}
	printf( "Updated balance : %.2f\n", finalBalance );
	fclose( fptr );
	
	return 0;
}
