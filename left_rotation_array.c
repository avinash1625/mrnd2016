#include<stdio.h>
void rotate(int *,int ,int );
void main()
{
	int a[10],n,r,i;
	printf("enter the no.of elements\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the no.of rotations\n");
	scanf("%d",&r);
	rotate(a,n,(r%n));
	printf("the resultant array after %d rotations is \n:",r);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void rotate(int *a,int n,int r)
{
	int i,temp;
	while(r>0)
	{
		temp=a[n-1];
		for(i=n-1;i>=1;i--)
			a[i]=a[i-1];
		a[0]=temp;
		r--;
	}
}
	
	
	
	
