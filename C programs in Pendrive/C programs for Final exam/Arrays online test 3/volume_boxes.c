#include <stdio.h>
int main( void ) // program execution begins with function maiin
{
    double boxes[ 4 ][ 3 ] = { { 2, 2, 2 }, { 2, 4, 4}, { 3, 4, 4}, { 5, 5, 3} }; // declaration and initilization of arrays
    double volume[ 4 ] = { 0, 0, 0, 0 }; // declaration and initilization of arrays
    int i; // declaration ad initialization of variables

    // using for loop to calclate the volume

    for( i = 0; i < 4; i++ )
    { 
        volume[ i ] = boxes[ i ][ 1 ] * boxes[ i ][ 2 ] * boxes[ i ][ 3 ]; // calculating the volume
    } // end of for loop

    printf( "\n" ); // print new line

    for( i = 0; i < 4; i++ ) // using for loop to display the calculated volume
    {
        printf( "Box %d volume : %.2lf\n", i + 1, volume[ i ] ); // display the volume
    } // end of for loop

    return 0;

} // end of function main
        
