#include <stdio.h>
#include <stdlib.h>
int power(int,int);
int modulo(int,int,int);
void main()
{
	int x,y,a;
	printf("enter the values of x,y,a\n");
	scanf("%d%d%d",&x,&y,&a);
	if(a==0){
        printf("invalid input division by zero not possible\n");
        exit(0);}
	printf("power(%d,%d)modulo(%d) is %d",x,y,a,modulo(x,y,a));

}
int modulo(int x,int y,int a)
{
    if(y==0)
        return x%a;
	int i,f=0,temp=0,b[16]={0};
	b[0]=x%a;
	for(i=1;i<16;i++)
		b[i]=(b[i-1]*b[i-1])%a;
	for(i=15;i>=0;i--)
	{
		if(f+power(2,i)<=y)
		{
			f+=power(2,i);
			if(temp==0)
				temp=b[i];
			else
				temp=(temp%a *(b[i]%a))%a;
		}
	}
	return temp;
}
int power(int x,int y)
{
    int i,f=1;
    if(y==0)
        return 1;
    for(i=0;i<y;i++)
        f=f*x;
    return f;
}


