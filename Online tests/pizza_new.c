#include <stdio.h>
int main( void )
{
	int option, number, toppingOption;
	char size, topping;
	float total = 0;
	
	printf( "Enter the pizza option ( 1 / 2 / 3 ) : " );
	scanf( "%d%*c", &option );
	
	if ( option == 1)
	{
		printf( "Size of the pizza ( P / M / L ) : " );
		scanf( "%c%*c", &size );
		
		if( size == 'P' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 560 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
								
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
					
				}else
				{
					printf( "Invalid user input" );
				}
				
			}
			
		}
		else if( size == 'M' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 920 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
										
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}
				else
				{
					printf( "Invalid user input" );
				}
			}
		}
		else if( size == 'L' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 1800 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
									
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else
				{
					printf( "Invalid user input" );
				}
			}
		}
		else
		{
			printf( "Invalid user input" );
		}
						
	}
	else if( option == 2 )
	{
		printf( "Size of the pizza ( P / M / L ) : " );
		scanf( "%c%*c", &size );
		
		if( size == 'P' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 340 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
							
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}else
				{
					printf( "Invalid user input" );
				}
				
			}
			
		}
		else if( size == 'M' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 660 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
									
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}else
				{
					printf( "Invalid user input" );
				}
			}
		}
		else if( size == 'L' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 1300 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}else
				{
					printf( "Invalid user input" );
				}
			}
		}
		else
		{
			printf( "Invalid user input" );
		}
						
	}
	else if( option == 3 )
	{
		printf( "Size of the pizza ( P / M / L ) : " );
		scanf( "%c%*c", &size );
		
		if( size == 'P' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 760 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
				
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
					
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
					
				}else
				{
					printf( "Invalid user input" );
				}
				
			}
			
		}
		else if( size == 'M' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 1100 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
					
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
					
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
					
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}else
				{
					printf( "Invalid user input" );
				}
			}
		}
		else if( size == 'L' )
		{
			printf( "Number of pizzas : " );
			scanf( "%d%*c", &number );
			
			total = 2100 * number;
			
			printf( "Do you need any extra toppings ( y / n ) :" );
			scanf( "%c%*c", &topping );
			
			while( topping != 'n' )
			{
				printf( "Enter topping option ( 1 / 2 / 3 / 4 ) : " );
				scanf( "%d%*c", &toppingOption );
				
				if( toppingOption == 1 )
				{
					total = total + ( 320 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
										
				}
				else if( toppingOption == 2 )
				{
					total = total + ( 140 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
								
				}
				else if( toppingOption == 3 )
				{
					total = total + ( 130 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}
				else if( toppingOption == 4 )
				{
					total = total + ( 150 * number );
					
					printf( "Do you need any extra toppings ( y / n ) :" );
					scanf( "%c%*c", &topping );
					
						
				}else
				{
					printf( "Invalid user input" );
				}
			}
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
	
	printf( "The total amount is %.2f", total );
	
	return 0;
}
