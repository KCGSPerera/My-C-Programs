#include <stdio.h>
int main ( void )
{
int packageNo;
int price;
char type;
int perPerson;
int guests;
float amount;

printf("Package No : ");
scanf("%d", &packageNo);

if(packageNo == 1)
{


printf("Food type(S/D/L) : ");
scanf("%c%*c", &type);

if( type == 'D')
{   
perPerson = 3000.00;
price = 15000.00;

printf("Number of guests : ");
scanf("%d",&guests);

amount = price + guests * perPerson;
printf("Bill Amount :Rs.%.2f", amount); 
}

else if( type == 'S')
{   
perPerson = 1500.00;
price = 15000.00;

printf("Number of guests : ");
scanf("%d",&guests);

amount = price + guests * perPerson;
printf("Bill Amount :Rs.%.2f", amount); 

}

else if( type = 'L')
{   
perPerson = 2500.00;
price = 15000.00;

printf("Number of guests : ");
scanf("%d",&guests);

amount = price + (guests * perPerson);
printf("Bill Amount :Rs.%.2f", amount); 

} 

else 
{
printf("User enter an invalid food type");
}
}


else if(packageNo = 2)
{


printf("Food type(S/D/L) : ");
scanf("%c%*c", &type);

if( type = 'S')
{   
perPerson = 1500.00;
price = 30000.00;

printf("Number of guests : ");
scanf("%d",&guests);

amount = price + (guests * perPerson);
printf("Bill Amount :Rs.%.2f", amount); 
}

else if( type = 'D')
{   
perPerson = 3000.00;
price = 30000.00;

printf("Number of guests : ");
scanf("%d",&guests);

amount = price + (guests * perPerson);
printf("Bill Amount :Rs.%.2f", amount); 

}

else if( type = 'L')
{   
perPerson = 2500.00;
price = 30000.00;

printf("Number of guests : ");
scanf("%d",&guests);

amount = price + guests * perPerson;
printf("Bill Amount :Rs.%.2f", amount); 

} 

else 
{
printf("User enter an invalid food type");
}

} 

else 
{
printf("User enter an invalid package number");
} 
return 0;
}

