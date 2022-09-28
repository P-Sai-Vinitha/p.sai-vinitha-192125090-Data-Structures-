#include<stdio.h>
#include<conio.h>
void main( )
{
 int a[10],i,j,k,n;

 printf("How many elements you want to sort?\n");
 scanf("%d",&n);
 printf("\nEnter the Elements into an array:\n");
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {
 k=a[i];
 for(j= i-1; j>=0 && k<a[j]; j--)
 a[j+1]=a[j];
 a[j+1]=k;
 } printf("\n\n Elements after sorting: \n");
 for(i=0;i<n;i++)
 printf("%d\n", a[i]);
 getch( );
}

SAMPLE OUTPUT:
NAME-pandeti sai vinitha
REG_NO:192125090

How many elements you want to sort?
5

Enter the Elements into an array:
3
2
1
3
4


 Elements after sorting:
1
2
3
3
4
