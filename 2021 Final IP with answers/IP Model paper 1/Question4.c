#include <stdio.h>
float calcIncreamnet( int type, float basicSalary );
float calcTotalSalary( float basicSalary, float increament );
int main( void )
{
    int empType;
    float salIncreament = 0, totalSalary = 0;
    float salary;

    printf( "Enter employee category : " );
    scanf( "%d", &empType );

    if( empType != 1 && empType != 2 && empType != 3 )
    {
        printf( "Invalid employee category" );
        return -1;
    }

    printf( "Enter employee salary : " );
    scanf( "%f", &salary );

    salIncreament = calcIncreamnet( empType, salary );
    totalSalary = calcTotalSalary( salary, salIncreament );

    printf( "salary increament : %.2f\n", salIncreament );
    printf( "Total salary : %.2f\n", totalSalary );
  
    return 0;  
}
float calcIncreamnet( int type, float basicSalary )
{
    if( type  == 1 )
        return basicSalary * 0.1;
    else if( type == 2 )
        return basicSalary * 0.15;
    else if( type == 3 )
        return basicSalary * 0.2;
    else
        return basicSalary * 0;
}
float calcTotalSalary( float basicSalary, float increament )
{
    return basicSalary += increament;
}
