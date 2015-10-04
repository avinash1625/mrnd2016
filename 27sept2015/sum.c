#include <stdio.h>
void strsum(char *,char *);
int valid(char *);
void main()
{
	char s[100],p[100];
	int i,k;
	printf("enter the strings of equal length u want to add\n");
	scanf("%s%s",s,p);
	k=valid(s);
	if(k==0){
		printf("invalid input");
		exit(0);}
	k=valid(p);
	if(k==0){
		printf("invalid input");
		exit(0);}
	strsum(s,p);
}
int valid(char *s)
{
	int i;
	for(i=0;s[i];i++)
		if(!((s[i]>='0')&&(s[i]<='9')))
			return 0;
	return 1;
}
void strsum(char *s,char *p)
{
	int i,j=0,sum,k;
	char r[100];
	for(i=0;s[i];i++)
	{
		sum=s[i]-'0'+p[i]-'0';
		if(sum<9)
		{
			r[i]=sum+'0';
			j=i;
		}
		else if(sum==9)
			r[i]=sum+'0';
			else
			{
				r[i]=sum%10+'0';
				k=i;
				while(k!=j)
					r[k--]='0';
                r[j]=r[j]+1;
				j=i;
			}
	}
	r[i]='\0';
	printf("sum is %s",r);
}

