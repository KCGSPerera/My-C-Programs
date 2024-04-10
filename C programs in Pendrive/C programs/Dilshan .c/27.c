#include<stdio.h>
int calSum( int num1 , int num2 );
main (void)
{
	int n1,n2;
	float sum=0;
	
	printf("Enter the number 1 : ");
	scanf("%d", &n1);
	
	printf("Enter the number  : ");
	scanf("%d", &n2);
	
	sum = calSum( n1,n2 );
	
	printf("The summation is : %.2f", sum);
	
	return 0;
}
int calSum( int num1 , int num2 )
{
	float result;
	result = num1 + num2;
	return result;	
}

