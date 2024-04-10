#include <stdio.h>
int main( void )
{
    int type;
    char size, credit, loyalty, online;
    float total = 0, discount = 0, netTotal = 0;

    printf( "Enter pizza type : " );
    scanf( "%d%*c", &type );
    
    while( type != -1 )
    {
        if( type == 1 )
        {
            printf( "Enter pizza size( large - L / medium - M ) : " );
            scanf( "%c%*c", &size );

            if( size == 'L' )
            {
                total += 1720;
            }
            else if( size == 'M' )
            {
                total += 975;
            }
            
            else
            {
                printf( "Invalid size" );
            }
        }
        else if( type == 2 )
        {
            printf( "Enter pizza size( large - L / medium - M ) : " );
            scanf( "%c%*c", &size );

            if( size == 'L' )
            {
                total += 1820;
            }
            else if( size == 'M' )
            {
                total += 1000;
            }    
            else
            {
                printf( "Invalid size\n" );
            }
        }
        else
        {
            printf( "Invalid type\n" );
        } 
        
        printf( "Enter pizza type : " );
        scanf( "%d%*c", &type );

    }
    
    printf( "Are you paying with Credit cards( Y / N ) : " );
    scanf( "%c%*c", &credit );

    printf( "Are you paying with Loyalty cards( Y / N ) : " );
    scanf( "%c%*c", &loyalty );
  
    printf( "Are you paying online ( Y / N ) : " );
    scanf( "%c%*c", &online );

    if( online == 'Y' )
        discount = total * ( 5 / 100.0 );
        netTotal = total - discount;
      
    if( loyalty == 'Y' )
        discount = total * ( 15 / 100.0 );
        netTotal = total - discount;

    if( credit == 'Y' )
        discount = total * ( 20 / 100.0 );
        netTotal = total - discount;   

    printf( "Total Bill amount : %.2f\n", total );  
    printf( "Total Discount : %.2f\n", discount );
    printf( "Net Total : %.2f\n", netTotal );
    
    return 0;   
}
