#include<stdio.h>
#include<conio.h>
long int mul(int n);
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,mul(n));
	return 0;
}
long int mul(int n)
{
	if(n>=1)
	{
		return n*mul(n-1);
	}
	else
	{
		return 1;
	}
}

SAMPLE OUTPUT:
NAME-pandeti sai vinitha
REG_NO:192125090
	
enter number:6
factorial of 6 is 720
