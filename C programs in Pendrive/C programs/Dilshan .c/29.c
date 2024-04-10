#include<stdio.h>
float calAdditionalCharges( int orderType , float subTotal );
float calTotalBill( float subTotal , float charges);
main ( void )
{
	int oType;
	float sTotal,sdCharge;
	float amount;
	
	printf("Enter sub Total :");
	scanf("%f", &sTotal);
	
	printf("Enter order Type :");
	scanf("%d", &oType);
	
	sTotal = calAdditionalCharges( oType,sTotal );
	sdCharge = calTotalBill( sTotal,sdCharge);
	 
	amount = sdCharge + sTotal; 
	printf("Total bill Amount is :%.2f\n",amount);
	
	return 0;
}
float calAdditionalCharges( int orderType , float subTotal )
{
	float charges;
		
	if(orderType == 1)
	{
		charges = (subTotal * 12/100.0) + (subTotal * 10/100.0);
		return charges;
	}
	else if( orderType == 2)
	{
		charges = ( subTotal * 12/100.0);	
		return charges;
	}
	else if( orderType == 3)
	{
		charges = (subTotal * 12/100.0) + (subTotal * 5/100.0);
		return charges;
	}
	else
	{
		printf(" User input invalid order type ");
		return 0;
	}
}
float calTotalBill( float subTotal , float charges)
{
	return charges + subTotal; 
}
