#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("NAME-pandeti sai vinitha\n");
	printf("REG_NO:192125090");
	printf("\n\n");
    int a[100];
    int element,i,loc,size,n,j,choice;
    printf("C Program to Insert and Delete an Element in an Array using switch case\n");
    printf("1. Inserting an Element in an Array\n");
    printf("2. Deleting an Element in an Array\n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
    case 2:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
    default:
        printf("Wrong choice, Please try again later");
    }
    return 0;
}

SAMPLE OUTPUT:
NAME-pandeti sai vinitha
REG_NO:192125090

C Program to Insert and Delete an Element in an Array using switch case
1. Inserting an Element in an Array
2. Deleting an Element in an Array
Select your choice : 1
Enter the size of an array
5
Enter 5 array elements
1
2
3
4
5
List before Insertion: 1 2 3 4 5
Enter an element to insert
6
Enter a position to insert an element 6
5
List after Insertion: 1 2 3 4 6 5
