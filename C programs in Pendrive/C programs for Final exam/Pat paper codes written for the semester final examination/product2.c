#include <stdio.h>
struct product
{
    char ID[ 5 ];
    char name[ 10 ];
    float price;
    int qty;
}productDetails[ 4 ];

int main( void )
{
    int i, j;
    float amount[ 4 ] = { 0 };
    float total = 0;

    for( i = 0; i < 4; i++ )
    {
        printf( "Product %d : \n\n", i + 1 );

        printf( "Enter product ID : " );
        scanf( "%s", productDetails[ i ].ID );

        printf( "Enter product name : " );
        scanf( "%s", productDetails[ i ].name );

        printf( "Enter product price : " );
        scanf( "%f", &productDetails[ i ].price );

        printf( "Enter product quantity : " );
        scanf( "%d", &productDetails[ i ].qty );

        amount[ i ] += productDetails[ i ].price * productDetails[ i ].qty;
        total += amount[ i ];
    }
    printf( "\n" );

    printf( "  ID        Name    Amount\n" );
    for( i = 0; i < 4; i++ )
    {
        printf( "%4s    %8s    %.2f\n", productDetails[ i ].ID, productDetails[ i ].name, amount[ i ] );
    }
    printf( "\n\n" );
    printf( "Total income gain : %.2f\n", total );

    return 0;
    
}
