#include <stdio.h>
char repeat(char *,int);
void main()
{
	char s[20],k;
	int i;
	printf("enter the string");
	scanf("%[^\n]s",s);
	for(i=0;s[i];i++);
	k=repeat(s,i);
	printf("the character is %c",k);
}
char repeat(char *s,int n)
{
	int count,i,j;
	for(i=0;s[i];i++)
	{
		count=0;
		for(j=i+1;s[j];j++)
			if(s[i]==s[j])
				count++;
		if(count==(n/2))
			return s[i];
	
	}
}
	
