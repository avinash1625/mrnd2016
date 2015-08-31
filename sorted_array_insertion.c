#include <stdio.h>
#define max 100
void insert(int *,int ,int);
void main()
{
	int a[max],n,k,i;
	printf("enter the no of numbers u want to insert\n");
	scanf("%d",&n);
	printf("enter elements in sorted order\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("the number to be inserted");
	scanf("%d",&k);
	insert(a,n,k);
	printf("the resultant array is\n");
	for(i=0;i<=n;i++)
		printf("%d\t",a[i]);
}
void insert(int *a,int n, int k)
{
	int i=0,j;
	while(a[i]<k)
	{
		i++;
	}
	for( j=n;j>=i;j--)
		a[j+1]=a[j];
	a[i]=k;
	
}	
			
	
