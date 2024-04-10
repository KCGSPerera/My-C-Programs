#include <stdio.h>


//function declaration
float getDiscountedUnitPrice(int itemType, float price);
float calcPrice(int itemType, float quantity);

int main(void)//starting main function
{
	//declaring variables
	int type, discount, quantity;
	float newPrice;
	float price;


	printf("Enter product code: ");
	scanf("%d", &type);
	printf("Enter the quantity : ");
	scanf("%d", &quantity);

	//calling functions
	price = calcPrice(type, quantity);

	discount = getDiscountedUnitPrice(type, price);

	newPrice = price - discount;

	printf("New price : %.2f", newPrice);

	return 0;
}//end main function

float getDiscountedUnitPrice(int itemType, float price) //implementation of function getDiscountedUnitPrice
{
	int discount;

	if(itemType == 1)
	{
		discount = (price * 0.075);
	}
        else if (itemType == 4)
        {
            discount = (price * 0.05);
        }
            else if(itemType == 5)
            {
                discount = (price * 0.025);
            }

	return discount;
}//end of function getDiscountedUnitPrice

float calcPrice(int itemType, float quantity) //implementation of function calcPrice
{
	float price;

	if (itemType == 1)
	price = (300.00*quantity);

		else if (itemType == 2)
		price = (250.00*quantity);

			else if (itemType == 3)
			price = (550.00*quantity);

				else if (itemType == 4)
				price = (120.00*quantity);
					else
						price = (240.00*quantity);

	return price;
}//end function calcPrice
