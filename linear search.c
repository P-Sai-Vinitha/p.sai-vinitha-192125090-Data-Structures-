#include<stdio.h>
#include<conio.h>
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
	int a;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	for(int i=0;i<a;i++)
	{
		if(key==arr[i])
	    {
		    printf("%d found at position %d",key,i);
		    return 0;
	    }
	}
	printf("no such element found");
}