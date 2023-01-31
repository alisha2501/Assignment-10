//to find the factorial of a number using recursion//
#include<stdio.h>
int factorial(int num);

int main()
{
	int num, i;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("The factorial of %d is %d \n",num, factorial(num));
	return 0;
}
int factorial(int num)
{
	if(num!=1)
	{
		return num*factorial(num-1);
	}
	else
	{
	    return 1;
	}
}
