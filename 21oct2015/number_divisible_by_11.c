#include <stdio.h>
int divisible(int);
int divisible1(int);
int valid(char *);
int strdivisible(char *);
void main()
{
	int i,n=0,k,temp=0;
	char s[10000];
	printf("enter the number:");
	scanf("%s",s);
	k=valid(s);
	if(k==0)
    {
        printf("invalid input");
        exit(0);
    }
	k=strdivisible(s);
	if(k==0)
		printf("the given number is not divisible by 11");
	else
		printf("divisible");
}
int strdivisible(char *s)
{
    int i,l=0,f=0;
    for(i=0;s[i];i++)
    {
        if((i+1)%2==1)
            l+=s[i]-'0';
        else
            f+=s[i]-'0';
    }
    if(l==f)
        return 1;
    else
        return divisible(l-f);
}
int divisible(int n)
{
	int d,s=0,f=0,k=1;
	if(n<=10)
		return 0;
	while(n>0)
	{
			d=n%10;
				if(k%2==0)
					s=s+d;
				else
					f=f+d;
		n=n/10;
		k++;
	}
	if(s==f)
		return 1;
	else
		return	divisible(s-f);
}
int divisible1(int n)
{
    if(n%11==0)
        return 1;
    else
        return 0;
}
int valid(char *s)
{
    int i;
    for(i=0;s[i];i++)
        if(!((s[i]>='0')&&(s[i]<='9')))
            return 0;
    return 1;
}


