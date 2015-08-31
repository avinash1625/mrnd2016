#include <stdio.h>
int strpalin(char *,int );
void main()
{
char s[10];
int i,k;
printf("enter the string");
scanf("%[^\n]s",s);
for(i=0;s[i];i++);
k=strpalin(s,i-1);
if(k==0)
	printf("the given string is palindrome");
else
	printf("the given string is not a palindrome");
}
int strpalin(char *s,int n)
{
	int i,j,flag=0;
	for(i=n,j=0;j<i;j++,i--)
		if(s[j]!=s[i])
		{
			flag=1;
			break;
		}
	return flag;
}


