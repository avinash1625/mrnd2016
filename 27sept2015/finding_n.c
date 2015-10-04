#include <stdio.h>
int find_n(int *);
void main()
{
	int a[100],n,i;
	printf("enter the number of elements i.e 2n+2 where n is length of sorted array\n");
	scanf("%d",&n);
	printf("enter the elements in sorted order upto n and there after enter two elements such that a[n]<a[n+1]>a[n-1]and n zeroes\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    n=find_n(a);
	printf("n=%d",n);
}
int find_n(int *a)
{
	int i=1,n=0,temp=0;
	while(1)
	{
		if(((a[i]>a[i-1])&&(a[i]<a[i+1])&&(a[i]!=0)))
			i=i*2;
        else
            break;
	}
	n=i/2;
	temp=n;
	while(temp!=0)
	{
		if(((a[n+temp/2]>a[n+temp/2-1])&&(a[n+temp/2]<a[n+temp/2+1])&&a[n+temp/2!=0]))
		{
		    n=n+temp/2;
			temp=temp/2;
		}
		else if((a[n+temp/2]>a[n+temp/2-1])&&(a[n+temp/2]>a[n+temp/2+1])){
            n=n+temp/2;
			break;}
        else
            temp=temp/2;
	}
	if(temp==0)
        return n+1;
    else
        return n;
}
