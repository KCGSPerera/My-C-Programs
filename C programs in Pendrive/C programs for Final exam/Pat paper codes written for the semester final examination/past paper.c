// This program open aa file which has created and saved previously.
// Then this plrogram reads the data stored  tha file and display the details.

#include <stdio.h>
int main( void )
{
    char type[ 5 ];
    char description[ 10 ];
    float price = 0;
    
    FILE *fptr;
    fptr = fopen( "menu.dat", "r" );

    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return 0;
    }

    fscanf( fptr, "%s %s %f", type, description, &price );

    while( !feof( fptr ) )
    {
        printf( "%s    %s    %d    ",type, description, price );
        fscanf( fptr, "%s %s %f", type, description, &price );
    }
    printf( "\n" );

    fclose( fptr );
    return 0;
}
