#include <stdio.h>
int main( void )
{
    float a, b, c;

    printf( "Enter length 1 : " );
    scanf( "%f", &a );

    printf( "Enter length 2 : " );
    scanf( "%f", &b );

    printf( "Enter length 3 : " );
    scanf( "%f", &c );

    if( a == b && b == c )
        printf( "Triangle is equilateral\n" );
    else if( a == b || a == c || b == c )
        printf( "Triangle is isosceles\n" );
    else
        printf( "Triangle is scalene\n" );

    return 0;
}
