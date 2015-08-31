#include<stdio.h>
#include<stdlib.h>
void check(int, int, int);
int valid_date(int, int, int);
void date(int, int, int);
void main()
{
	int day, month, year;
	printf("Enter the date DD-MM-YYYY\n");
	scanf("%d%d%d", &day, &month, &year);
	check(day, month, year);
}
void check(int day, int month, int year)
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
	char units[][20] = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
	char tens[][20] = { "","","Twenty","Thirty","Fourty","Fiftty","Sixty","Seventy","Eighty","Ninety" };
	char hundreds[][20] = { "Hundred And","Thousand" };
	if (day<20)
	{
		printf("%s ", units[day]);
	}
	else
	{
		printf("%s %s ", tens[day / 10], units[day % 10]);
	}

	printf("%s ", mon[month - 1]);
	if (year<20)
	{
		printf("%s ", units[year]);
	}
	else if (year <= 99)
	{
		printf("%s %s ", tens[year / 10], units[year % 10]);
	}
	else if (year <= 999)
	{
		printf("%s %s ", units[year / 100], hundreds[0]);
		temp = year % 100;
		if (temp<20)
		{
			printf("%s ", units[temp]);
		}
		else if (temp <= 99)
		{
			printf("%s %s ", tens[temp / 10], units[temp % 10]);
		}
	}
	else if (year <= 9999)
	{
		printf("%s %s ", units[year / 1000], hundreds[1]);
		temp = year % 1000;
		if (temp<20)
		{
			printf("%s ", units[temp]);
		}
		else if (temp <= 99)
		{
			printf("%s %s ", tens[temp / 10], units[temp % 10]);
		}
		else
		{
			printf("%s %s ", units[temp / 100], hundreds[0]);
			temp = year % 100;
			if (temp<20)
			{
				printf("%s ", units[temp]);
			}
			else if (temp <= 99)
			{
				printf("%s %s ", tens[temp / 10], units[temp % 10]);
			}

		}
	}

}