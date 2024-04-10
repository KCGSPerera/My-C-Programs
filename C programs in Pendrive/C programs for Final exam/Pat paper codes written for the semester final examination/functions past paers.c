// Thsi prigram take the salary and the employee type as the user inputs and send them to a function as parameters
// Them calcualte the increament of the salary using them and return the salary increament.

#include <stdio.h>
float calIncreament( float salary, char type );

int main( void )
{
    float empSalary;
    char empCategory;
    float increase = 0;

    printf( "Enter Employee category( A / B / C ) : " );
    scanf( "%c", &empCategory );
    
    printf( "Enter Salary : " );
    scanf( "%f", &empSalary );


    increase = calIncreament( empSalary, empCategory );

    printf( "The increament of the employee : %.2f\n", increase ); 

    return 0;
}
float calIncreament( float salary, char type )
{
    float increament = 0;

    if( type == 'A' )
    {
        increament = salary * 0.04;
    }
    else if( type == 'B' )
    {
        increament = salary * 0.06;
    } 
    else if( type == 'c' )
    {
        increament = salary * 0.08;
    } 
    else
    {
        return printf( "Invalid salary category" );
    }
    return increament;   
}


