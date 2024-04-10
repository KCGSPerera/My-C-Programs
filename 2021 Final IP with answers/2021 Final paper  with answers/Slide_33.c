#include <stdio.h>
#include <math.h>
int main( void )
{
    int b = 4;
    float a = -2, c = 0;

    c = sqrt( fabs( a ) + ( b * b ) );

    printf( " C = %.2f\n", c );
    return 0;
}
