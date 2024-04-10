#include <stdio.h>
struct details
{
    char accNum[ 10 ];
    char name[ 20 ];
    char type;
    float amount;

}customer[ 4 ];

int main( void )
{
    int i;
    float totDeposit = 0, totWithdraw = 0;
    float maxDep[ 4 ] = { 0 }, minWithd[ 4 ] = { 0 };
    float max = 0, min = 0;
    char maxName[ 10 ] = { 0 }, minName[ 10 ] = {  0 };

    customer[ 0 ].accNum[ 10 ] = "S001";
    customer[ 0 ].name[ 10 ] = "Gavithra";
    customer[ 0 ].type = 'W';
    customer[ 0 ].amount = 200000;

    customer[ 1 ].accNum [ 10 ]= "S002";
    customer[ 1 ].name[ 10 ] = "Sachithra";
    customer[ 1 ].type = 'W';
    customer[ 1 ].amount = 100000;

    customer[ 2 ].accNum[ 10 ] = "S003";
    customer[ 2 ].name[ 10 ] = "Dilshan";
    customer[ 2 ].type = 'D';
    customer[ 2 ].amount = 80000;
    

    customer[ 3 ].accNum[ 10 ] = "S004";
    customer[ 3 ].name[ 10 ] = "Manshala";
    customer[ 3 ].type = 'D';
    customer[ 3 ].amount = 500000;

    customer[ 4 ].accNum[ 10 ] = "S005";
    customer[ 4 ].name[ 10 ] = "Hiroshan";
    customer[ 4 ].type = 'W';
    customer[ 4 ].amount = 750000;

    min = customer[ 1 ].amount;
    max = customer[ 3 ].amount;

    for( i = 0; i < 5; i++ )
    {
        if( customer[ i ].type == 'W' )
        {
            totWithdraw += customer[ i ].amount;

            if( customer[ i ].amount <= min)
            {
                min = customer[ i ].amount;
                // minWithd[ i ] = customer[ i ].amount;
                minName[ 10 ] = customer[ i ].name;
            }
        }
        if( customer[ i ].type == 'D' )
        {
            totDeposit += customer[ i ].amount;

            if( customer[ i ].amount >= max)
            {
                max = customer[ i ].amount;
                maxName[ 10 ] = customer[ i ].name;
                // maxDep[ i ] = customer[ i ].amount;
            }
        }
    }

    printf( "Total Deposits : %.2f\n", totDeposit );
    printf( "Total Withdrawals : %.2f\n", totWithdraw );
    printf( "Maximum depositted customer : %s\n", maxName );
    printf( "Minimum withdrawed customer : %s\n", minName );
    
    return 0;
}
