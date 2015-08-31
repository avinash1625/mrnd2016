#include<stdio.h>
void common(char *, char*,int *);
void main()
{
	char a[20], b[20], c[20], i;
	static int asci[256];
	printf("Enter a string\n");
	gets(a);
	printf("Enter another string\n");
	gets(b);
	common(a, b, asci);
}
void common(char *a, char *b,int *asci)
{
	int len1, len2, i, j, k = 0, c[20];
	for (len1 = 0; a[len1] != '\0'; len1++);
	for (len2 = 0; b[len2] != '\0'; len2++);
	for (i = 0; i < len1; i++)
	{
		k = a[i];
		asci[k] = 1;
	}
	for (j = 0; j < len2; j++)
	{
		k = b[j];
		if (asci[k] == 1)
		{
			printf("%c", b[j]);
			asci[i] = 0;
		}
	}
}