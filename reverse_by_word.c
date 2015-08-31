#include<stdio.h>
#include<string.h>
void reverse(char *);
void word_reverse(char *, int i);
void main()
{
	char str[100];
	int  k;
	printf("Enter a sentence\n");
	scanf("%s",str);
	reverse(str);
	word_reverse(str, 0);
	printf("The reverse string is \t %s",str);
}
void reverse(char *str)
{
	int i = 0;
	char temp;
	for (len = 0; str[len] != '\0'; len++);
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len-1];
		str[len-1] = temp;
		len--;
		i++;
	}
}
void word_reverse(char *str,int i)
{
	char temp;
	int t, j;
	j = i;
	for (i; str[i] != ' '; i++)
	{
		if (str[i] == '\0')
			break;
	}
	t = i + 1;
	while (j<i)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		j++;
		i--;
	}
	if (str[t-1] == '\0')
		return;
	else
		word_reverse(str, t);
}