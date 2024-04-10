#include <stdio.h>
int main( void )
{
    int distance;
    char type;
    float discount = 0;

    printf( "Enter vehicle type( C / V / B ) : " );
    scanf( "%c%*c", &type );

    if( type != 'C' && type != 'V' && type != 'B' )
    {
        printf( "Invalid vehicle type\n" );
        return -1;
    } 

    printf( "Enter distance : " );
    scanf( "%d%*c", &distance );

    if( type == 'C' )
    {
        if( distance >= 100 )
        {
            discount = ( distance * 40 ) * 0.05;
        }
    }
    else if( type == 'V' )
    {
        
        if( distance >= 100 )
        {
            
            discount = ( distance * 50 ) * 0.05;
        }
    }
    else
    {
        discount = 0;
    }

    printf( "Discount : %.2f\n", discount );
    return 0;
}
