#include <stdio.h>

int main( void )

{

    int marks, type;

    float discount  = 0, total = 0;
    

    printf( "Enter the marks : " );

    scanf( "%d", &marks );

    printf( "Enter course number : " );

    scanf( "%d", &type );
    

    if( marks >= 80 && marks <= 100 )

    {

        if( type == 1 )

        {

            discount = 150000 * 0.075;

            total = 150000 - discount;

        }

        if( type== 2 )

        {

            discount = 175000 * 0.075;

            total = 175000 - discount;

        }
    }

    if( marks < 80 )

    {

        if( type == 1 )

        {

            discount = 0;

            total = 150000 - discount;

        }

        if( type== 2 )

        {

            discount = 0;

            total = 175000 - discount;

        }

    }

    printf( "Discount : %.2f\n", discount  );

    printf( "Total : %.2f\n", total  );

    return 0;

 }

