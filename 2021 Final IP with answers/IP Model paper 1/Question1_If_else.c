#include <stdio.h>
int main( void )
{
    char type, pType, nextOrder;
    int nights, rooms, choice = 1;
    float total = 0;

    printf( "Enter package type : " );
    scanf( "%c%*c", &type );

    while( choice == 1 )
    {
    	printf( "Enter Number of nights : " );
  		scanf( "%d%*c", &nights );
    
  		printf( "Enter number of rooms : " );
  		scanf( "%d%*c", &rooms );

        printf( "Enter payment method ( cash - M / card - C ) : " );
        scanf( "%c%*c", &pType );

        if( type == 'D' )
        {
            total += 31000 * rooms * nights; 
        } 	
        else if( type == 'S' )
        {
            total += 35000 * rooms * nights;
        }		
        else if( type == 'C' )
        {
            total += 50000 * rooms * nights;
        }
        else if( type == 'E' )
        {
            total += 75000 * rooms * nights;
        }
        else if( type == 'P' )
        {
            total += 100000 * rooms * nights;
        }
        else
        { 
            printf( "Invalid room type" );
        }

        if( pType == 'C' )
        {
            total = total * 0.9;
        }
        printf( "\n\n" );
        printf( "Total Bill amount : %.2f\n\n", total );

        printf( "Do you want to continue the order ( Y / y / N / n ) : " );
        scanf( "%c%*c", &nextOrder );
        
        if( nextOrder == 'Y' || nextOrder == 'y' )
        {
        	choice = 1;
		}
		if( nextOrder == 'n' || nextOrder == 'N' )
		{
			return -1;
		}
		
		printf( "Enter package type : " );
        scanf( "%c%*c", &type );

    }

    return 0;    
}
