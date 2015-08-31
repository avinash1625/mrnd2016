#include <stdio.h>
int n_fib(int);
void main()
{
	int n,k;
	printf("enter the value of n");
	scanf("%d",&n);
	k=n_fib(n);
	printf("nt h fibonacci number is %d",k);
}
int n_fib(int n)
{
	int first=0;
	int second=1;
	while(n>0)
	{
		next=first+second;
		first=second;
		second=next;
		n--;
	}
	return next;
}
	
	
	