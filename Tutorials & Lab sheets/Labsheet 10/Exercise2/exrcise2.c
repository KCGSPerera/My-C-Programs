#include <stdio.h>
int main( void )
{
	char ID[ 10 ];
	char name[ 20 ];
	int qty, i;
	float unitPrice;
	float total, totalPrice = 0;
	
	FILE *fptr;
	
	fptr =  fopen( "purchase.txt", "w" );
	if( fptr == NULL )
	{
		printf( "The file cannot be opened" );
		return -1;	
	}	
	
	for( i = 1; i <= 2; i++ )
	{
		printf( "Enter product ID : " );
		scanf( "%s", ID );
		
		printf( "Enter product name : " );
		scanf( "%s", name );
		
		printf( "Enter product quantity : " );
		scanf( "%d", &qty );
		
		printf( "Enter product unit price : " );
		scanf( "%f", &unitPrice );
		
		fprintf( fptr, "%s	%s	%d	%.2f\n", ID, name, qty, unitPrice );
	}
	fclose( fptr );
	
	fptr = fopen( "purchase.txt", "r" );
	if( fptr == NULL )
	{
		printf( "The file cannot be opened" );
		return -1;
	}
	
	printf( "Item ID    Name    Quantity    Unit Price    Total price\n" );
	fscanf( fptr, "%s %s %d %f", ID, name, &qty, &unitPrice );
	
	while( !feof( fptr ) )
	{
		total = qty * unitPrice;
		
		printf( "%s      %s      %d      %.2f    %.2f\n", ID, name, qty, unitPrice, total );
		fscanf( fptr, "%s %s %d %f", ID, name, &qty, &unitPrice );
		
		totalPrice +=total;
	}
	printf( "\n" );
	printf( "Total : %.2f" , totalPrice );
	fclose( fptr );
	return 0;
}

	

