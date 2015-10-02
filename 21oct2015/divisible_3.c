#include <stdio.h>
int strsum(char *);
int divisible(int);
int divisible1(int);
int valid(char *);
void main()
{
	char p[100];
	int i,k;
	printf("enter a number");
	scanf("%s",p);
	int n=strsum(p);
	printf("enter the no.of times\n");
	scanf("%d",&k);
	if(k==0){
        printf("not divisible");
        exit(0);}
	for(i=0;i<k;i++)
        printf("%s",p);
	if(n==1)
        printf(" divisible by 3");
	else
    {
        if(k%3==0)
            printf(" divisible");
        else
            printf("not divisible");
	}
}
int strsum(char *p)
{
	int i,n=0,k;
	valid(p);
	for(i=0;p[i];i++)
		n+=p[i]-'0';
    n=divisible(n);
        return n;

}
int divisible(int n)
{
    int d,s=0;
	while(n>0)
	{
	    d=n%10;
	    s=s+d;
	    n=n/10;
	}
	if(s>9)
        return divisible(s);
    else{
        if(s==0||s==3||s==6||s==9)
            return 1;
        else
            return 0;
    }
}
int divisible1(int n)
{
    if(n%3==0)
        return 1;
    else
        return 0;
}
int valid(char *s)
{
    int i;
    for(i=0;s[i];i++)
        if(!(s[i]>='0'&&s[i]<='9'))
        {
          printf("invalid input");
          exit(0);
        }
    return 1;
}
