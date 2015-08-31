#include<stdio.h>
#include<stdlib.h>
void check(char *, char *);
int evaluate(char *);
int Length(char *);
void insert(char *, char *);
void main()
{
	char str1[200], str2[200];
	printf("Enter the first string of braces\n");
	scanf("%s", str1);
	printf("Enter second string\n");
	scanf("%s", str2);
	check(str1, str2);
	printf("%s", str1);

}
int Length(char *ch)
{
	int len;
	for (len = 0; ch[len] != '\0'; len++);
	return len;
}
int evaluate(char *str1)
{
	int i, j, flag = 1, len;
	len = Length(str1);
	if (len % 2 == 1)
		return 0;
	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		if (str1[i] == '(' && str1[j] != ')')
		{
			flag = 0;
			break;
		}
		if (str1[i] == '{' && str1[j] != '}')
		{
			flag = 0;
			break;
		}
		if (str1[i] == '[' && str1[j] != ']')
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void check(char *str1, char *str2)
{
	int i = 0, len;
	i = evaluate(str1);
	len = Length(str1);
	if (i == 0)
	{
		printf("invalid");
		exit(1);
	}
	else
	{
		insert(str1, str2);
	}

}
void insert(char *str1, char *str2)
{
	int len1, len2, i, j, temp;
	len1 = Length(str1);
	len2 = Length(str2);
	temp = len1 / 2;
	for (i = len1; i >= temp; i--)
	{
		str1[i + len2] = str1[i];
	}
	i++;
	for (j = 0; j<len2; j++)
	{
		str1[i] = str2[j];
		i++;
	}

}