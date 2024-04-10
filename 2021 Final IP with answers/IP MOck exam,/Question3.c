#include <stdio.h>

float calAdditionalCharges( int orderType, float subTotal );

float  calTotalBill(float subTotal, float charges);

int main( void )

{

        int type;

        float addCharges  = 0;

        float total = 0, bill = 0;



        printf( "Enter order type : " );

        scanf( "%d", &type );

        if( type != 1 &&  type != 2 && type != 3 )

        {

                printf( "Invalid type" );

                return -1;

         }

        printf( "Enter Bill amount : " );

        scanf( "%f", &bill );



        addCharges = calAdditionalCharges( type, bill );

        total =  calTotalBill( bill, addCharges );

        printf( "Additional charges : %.2f\n", addCharges );

        printf( "NET AMOUNT : %.2f\n", total );

        return 0;

}

float calAdditionalCharges( int orderType, float subTotal )

{

        if( orderType == 1 )

        {

                return subTotal  * 0.22;

        }

        else if( orderType == 2)

        {

                return subTotal * 0.12;

        }

        
        else if( orderType == 2)

        {

                return subTotal * 0.17;

        }

        else

        {

                return 0;

        }


}

float  calTotalBill(float subTotal, float charges)

{

        return subTotal += charges;

}










		/*  sample output


			Enter sub total : 100.00

			Enter order type: 2

			Total bill amount : 112.00 	*/
















