#include <stdio.h>
#include <string.h>
int permutation(char *,char *);
void main()
{
	char s[10],a[10];
	int k;
	printf("enter the string1");
	scanf("%s",s);
	printf("enter the string2");
	scanf("%s",a);
	k=permutation(s,a);
	if(k==0)
		printf("not a permutation");
	else
		printf("permutation");
}
int permutation(char *s,char *a)
{
	int i,j,k=0,x,y;
	x=strlen(s);
	y=strlen(a);
	if(x!=y)
		return 0;
	for(i=0;s[i];i++)
		for(j=0;a[j];j++)
			if(s[i]==a[j])
				k++;
			
		if(k==x)
			return 1;
		else
			return 0;
	
}
