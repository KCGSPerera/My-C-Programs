#include <stdio.h>
int main( void )
{
    FILE *fptr;
    int i, j, number;
    char type;
    float totalD = 0, totalW = 0, amount = 0;

    fptr = fopen( "bank.dat", "r" );
    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return -1;
    }

    fscanf( fptr, " %d%*c %c%*c %f", &number, &type, &amount );
    while( !feof( fptr ) )
    {
        if( type == 'D' )
        {
            totalD += amount;
        }
        if( type == 'W' )
        {
            totalW += amount;
        }
   
        fscanf( fptr, " %d%*c %c%*c %f", &number, &type, &amount );  
    }

    printf( "Total Deposits : %.2f\n", totalD );
    printf( "Total Withdrawals : %.2f\n", totalW );  // There is a problem with the output of the withdrawals.. Total shoud be = 12500.00 But it displays only the value 7000.00.
    fclose( fptr );

    return 0;
}
