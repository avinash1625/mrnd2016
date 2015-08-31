#include <stdio.h>
void tuples(int *,int ,int );
void main()
{
	int a[10],n,k,i;
	printf("enter the no.elements");\
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the sum of tuple");
		scanf("%d",&k);
	tuples(a,n,k);
}
void tuples(int *a,int n,int k)
{
	int i,j;
	for(i=0;i<n;i++)

		for(j=i+1;j<n;j++)

			if(a[i]+a[j]==k)
				printf("{%d,%d}",a[i],a[j]);
}
