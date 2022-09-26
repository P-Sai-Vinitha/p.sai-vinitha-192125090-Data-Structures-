#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
	int n,i;
	printf("number of element in series:");
	scanf("%d",&n);
	printf("fibinocci series is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",fibonacci(i));
	}
	getch();
}
int fibonacci(int i)
{
	if(i==0)
	{
		return 0;
	}
	else if(i==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(i-1)+fibonacci(i-2));
	}
}

SAMPLE OUTPUT:
NAME-pandeti sai vinitha
REG_NO:192125090

number of element in series:6
fibinocci series is:0 1 1 2 3 5
