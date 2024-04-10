// This program calculate and display the electricity bill according to the table given.

#include <stdio.h>
float calBill( int type, int units );

int main( void )
{
	int cusType, noUnits;
	float total = 0;
	
	printf( "Type 1 : Three Phase electricity for residential areas\n" );
	printf( "Type 2 : Single phase electricity for residential areas\n" );
	printf( "Type 3 : Three phase electricity for commercial areas\n" );
	
	printf( "Enter Electricity usage type : " );
	scanf( "%d", &cusType );
	
	printf( "Enter number of units : " );
	scanf( "%d", &noUnits );
	
	if( noUnits < 0 )
	{
		printf( "Invalid unit count\n" );
		return -1;
	}
	
	total = calBill ( cusType, noUnits );
	
	printf( "The total cahtege for electricity usage : %.2f\n", total  );
	return 0;	
	
}
float calBill( int type, int units )
{
	if( type == 1 )
	{
	    if( units <= 60 && units >= 0 )
		{
			return units * 25;	
		}
		else if( units <= 80 )
		{
			return units * 50;
		}
		else if( units <= 100 )
		{
			return units * 90;
		}
		else if( units <= 150 )
		{
			return units * 110;
		}
		else if( units <= 180 )
		{
			return units * 150;
		}
		else
		{
			return units * 180;
		}
	}
	else if( type == 2 )
	{
		if( units <= 60 && units >= 0 )
		{
			return units * 35;	
		}
		else if( units <= 80 )
		{
			return units * 75;
		}
		else if( units <= 100 )
		{
			return units * 100;
		}
		else if( units <= 150 )
		{
			return units * 130;
		}
		else if( units <= 180 )
		{
			return units * 165;
		}
		else
		{
			return units * 220;
		}
	}
	else if( type ==3 )
	{
		if( units <= 60 && units >= 0 )
		{
			return units * 45;	
		}
		else if( units <= 80 )
		{
			return units * 85;
		}
		else if( units <= 100 )
		{
			return units * 110;
		}
		else if( units <= 150 )
		{
			return units * 140;
		}
		else if( units <= 180 )
		{
			return units * 185;
		}
		else
		{
			return units * 235;
		}
	}
	else
	{
		return 0;
	}
}
