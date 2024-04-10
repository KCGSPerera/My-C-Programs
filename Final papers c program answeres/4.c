#include <stdio.h> 
 
float calAdditinalCharges (int orderType , float subTotal); float calTotalBill(float 
subTotal , float charges); 
 
//function main program execution int 
main (void) 
{ 
 int orderType ; 
 float subTotal , charges ; 
 
 printf("Enter sub total : "); 
scanf("%f", &subTotal); 
 
 printf("Enter Order type : "); 
scanf("%d", &orderType); 
 
 charges = calAdditinalCharges ( orderType , subTotal); 

 
 printf("\n Total bill amount : %.2f", calTotalBill( subTotal , charges)) ; 
 
 return 0 ; 
} // end function main 
 
float calAdditinalCharges (int orderType , float subTotal) 
{ 
 float charge ; if(orderType == 1 
) 
 { 
 charge = (subTotal / 100 * 12.0) + (subTotal / 100 * 10.0) ; 
 return charge ; 
 } 
 else if (orderType == 2 ) 
 { 
 charge = (subTotal / 100 * 12.0) ; 
 return charge ; 
 } 
 else if (orderType == 3 ) 
 { 
 charge = (subTotal / 100 * 12.0) + (subTotal / 100 * 5.0) ; 
 return charge ; 
 } 
else 
 { 
 printf("Oder type invalid!! Try again\n\n'"); 
 } 
} 
 
float calTotalBill(float subTotal , float charges) 
{ 
 return subTotal + charges ; 
}
