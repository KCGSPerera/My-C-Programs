#include<stdio.h>
int calSum( int num1 , int num2 );
int main( void )
{
	int n1,n2,sum=0;
	
	printf("Enter the number 1 :");
	scanf("%d", &n1);
	
	printf("Enter the number 2 :");
	scanf("%d", &n2);

	sum = calSum(n1,n2);
	printf("The summation is : %d", sum);

	return 0; 
}
int calSum( int num1 , int num2 )
{
	int result;
	result = num1 + num2;
	return result;
}
