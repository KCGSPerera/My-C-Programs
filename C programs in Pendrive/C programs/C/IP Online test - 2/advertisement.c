// Malambe WD 02.01.s1 IT21810664
/* This program allows user to input data and 
calculate the total advertisement cost */
#include <stdio.h>
int main( void ) // program execution begins with function main
{
	int timePeriod, noOfTimes; // variable declaration
	char peakTime; // variable declaration
	float total = 0; // variable declaration and initialization
	
	printf( "Enter the time period ( seconds ) : " ); // promt for print
	scanf( "%d%*c", &timePeriod ); // read an integer
	
	if( timePeriod <= 30 ) // check whether the sataement is true
	{
		total = 10000.00; // initialize a value toi variable
		
		printf( "Enter the number of times : " ); // promt for print
		scanf( "%d%*c", &noOfTimes ); // read an integer
		
		total = total * noOfTimes; // calculate the total 
		
		printf( "Enter whether the peak time or not ( Y - yes / N - no ) : " ); // promt for print
		scanf( "%c%*c", &peakTime ); // read an integer
		
		if( peakTime == 'Y' ) // check whether the sataement is true
		{	
			total = total * 110.0 / 100; // calculate the total
			
			printf( "Total : %.2f\n", total ); // display the total 
		}
		else // decision if the statement is false
		{
			printf( "Total : %.2f\n", total ); // display the total 
		}
	}
	else if( timePeriod <= 60 ) // check whether the sataement is true
	{
		total = 15000.00; // initialize a value toi variable
		
		printf( "Enter the number of times : " ); // promt for print
		scanf( "%d%*c", &noOfTimes ); // read an integer
		
		total = total * noOfTimes; // calculate the total
		
		printf( "Enter whether the peak time or not ( Y - yes / N - no ) : " ); // promt for print
		scanf( "%c%*c", &peakTime ); // read an integer
		
		if( peakTime == 'Y' ) // check whether the sataement is true
		{	
			total = total * 110.0 / 100; // initialize a value toi variable
			
			printf( "Total : %.2f\n", total ); // display the total 
		}
		else // decision if the statement is false
		{
			printf( "Total : %.2f\n", total ); // display the total 
		}
	}
	else // decision if the statement is false
	{
		total = 20000.00; // initialize a value toi variable
		
		printf( "Enter the number of times : " ); // promt for print
		scanf( "%d%*c", &noOfTimes ); // read an integer
		 
		total = total * noOfTimes; // calculate the total
		
		printf( "Enter whether the peak time or not ( Y - yes / N - no ) : " ); // promt for print
		scanf( "%c%*c", &peakTime ); // read an integer
		
		if( peakTime == 'Y' ) // check whether the sataement is true
		{	
			total = total * 110.0 / 100; // calculate the total
			
			printf( "Total : %.2f\n", total ); // display the total 
		}
		else // decision if the statement is false
		{
			printf( "Total : %.2f\n", total ); // display the total 
		}
	} // end of if statement
	
	return 0;	
} // end of function main
