#include <stdio.h>
int main( void )
{
	int stdCount = 0;
	char vaccineType;
	int count = 0;
	char dose11, dose22, dose33;
	int dose0 = 0, dose1 = 0, dose2 = 0, dose3 = 0;
	int moderna = 0, pfizer = 0, sinopharm = 0;
	char anyVaccine;
	
	printf( "Enter the total number of students in the campus : " );
	scanf( "%d%*c", &stdCount );
	
	while( count != stdCount )
	{
		
		
		printf( "Have you taken at least single vaccine? ( Y / N ) : " );
		scanf( "%c%*c", &anyVaccine );
		
		if( anyVaccine == 'Y' )
		{
	 		printf( "Enter the vaccine type ( S - Sinopharm, P - Pfizer, M - Moderna ) : " );
			scanf( "%c%*c", &vaccineType );
		
			if( vaccineType == 'S' )
			{
				sinopharm++;
			
				printf( "Enter whether the dose 1 is taken ( Y / N ) : " );
				scanf( "%c%*c", &dose11 );
				
				if( dose11 == 'Y' )
				{
					dose1++;
				}
				else
				{
					dose1 = dose1;
				}
			
				printf( "Enter whether the second dose is taken : " );
				scanf( " %c%*c", &dose22 );
			
				if( dose22 == 'Y' )
				{
					dose2++;
				}
				else
				{
					dose2 = dose2;
				}
				
				printf( "Enter whether the third dose is taken : " );
				scanf( " %c%*c", &dose33 );
			
				if( dose33 == 'Y' )
				{
					dose3++;
				}
				else
				{
					dose3 = dose3;
				}
	
			}
			else if( "vaccineType == 'P'" )
			{
				pfizer++;
				
				printf( "Enter whether the dose 1 is taken ( Y / N ) : " );
				scanf( "%c%*c", &dose11 );
				
				if( dose11 == 'Y' )
				{
					dose1++;
				}
				else
				{
					dose1 = dose1;
				}
			
				printf( "Enter whether the second dose is taken : " );
				scanf( " %c%*c", &dose22 );
			
				if( dose22 == 'Y' )
				{
					dose2++;
				}
				else
				{
					dose2 = dose2;
				}
			
				printf( "Enter whether the third dose is taken : " );
				scanf( " %c%*c", &dose33 );
			
				if( dose33 == 'Y' )
				{
					dose3++;
				}
				else
				{
					dose3 = dose3;
				}
			}
			else if( vaccineType == 'M' )
			{
				moderna++;
				
				printf( "Enter whether the dose 1 is taken ( Y / N ) : " );
				scanf( "%c%*c", &dose11 );
			
				if( dose11 == 'Y' )
				{
					dose1++;
				}
				else
				{
					dose1 = dose1;
				}
				
				printf( "Enter whether the second dose is taken : " );
				scanf( " %c%*c", &dose22 );
			
				if( dose22 == 'Y' )
				{
					dose2++;
				}
				else
				{
					dose2 = dose2;
				}
			
				printf( "Enter whether the third dose is taken : " );
				scanf( " %c%*c", &dose33 );
			
				if( dose33 == 'Y' )
				{
					dose3++;
				}
				else
				{
					dose3 = dose3;
				}
			}
			
		}
		else
		{
			dose0++;
		}
		
		count++;
	}
	
	printf( "The total number of students who has not taken a single vaccine dose : %d\n", dose0 );
	printf( "The total number of students who has taken only one vaccine dose : %d\n", dose1 );
	printf( "The total number of students who has taken only two vaccine doses : %d\n", dose2 );
	printf( "The total number of students who has taken all three vaccine doses : %d\n\n", dose3 );
	
	printf( "Total number of students who have taken Sinopharm : %d\n", sinopharm );
	printf( "Total number of students who have taken Sinopharm : %d\n", pfizer );
	printf( "Total number of students who have taken Sinopharm : %d\n", moderna );
	
	return 0;
}
