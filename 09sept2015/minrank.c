#include <stdio.h>
#include <stdlib.h>
int minrank(int *,int);
int fact(int);
void main()
{
	int a[10],i,n,k;
	printf("enter the number\n");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
	}
	 k=minrank(a,i-1);
	printf("minrank is %d\n",k);
}
int fact(int n)
{
	int i,f=1;
	for(i=n;i>0;i--)
		f=f*i;
	return f;
}
int minrank(int *a,int n)
{
	int i,j,count,s=0,k=n;
	for(i=n;i>=0;i--)
	{
		count=0;
		for(j=i-1;j>=0;j--)
		{
			if(a[i]>a[j])
				count++;
		}
		s=s+count*fact(k);
		k--;
	}
	return s;
}
	
	
