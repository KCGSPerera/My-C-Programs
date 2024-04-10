#include <stdio.h>
int main( void )
{
    FILE *fptr;
    int ID, itemNo, qty, i;

    fptr = fopen( "details.dat", "w" );
    if( fptr = NULL )
    {
        printf( "The file cannot be opened" );
        return -1;
    }

    fprintf( fptr, "Item ID    Item NO    Quantity\n" );
    for( i = 0; i < 2; i++ )
    {
        printf( "Enter item ID : " );
        scanf( "%d", &ID );

        printf( "Enter item Number : " );
        scanf( "%d", &itemNo );

        printf( "Enter item Quantity : " );
        scanf( "%d", &qty );

        fprintf( fptr, " %d    %d    %d \n", ID, itemNo, qty );
    }
    fclose( fptr );
    return 0;
}
