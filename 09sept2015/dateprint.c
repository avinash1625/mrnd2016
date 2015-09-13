#include<stdio.h>
#include<stdlib.h>
void check(int,int,int);
void str_to_Int(char *);
int getInt(int,int,char *);
int valid_date(int, int, int);
void date(int, int, int);
void main()
{
	char s[100];
	printf("Enter the date DD/MM/YYYY\n");
	scanf("%s",s);
	str_to_Int(s);

}
void str_to_Int(char *ch)
{
	int i,k=0,w=0,len,a[3];
	for(i=0;ch[i];i++);
	len=i;
	if(len>=5)
	{
		for(i=0;i<len;i++)
		{
			if(ch[i]=='/')
			{
				a[w]=getInt(k,i,ch);
				k=i+1;
				w++;
			}
		}
		a[w]=getInt(k,i,ch);
		w++;
		if(w==3)
		{
			check(a[0],a[1],a[2]);
		}
		else
		{
			printf("Invalid input");
		}


	}
	else
        printf("invalid input");

}
void check(int day,int month,int year)
{
	int ans;
		ans = valid_date(day, month, year);
		if (ans == 1)
		{
			date(day, month, year);
		}
		else
			printf("INVALID");
}
int getInt(int k,int i,char *ch)
{
	int j,result,temp;
	for(j=k;ch[j]=='0';j++);
	result=(int)ch[j]-'0';
	for(j=j+1;j<i;j++)
	{
		temp=(int)ch[j]-'0';
		result=(result*10)+temp;

	}
	return result;
}
int valid_date(int day, int month, int year)
{
	int leap = 0;
	if (day < 0 || month < 0 || year < 0)
		return 0;
	if (year > 9999)
		return 0;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leap = 1;
			}
			else
			{
				leap = 0;
			}
		}
		else
		{
			leap = 1;
		}
	}
	else
	{
		leap = 0;
	}
	if (leap == 0)
	{
		if (month == 2 && day <= 28)
			return 1;
	}
	else
	{
		if (month == 2 && day <= 29)
			return 1;
	}
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31)
		return 1;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
		return 1;
	return 0;
}
void date(int day, int month, int year)
{
	int temp;
	char mon[][20] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	char units[][20] = { "","first","second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","Tenth","Eleventh","Twelfth","Thirteenth","Fourteenth","Fifteenth","Sixteenth","Seventeenth","Eighteenth","Nineteenth" };
	char yunits[][20]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char tens[][20] = { "","","Twenty","Thirty","Fourty","Fiftty","Sixty","Seventy","Eighty","Ninety" };
	char hundreds[][20] = { "Thousand" };
	if(day<20)
	{
		printf("%s ",units[day]);
	}
	else
	{
		printf("%s %s",tens[day/10],units[day%10]);
	}

	printf("%s of ",mon[month-1]);
	temp=year;
	if(temp>1000)
	{
		if((temp/100)<20)
		{
			printf("%s ",yunits[temp/100]);
			temp%=100;
		}
		else
		{
			printf("%s %s ",yunits[temp/1000],hundreds[0]);
			temp%=1000;
		}
	}
	if(temp>100)
	{
		printf("%s ",yunits[temp/100]);
		temp%=100;
	}
	if(temp>=20)
	{

		printf("%s ",tens[(temp/10)]);
		temp%=10;
	}
    printf("%s ",yunits[temp]);


}




