#include<stdio.h>
#include<stdlib.h>
#include<math.h>



float getDiscountedUnitPrice(int itemType)
{
   if(itemType==1)
   return 0.925*300;
   if(itemType==2)
   return 250;
   if(itemType==3)
   return 550;
   if(itemType==4)
   return 120*0.95;
   if(itemType==5)
   return 240*0.975;
}

float calcPrice(int itemType,int quantity)
{
    return getDiscountedUnitPrice(itemType)*quantity;
}

int main(){
    float totPrice=0;
    int totalQuantity=0,itemType,quantity,i=0;
    
    
    while(i==0)
    {
        printf("Enter item type: ");
        scanf("%d", &itemType);
        if(itemType==-1)
        i=1;
        else if(itemType!=1&&itemType!=2&&itemType!=3&&itemType!=4&&itemType!=5)
        printf("Invalid item type\n");
        else
        {
            printf("Enter Quantity: ");
            scanf("%d", &quantity);
            totalQuantity=totalQuantity+quantity;
            totPrice=totPrice+calcPrice(itemType,quantity);
        }
    }
    
    printf("Total Amount (Rs) : %.2f",totPrice);



}
