#include <stdio.h>
#include <ctype.h>
int strlength(char *);
void main()
{
char s[10];
int n;
printf("enter the string \n");
scanf("%[^\n]s",s);
n=strlength(s);
printf("the length of the string is %d",n);
}
int strlength(char *s)
{
	int i;
	for(i=0;s[i];i++);
	return i;
}
