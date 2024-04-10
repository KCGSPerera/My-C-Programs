#include<stdio.h>
int main (void)

{
char count;
do 
{
	int itemcode;
	int quntity;
	char customertype;
	float discount, total;
	
	printf( "Item code: " );
	scanf( "%d", &itemcode );
	
	printf( "Quntity: ");
	scanf( "%d", &quntity );
	
	if ( itemcode == 1)
	{
		total = (float)530*quntity;
	}
	
	else if ( itemcode == 2 )
	{
		total = (float)300*quntity;
	}
	
	else if( itemcode == 3 )
	{
		total = (float)950*quntity;
	}
	 else
	 {
	 	printf("invalid Item");
	 	return 0;
	 }
	
	
	printf( "Customer Type: ");
	scanf("%*c%c", &customertype);
	
	if ( customertype == 'L')
	{
		discount = total*(25/100.0);
		printf("Discount: %.2f", discount);
	}
	
	else if( customertype == 'N')
	{
		discount = total*(float)(5/100.0);
		printf("Discount: %.2f", discount);
	}
	else
	{
		printf("Invalid customer type");
		return 0;
	}
	
	total = total - discount;
	printf("\nTotal amount: %.2f",total);
	printf("\nDo you need to continue(Y/N): ",count);
	scanf("%*c%c", &count);	
} while ( count == 'Y' || count == 'y');
return 0;
}


