#include <stdio.h>
int main( void )
{
    FILE *fptr;
    
    int tpNo, i, j;
    float local;
    float iNational;
    float roaming;
    float total = 0;

    fptr = fopen( "charges.dat", "w" );
    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return -1;
    }

    fprintf( fptr, "TP Number    Local chg    International chg    roaming chg\n" );   
    for( i = 0; i < 1; i++ )
    {
        printf( "Enter TP number : " );
        scanf( "%d", &tpNo );

        printf( "Enter Local call charges : " );
        scanf( "%f", &local ); 

        printf( "Enter International call charges : " );
        scanf( "%f", &iNational ); 

        printf( "Enter Roaming charges : " );
        scanf( "%f", &roaming );

        fprintf( fptr, " %d    %.2f        %.2f        %.2f \n", tpNo, local, iNational, roaming );
    } 
    fclose( fptr );

    fptr = fopen( "charges.dat", "r" );
    if( fptr == NULL )
    {
        printf( "The file cannot be opened" );
        return -1;
    }
    printf( "\n\n" );

    printf( "Phone number    Total Charges\n" );
    fscanf( fptr, "%d %f %f %f", &tpNo, &local, &iNational, &roaming );
    while( !feof( fptr ) )
    {
    	total = local + iNational + roaming;
    	printf( " %d        %.2f\n", tpNo, total );
       // printf( " %d    %.2f\n", tpNo, ( local + iNational + roaming ) );
        fscanf( fptr, "%d %f %f %f", &tpNo, &local, &iNational, &roaming );
    } 
    fclose( fptr );
    return 0;
}
