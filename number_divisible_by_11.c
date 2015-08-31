#include <stdio.h>
int divisible(int n);
void main()
{
	int n,k;
	printf("enter the number:");
	scanf("%d",&n);
	k=divisible(n);
	if(k==0)
		printf("the given number is not divisible by 11");
	else
		printf("divisible");
}
int divisible(int n)
{
	int d,i=0,s=0,f=0,flag=0;
	if(n==0)
		return flag;
	while(n>0)
	{
			d=n%10;
				if(i%2==0)
					s=s+d;
				else
					f=f+d;
		n=n/10;
		i++;
	}
	//for(j=0;j<i;j=j+2)
	//	s+=a[j];
	//for(k=1;k<i;k=k+2)
	//	f+=a[k];
	if(s==f)
		return flag=1;
	else
		return	divisible(s-f);
}	
