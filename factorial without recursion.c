#include<stdio.h>
#include<conio.h>
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
	int a,fact=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",a,fact);
	return 0;
}

SAMPLE OUTPUT:
enter number:6
factorial of 6 is 720
