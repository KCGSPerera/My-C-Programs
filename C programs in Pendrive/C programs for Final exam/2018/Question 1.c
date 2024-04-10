#include <stdio.h>
int main( void )
{
    char type;
    int countH = 0, countM = 0, countF = 0;
    float totH = 0, totM = 0, totF = 0, total = 0;
    int count = 0;
    char availability;

    while( count <= 100 )
    {
        printf( "Enter course type ( H / h / M / m / f / F ) : " );
        scanf( "%c%*c", &type );

        if( type == 'H' || type == 'h' )
        {
            totH += 1500;
            countH++;
            count++;
            total += totH;
        }
        else if( type == 'M' || type == 'm' )
        {
            totM += 2000;
            countM++;
            count++;
            total += totM;
        }
        else if( type == 'F' || type == 'f' )
        {
            totF += 2000;
            countF++;
            count++;
            total += totF;
        }
        else
        {
            printf( "Invalid course\n" );
        }
        
        printf( "Are there any applicants to register ( Y / N ) : " );
        scanf( "%c%*c", &availability );
       
        if( availability == 'N' )
        {
            printf( "\n" );

      		printf( "Number of registrations for the Diplom in Hospitality Management : %d\n",  countH );
            printf( "Number of registrations for the Diplom in Marketing : %d\n",  countM );
            printf( "Number of registrations for the Diplom in Finance : %d\n\n",  countF );

            printf( "Income Earned from Diploma in Hospitality Management : %.2f\n", totH );
            printf( "Income Earned from Diploma in Marketing : %.2f\n", totM );
            printf( "Income Earned from Diploma in Finance : %.2f\n\n", totF );
            printf( "Total income eared by all the three courses : %.2f\n\n", total );
			
			printf( " Thank you for registering\n " );
            
            return -1;
        }
   }
        printf( "\n" );

        printf( "Number of registrations for the Diplom in Hospitality Management : %d\n",  countH );
        printf( "Number of registrations for the Diplom in Marketing : %d\n",  countM );
        printf( "Number of registrations for the Diplom in Finance : %d\n\n",  countF );

        printf( "Income Earned from Diploma in Hospitality Management : %.2f\n", totH );
        printf( "Income Earned from Diploma in Marketing : %.2f\n", totM );
        printf( "Income Earned from Diploma in Finance : %.2f\n\n", totF );

        printf( "Total income eared by all the three courses : %.2f\n", total );

        return 0;

}
