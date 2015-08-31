
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int xstrcmp(char *,char *);
void main()
{
	char s1[10],s2[10];
	int k;
	printf("enter the first string\n");
	scanf("%s",s1);
	printf("enter the second string \n");
	scanf("%s",s2);
	k=xstrcmp(s1,s2);
//	printf("the greatest number is \n");
	if(k==-1)
		printf("numbers are equal");
	if(k==0)
		printf("%s",s1);
	else
		printf("%s",s2);
}
int xstrcmp(char *s,char *a)
{
	int i=0,j=0,temp1,temp2;
	while(s[i]=='0')
		i++;
	while(a[j]=='0')
		j++;
//	printf("%d\t%d",i,j);
	temp1=strlen(s);
	temp2=strlen(a);
	if((temp1-i)>(temp2-j))
		return 0;
	else if((temp1-i)<(temp2-j))
		return 1;
		
			for(;s[i];i++,j++){
				//temp1=toascii(s[i]);
				//temp2=toascii(a[i]);
				if(s[i]>a[j])
					
					return 0;
				else if(s[i]<a[j])
					return 1;
			}
		return -1;		
}
