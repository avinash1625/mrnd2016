#include <stdio.h>
#include <ctype.h>
int sum(int);
void main()
{
	int n,s=0;
	printf("enter the number \n");
	scanf("%d",&n);
	s=sum(n);
	printf("the sum is %d",s);
}
int sum(int n)
{
	int d,s=0;
	while(n>0)
	{
	d=n%10;
	s=s+d;
	n=n/10;
	}
	return s;
}
