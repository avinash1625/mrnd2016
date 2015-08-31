#include <stdio.h>
void largest(int *,int,int *,int * );
void main()
{
	int a[10],n,i,max1,max2;
	printf("enter the no.of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	largest(a,n,&max1,&max2);
	printf("%d\t%d",max1,max2);
}
void largest(int *a,int n,int *max1,int *max2)
{
	int i,temp;
	*max1=a[0];
	*max2=a[0];
	for(i=1;i<n;i++){
		if(a[i]>*max1)
			*max1=a[i];
		if(*max1>*max2)
		{
			temp=*max1;
			*max1=*max2;
			*max2=temp;
		}
	}
}
