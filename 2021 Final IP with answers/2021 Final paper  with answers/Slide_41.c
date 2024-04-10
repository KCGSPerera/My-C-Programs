#include <stdio.h>
#include <math.h>
int main( void )
{
    float A = 0, x = 2, h = 6, k = 1;

    A = cbrt( fabs( x - h ) + ( k * k ) );

    printf( "%.2f\n", A );
    return 0;
}
