#include<stdio.h>
int findBonusTimes( char empCategory );
float findBonus(float salary , int noOfTimes );
int main( void )
{
	char empCategorys;
	float bonuss,salarys;
	int noOfTimess;
	
	printf("\nEnter the salary :");
	scanf("%f", &salarys);
	
	printf("\nEnter the employee category(A/B/C/D/E) :");
	scanf("%*c%c", &empCategorys);
	
	noOfTimess =	findBonusTimes( empCategorys );
	bonuss =	findBonus( salarys , noOfTimess );
	
	printf("\nBonus is : %.2f", bonuss);
		
	return 0;
}
int findBonusTimes( char empCategory )
{	
	
	if( empCategory == 'A')
	{
		return 1;
	}
	
	else if( empCategory == 'B')
	{
		return 2;
	}
	
	else if( empCategory == 'C' || empCategory == 'D' || empCategory == 'E')
	{
		return 3;
	}
	
	else
	{
		printf("\nUser input invalid employee category");
		
		return 0;	
	}
	
}

float findBonus(float salary , int noOfTimes )
{
	return noOfTimes * salary;
}
