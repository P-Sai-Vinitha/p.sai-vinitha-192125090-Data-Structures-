#include<stdio.h>
#include<conio.h>
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
	int nt=0,n1=1,n2=0,r;
	printf("enter the number:");
	scanf("%d",&r);
	for(int i=0;i<r;i++)
	{
		printf("%d ",nt);
		nt=n1+n2;
		n1=n2;
		n2=nt;
	}
}

SAMPLE OUTPUT:
NAME-pandeti sai vinitha
REG_NO:192125090

enter the number:6
0 1 1 2 3 5
