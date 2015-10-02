#include <stdio.h>
int strlen(char *);
void strsum(char *,char *);
int valid(char *);
void main()
{
	char s[100],p[100];
	int i,k;
	printf("enter the strings u want to add\n");
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
	int i,j,carry=0,k,len1,len2,sum,f,r[100]={0},flag=0,x,l;
	len1=strlen(s);
	len2=strlen(p);
	if(len1>len2){
        k=len1-len2;
        flag=1;
        x=len1;}
    else{
        k=len2-len1;
        x=len2;
    }
    if(flag==1)
        f=len2;

    else
        f=len1;
    l=x-1;
	for(i=len1-1,j=len2-1;f>0;i--,j--,f--)
	{
        sum=0;
		sum=s[i]-'0'+p[j]-'0'+carry;
		if(sum<10){
			r[l]=sum;
			l--;
			carry=0;}
		else{
			r[l]=sum%10;
			l--;
			carry=1;
			}

	}
	if(k==0){
		printf("%d",carry);
    for(i=0;i<len1;i++)
        printf("%d",r[i]);}
    else
    {
        if(flag==1){
        for(k=k-1;k>=0;k--){
            sum=s[k]-'0'+carry;
            if(sum<10){
                r[k]=sum;
            carry=0;}
            else{
                r[k]=sum%10;
                carry=1;
            }
        }}
        else{
            for(k=k-1;k>=0;k--){
                sum=p[k]-'0'+carry;
                if(sum<10){
                    r[k]=sum;
                carry=0;}
                else{
                    r[k]=sum%10;
                    carry=1;
                }
            }
        }
        printf("%d",carry);
         for(i=0;i<x;i++)
                printf("%d",r[i]);
    }

	}
int strlen(char *s)
{
        int i;
        for(i=0;s[i];i++);
        return i;


}









