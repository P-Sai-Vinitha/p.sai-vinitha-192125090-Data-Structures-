#include<stdio.h>
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
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
			    arr[i]=arr[j];
			    arr[j]=temp;
			}
		}
	}
	
	
	int s=0,e=a-1,mid,key;
	scanf("%d",&key);
		while(s<e)
     	{
	     	mid=(s+e)/2;
	    	if(arr[mid]==key)
		    {
		    	printf("%d",mid);
			    break;
		    }
		    else if(arr[mid]>key)
		    {
			    e=mid;
		    }
		    else if(arr[mid]<key)
		    {
			    s=mid;
		    }
	    }
	
}

SAMPLE OUTPUT:
NAME-pandeti sai vinitha
REG_NO:192125090

5
1 2 4 3 5
4
3
