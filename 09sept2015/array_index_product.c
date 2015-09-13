#include <stdio.h>
#include <stdlib.h>
void product1(int *,int,int *);/*LMA  and RMA logic*/
void product2(int *,int,int *);/*O(n^2) logic*/
void product3(int *,int,int *);/*O(n) logic using '/'operator*/
void main()
{
	int a[100],i,n,b[100]={0};
	printf("enter the no.of elements\n");
	scanf("%d",&n);
	printf("enter elements of array are\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nthe elements of array are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	product1(a,n,b);/*LMA and RMA logic*/
	printf("\nthe product is\n");
	for(i=0;i<n;i++)
		printf("%d\t",b[i]);
}
void product1(int *a,int n,int *b)
{
	int mul=1,i;
	b[n-1]=a[n-1];
	for(i=n-2;i>0;i--)
		b[i]=b[i+1]*a[i];
	b[0]=b[1];
	for(i=0;i<n-1;i++)
	{
		mul=mul*a[i];
		b[i+1]=b[i+2]*mul;
	}
	b[i]=mul;
	return;
}
void product2(int *a,int n,int *b)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		b[i]=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
				b[i]*=a[j];
		}
	}
	return;
}
void product3(int *a,int n,int *b)
{
	int i,mul=1,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			mul*=a[i];
		else
			count++;
		if(count==2)
			return;
	}
	for(i=0;i<n;i++)
	{
		if(count==1)
		{
			if(a[i]!=0)
				b[i]=0;
			else
				b[i]=mul;
		}
		else
			b[i]=mul/a[i];
	}
	return;
}




