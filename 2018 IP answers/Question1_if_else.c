#include <stdio.h>
int main( void )
{
    char type;
    int countH = 0, countM = 0, countF = 0, count = 0;
    float totalH = 0, totalM = 0, totalF = 0;

    printf( "Enter course type( H / h / M / m / F / f / N - No more applicants ) : " );
    scanf( "%c%*c", &type );

    while(  count < 100 ) // type != 'N'   - We should enter this statement also to the while loop.   
    {											// But if we entered this , the program will not be terminated at the right point.
        if( type == 'H' || type == 'h' )        // so what is the trouble with that question
        {
            totalH += 1500;
            countH++;
        }
        else if( type == 'M' || type == 'm' )
        {
            totalM += 2000;
            countM++;
        }
        else if( type == 'F' || type == 'f' )
        {
            totalF += 2500;
            countF++;
        }
        else
        {
            printf( "Invalid course type" );
        }
        count++;

        printf( "Enter course type( H / h / M / m / F / f / N - No more applicants ) : " );
        scanf( "%c%*c", &type );
    }
    printf( "\n\n" );

    printf( "Total students for Diploma in Hospitality Management : %d\n", countH );
    printf( "Total students for Diploma in Marketing : %d\n", countM );
    printf( "Total students for Diploma in Finance : %d\n", countF );
    printf( "Total students registered for all the diplomas : %d\n", count );

    printf( "Total income earned by Diploma in hospitality management : %.2f\n", totalH );
    printf( "Total income earned by Diploma in Marketing : %.2f\n", totalM );
    printf( "Total income earned by Diploma in Finance : %.2f\n", totalF );

    return 0;
}
