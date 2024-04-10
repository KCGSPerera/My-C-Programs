// IT21810664
// Perera K C G S
// Y1.S1.WD.02.01.S1
// Malabe


#include <stdio.h>
int main( void ) // program execution begins with function main
{
	float payment[ 4 ][ 3 ] = { 0 }; // declaring and initializing array
	int i, j, count = 0; // variable declaration and initialization
	int category, type; // variable declaration and initialization
	float total = 0; // variable declaration and initialization
	
	for( i = 0; i < 4; i++ ) // using for loop to take user inputs
	{
		printf( "Appoinment Type %d\n", i + 1 ); // display appoinment type
		for( j = 0; j < 3; j++ )
		{
			printf( "Enter Patient %d charges : ", j + 1 ); // prompt to print
			scanf( "%f", &payment[ i ][ j ] ); // read an integer
		}
	}
	
	printf( "\tPatient1 \tPatient2 \tPatient3\n" ); 
	for( i = 0; i < 4; i++ )
	{
		printf( "Type %d :  ", i + 1 );
		for( j = 0; j < 3; j++ )
		{
			printf( "%.2f\t", payment[ i ][ j ] );
		}
		printf( "\n" );
	}
	
	printf( "Enter patient category : " ); // prompt to print
	scanf( "%d", &category ); // read an integer

	while( category != -1 || count <= 100 ) // using while loop to to get user inputs and calculate the income
	{
		printf( "Enter appoinment type : " ); // calculate the total income
		scanf( "%d", &type ); // increase the counter variable
		
		total += payment[ type ][ category ]; // calculate the total income
		count++; // increase the counter variable
		
		printf( "Enter patient category : " ); // prompt to print 
		scanf( "%d", &category ); // read an integer
	}
	printf( "\n\n" ); // print new line
	printf( "Total income : %.2f\n", total ); // display total income
	return 0;
	
} // end of function main
