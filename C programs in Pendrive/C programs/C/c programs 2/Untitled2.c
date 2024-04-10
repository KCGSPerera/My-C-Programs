#include<stdio.h>
int main (void)
{
char count=0;

do 
	{
	char insurancetype, type;
	int numberofchildren;
	float monthlypre;
	
	printf( "\nEnter Your Insurance Type ( Arogya(A), Niduk(N), Digasiri(D), Suwawewa(S)): ");
	scanf( "%c%*c", &insurancetype);
	
	if ( insurancetype == 'A') 
	{
		printf( "Family or Individual [Family(F), Individual(I)]: ");
		scanf( "%c%*c", &type );
		
		if ( type == 'F' )
		{
			printf ( "Enter Number of children: ");
			scanf( "%d", &numberofchildren);
			
			if ( numberofchildren > 2 )
				{
					monthlypre = 5200.0 + (5200.0*10/100.0); 
					printf("Montly Premium: %.2f", monthlypre);
				}
			
				else
					{ 
						monthlypre = 5200;
						printf("Montly Premium: %.2f", monthlypre);
					}
		}
		else if ( type == 'I')
			{	
				monthlypre = 4500;
				printf("Montly Premium: %.2f", monthlypre);
			}
	}
	else if ( insurancetype == 'N') 
	{
		printf( "Family or Individual [Family(F), Individual(I)]: ");
		scanf( "%c%*c", &type );	
			if ( type == 'F' )
		{
			printf ( "Enter Number of children: ");
			scanf( "%d", &numberofchildren);
			
			if ( numberofchildren > 2 )
			{
				monthlypre = 4300.0 + (4300.0*10/100.0); 
				printf("Montly Premium: %.2f", monthlypre);
			}
			else
				{ 
					monthlypre = 4300;
					printf("Montly Premium: %.2f", monthlypre);
				}			
		}
			else if ( type == 'I')
		{	
			monthlypre = 3100;
			printf("Montly Premium: %.2f", monthlypre);
		}
	}
	else if ( insurancetype == 'D') 
	{	
		printf( "Family or Individual [Family(F), Individual(I)]: ");
		scanf( "%c%*c", &type );
			
		if ( type == 'F')
		{
			printf ( "Enter Number of children: ");
			scanf( "%d", &numberofchildren);
				
			if ( numberofchildren > 2 )
				{
					monthlypre = 4800 + (4800.0*10/100.0); 
					printf("Montly Premium: %.2f", monthlypre);
				}
		else
				{ 
					monthlypre = 4800;
					printf("Montly Premium: %.2f", monthlypre);
				}
		}
			else if ( type == 'I')
			{	
				monthlypre = 3600;
				printf("Montly Premium: %.2f", monthlypre);
			}	
	}		
	else if ( insurancetype == 'S')
	{
		printf( "Family or Individual [Family(F), Individual(I)]: ");
		scanf( "%c%*c", &type );
		
		if ( type == 'F')
		{
			printf ( "Enter Number of children: ");
			scanf( "%d", &numberofchildren);
			
			if ( numberofchildren > 2 )
				{
					monthlypre = 3800 + (3800.0*10/100.0); 
					printf( "Montly Premium: %.2f", monthlypre );
				}
		else
				{ 
					monthlypre = 3800;
					printf( "Montly Premium: %.2f", monthlypre );
				}	
		}
				else if( type == 'I')
				{	
					monthlypre = 3300;
					printf( "Montly Premium: %.2f", monthlypre );
				}	
	}
	else 	
		{ 
			printf("Invalid Insurance Type");
			return 0;
		}	
	
	printf( "\n\nDo you want to contionue(Y/N): ");
	scanf( "%c%*c", &count);
	
	}while ( count != 'Y' || count != 'y'); 
		
	return 0;
}


