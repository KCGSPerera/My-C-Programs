// This program writes the data entered through the key board, into a fie called details.dat.

#include <stdio.h>
int main( void )
{
    int code, qty, i, j;
    char name[ 10 ];
    float price;

    FILE *fptr;
    fptr = fopen( "details.dat", "w" );

    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );   
        return -1;
    }

    fprintf( fptr, "Code    Name    Price    Quantity\n" );
    for( i = 0; i < 5; i++ )
    {
        printf( "Enter item code : " );
        scanf( "%d", &code );

        printf( "Enter item name : " );
        scanf( "%s", name );
 
        printf( "Enter item price : " );
        scanf( "%f", &price );

        printf( "Enter item quantity : " );
        scanf( "%d", &qty );

        fprintf( fptr, "%d    %6s    %.2f    %d\n", code, name, price, qty );
    }

}
