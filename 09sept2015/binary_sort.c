#include <stdio.h>
#include <stdlib.h>
void sort1(int *,int);/*swapping logic*/
void sort2(int *,int);/*bubble sort */
void sort3(int *,int);/*count zeroes*/
void sort4(int *,int);/*count ones by adding all array elements*/
void main()
{
	int a[100],n,i;
	printf("enter  number of elements\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]!=0 && a[i]!=1)
		{
			printf("error input should be only 0 or 1 program terminated\n");
			exit(0);
		}
	}
	printf("\nthe elements of array before sorting\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	sort1(a,n);/*swapping logic*/
	printf("\nthe elements of array after sorting\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void sort1(int *a,int n)
{
	int i=0,j=n-1;
	while(i<j)
	{
		if(a[i]==1)
		{
			if(a[j]==0)
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
				i++;
				j--;
			}
			else
				j--;
		}
		else
			i++;
	}
	return;
}
void sort2(int *a,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	return;
}
void sort3(int *a,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			count ++;
	}
	for(i=0;i<n;i++)
	{
		if(count>0)
		{
			a[i]=0;
			count--;
		}
		else
			a[i]=1;
	}
	return;
}
void sort4(int *a,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		count+=a[i];
	}
	for(i=n-1;i>0;i--)
	{
		if(count>0)
		{
			a[i]=1;
			count--;
		}
		else
			a[i]=0;
	}
	return;
}

