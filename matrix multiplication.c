#include<stdio.h>
#include<conio.h>
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
	int first[10][10],second[10][10],mul[10][10],m,n;
	printf("enter the number of rows and colums:");
	scanf("%d %d",&m,&n);
	printf("enter the first matrix elements:");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	printf("enter the second matrix elements:");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	printf("multiplication of matrix:");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			mul[i][j]=first[i][j]*second[i][j];
			printf("%d\n",mul[i][j]);
		}
	}
	return 0;
}