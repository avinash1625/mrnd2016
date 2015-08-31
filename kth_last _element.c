#include <stdio.h>
int k_last(int *,int);
void main()
{
	char a[10],i;
	int k;
	printf("enter the string");
	scanf("%s",a);
	i=k_last(a,k);
	printf("the kth character from last is %c",i);
}
int k_last(char *a,int k)
{
	int i,j;
	for(i=0,j=k;a[j];i++,j++);
	return a[i];
}
		
		