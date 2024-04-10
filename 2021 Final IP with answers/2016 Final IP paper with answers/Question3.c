#include <stdio.h>
int main( void )
{
    char pkg[ 10 ];
    char repeat;
    char service;
    float total = 0;
    int choice = 1, count = 0;

    printf( "Platinum / Gold / Silver / Bronze\n" );
    printf( "Enter Your Package : " );
    scanf( "%s%*c", pkg );

  /*  if( pkg != "Platinum" && pkg != "Gold" && pkg != "Silver" && pkg != "Bronze" )
    {
        printf( "Invalid package type\n" );
        printf( "Platinam / Gold / Silver / Bronze\n" );
        printf( "Enter Your Package : " );
        scanf( "%s", pkg ); 
    } */

    while( choice == 1 )
    {
        if( pkg == "Platinum" )
        {
            printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
            printf( "Enter service type : " );
            scanf( "%c", &service );

            if( service == 'H' )
                total += 2000;
            else if( service == 'F' )
                total += 2500;
            else if( service == 'F' )
                total += 2200;
            else
            {
                printf( "Invalid service\n" );
                printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
                printf( "Enter service type : " );
                scanf( "%*c%c", &service );
            }
            count++;
            
            printf( "Do you need another service( Y / N ) : " );
            scanf( "%*c%c", &repeat );

            if( repeat == 'N' )
                choice = -1;
        }
        if( pkg == "Gold" )
        {
            printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
            printf( "Enter service type : " );
            scanf( "%*c%c", &service );

            if( service == 'H' )
                total += 1900;
            else if( service == 'F' )
                total += 2100;
            else if( service == 'F' )
                total += 1800;
            else
            {
                printf( "Invalid service\n" );
                printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
                printf( "Enter service type : " );
                scanf( "%*c%c", &service );
            }
            count++;
            
            printf( "Do you need another service( Y / N ) : " );
            scanf( "%*c%c", &repeat );

            if( repeat == 'N' )
                choice = -1;
        }
        if( pkg == "Silver" )
        {
            printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
            printf( "Enter service type : " );
            scanf( "%*c%c", &service );

            if( service == 'H' )
                total += 1750;
            else if( service == 'F' )
                total += 1900;
            else if( service == 'F' )
                total += 1700;
            else
            {
                printf( "Invalid service\n" );
                printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
                printf( "Enter service type : " );
                scanf( "%*c%c", &service );
            }
            count++;
            
            printf( "Do you need another service( Y / N ) : " );
            scanf( "%*c%c", &repeat );

            if( repeat == 'N' )
                choice = -1;
        }
        if( pkg == "Bronze" )
        {
            printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
            printf( "Enter service type : " );
            scanf( "%*c%c", &service );

            if( service == 'H' )
                total += 1600;
            else if( service == 'F' )
                total += 1700;
            else if( service == 'F' )
                total += 1500;
            else
            {
                printf( "Invalid service\n" );
                printf( "Head Massage - H / Foot Massage - F / Facial cleanup - C\n" );
                printf( "Enter service type : " );
                scanf( "%*c%c", &service );
            }
            count++;
            
            printf( "Do you need another service( Y / N ) : " );
            scanf( "%*c%c", &repeat );

            if( repeat == 'N' )
                choice = -1;
        }
 

    if( count > 1 )
    {
        if( count == 2 )
            total = total * 0.9;
        if( count > 2 )
            total = total * 0.8;
    }

    printf( "Total : %.2f\n", total );
    return 0;
    }
}
