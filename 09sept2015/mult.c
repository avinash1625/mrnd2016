#include <stdio.h>
int mult(int,int);
void main()
{
	int a,b,r;
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	if(b<0)
    {
        if(a<0)
            r=mult(-a,-b);
        else
            r=mult(b,a);
	}
    else
        r=mult(a,b);
	printf("product of %d and %d is %d\n",a,b,r);
}
int mult(int a,int b)
{
	int r=0;
	while(b!=0)
	{
		if(b&1)
			r=r+a;
		a=a<<1;
		b=b>>1;
	}
	return r;
}
