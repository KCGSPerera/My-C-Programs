#include <stdio.h>
int main( void )
{
	int s = 0, m = 0, p = 0, count = 0, std;
	int dose0 = 0, dose1 = 0, dose2 = 0, dose3 = 0, doseNum;
	char vac, taken;
	
	printf( "Enter number of total students : " );
	scanf( "%d%*c", &std );
	
	while( count != std )
	{
		count++;
		
		printf( "Enter whether vaccine is taken ( Y / N ) : " );
		scanf( "%c%*c", &taken );
		
		if( taken == 'Y' )
		{
			printf( "Enter the type of the vaccine ( S / P / M ): " );
			scanf( "%c%*c", &vac );
			
			if( vac == 'S' )
			{
				
				
				printf( "Enter the number of doses : " );
				scanf( "%d", &doseNum );
				
				if( doseNum == 1 )
				{
					dose1++;
					s++;
				}
				else if( doseNum == 2 )
				{
					dose2++;
					s++;
				}
				else if( doseNum == 3 )
				{
					dose3++;
					s++;
				}
				else
				{
					printf( "Invalid user input" );
				}
				
			}
			else if( vac == 'P' )
			{
				
				
				printf( "Enter the number of doses : " );
				scanf( "%d", &doseNum );
				
				if( doseNum == 1 )
				{
					dose1++;
					p++;
				}
				else if( doseNum == 2 )
				{
					dose2++;
					p++;
				}
				else if( doseNum == 3 )
				{
					dose3++;
					p++;
				}
				else
				{
					printf( "Invalid user input" );
				}
			}
			else if( vac == 'M' )
			{
				
				
				printf( "Enter the number of doses : " );
				scanf( "%d", &doseNum );
				
				if( doseNum == 1 )
				{
					dose1++;
					m++;
				}
				else if( doseNum == 2 )
				{
					dose2++;
					m++;
				}
				else if( doseNum == 3 )
				{
					dose3++;
					m++;
				}
				else
				{
					printf( "Invalid user input" );
				}
			}
			else
			{
				printf( "Invalid user input" );
			}
		}
		else
		{
			dose0++;
		}
	}
	
	printf( "\n\nNumber of students who have not taken vaccine : %d\n", dose0 );
	printf( "Number of students who have taken single dose of vaccine : %d\n", dose1 );
	printf( "Number of students who have taken double doses of vaccine : %d\n", dose2 );
	printf( "Number of students who have taken all the three doses of vaccine : %d\n\n", dose3 );
	
	printf( "The number of students who have taken the Sinopharm vaccine : %d\n", s );
	printf( "The number of students who have taken the Pfizer vaccine : %d\n", p );
	printf( "The number of students who have taken the Moderna vaccine : %d\n", m );
	
	return 0;
}
