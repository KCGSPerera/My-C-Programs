#include <stdio.h>
struct product
{
	char ID[ 10 ];
	char name[ 20 ];
	float price;
	int qty;
}product[ 4 ];

int main( void )
{
	int i, j;
	float amount[ 4 ] = { 0 };
	float total = 0;
	
	for( i = 0; i < 4; i++ )
	
		printf( "Enter the product %d details\n", i + 1 );
		
		printf( "Enter product Id : " );
		scanf( "%s", product[ i ].ID );
		
		printf( "Enter product name : " );
		scanf( "%s", product[ i ].name );
		
		printf( "Enter product unit price : " );
		scanf( "%f", &product[ i ].price );
		
		printf( "Enter quantity : " );
		scanf( "%d", &product[ i ].qty );
		
		amount[ i ]  = product[ i ].price * product[ i ].qty;
		
		total += amount[ i ];
	}
	
	printf( "\t\tID \tName\t qty\t Unit Price\t Amount\n" );
	
	for( i = 0; i < 4; i++ )
	{
		printf( "Product %d : ", i + 1 );
		printf( "%s\t %s\t\t %d\t %.2f\t %.2f\n", product[i].ID, product[i].name, product[i].qty, product[i].price, amount[i] );
	}
	return 0;
}
