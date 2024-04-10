#include <stdio.h>

int main( void )

{

        float temp[ 2 ][ 3 ] = { 0 };

        float avgTemp[ 2 ] = { 0 };

        int i, j;

        float total = 0;





        for( i = 0; i < 2; i++ )

        {

        printf( "City %d \n", i + 1 );

                for( j = 0; j < 3; j++ )

                {

                        printf( "Enter the temperature %d : ", j + 1 );

                        scanf( "%f", &temp[ i ][ j ] );

                        total += temp[ i ][ j ];

                }

                avgTemp[ i ]  = total / 3.0;

                total = 0;

        }

        printf( "\n\n" );



        

        for( i = 0; i < 2; i++ )

        {

                printf( "City %d Average temperartue : ", i + 1 );

                printf( "%.2f\n", avgTemp[ i ] );

        }

        return 0;

}







 //  sample output




