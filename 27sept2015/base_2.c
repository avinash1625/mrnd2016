#include <stdio.h>
#include <string.h>
void binary(char *);
int getInt(char *);
void toBase_2(char *,int);
void main()
{
	char s[100];
	printf("enter a number");
	scanf("%s",s);
	printf("the given number %s in base -2 is ",s);
	binary(s);
}
void binary(char *s)
{
	int n=getInt(s),i=0;
	if(n==0)
    {
        printf("0");
        exit(0);
    }
	char binary[100];
	while(n>0)
	{
		binary[i++]=n%2+'0';
		n=n/2;
	}
	binary[i]='\0';
	toBase_2(binary,i);
}
int getInt(char *s)
{
	int j,result=0,temp=0;
	for(j=0;s[j];j++)
	{
		temp=s[j]-'0';
		result=(result*10)+temp;

	}
	return result;
}
void toBase_2(char *binary,int len)
{
    int i,j,flag=0;
    char temp;
    for(i=0;i<len;i++)
    {
        if(i%2==1)
        {
            if(binary[i]=='1')
            {
                for(j=i+1;binary[j]!='0'&&binary[j]!='\0';j++)
                    binary[j]='0';
                if(binary[j]=='\0')
                {
                    len=j+1;
                    binary[len]='\0';
                }
                binary[j]='1';
                i=j-1;
            }
        }

    }
    for(j=0,i=i-1;j<i;j++,i--)
    {
       temp=binary[j];
       binary[j]=binary[i];
       binary[i]=temp;
    }
    printf("%s",binary);


}


