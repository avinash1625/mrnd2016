#include<stdio.h>
#include<stdlib.h>
void mulArray(unsigned int *, unsigned int *, unsigned int *, int, int);
void mul(unsigned int, unsigned int, unsigned int *, int, int);
void add(unsigned int, int, unsigned int *);
int j = 0;
int main()
{
	unsigned int *a, *b, *c, n1, n2, i;
	printf("Enter size of the first array less than 11:");
	scanf("%d", &n1);
	printf("Enter size of the second array less than 5:");
	scanf("%d", &n2);
	a = (unsigned int *)malloc(n1*sizeof(int));
	b = (unsigned int *)malloc(n2*sizeof(int));
	c = (unsigned int *)calloc((n1 + n2 + 5), sizeof(int));
    printf("enter first number\n");
	for (i = 0; i<n1; i++)
	{
		scanf("%u", &a[i]);
	}
	printf("enter second number\n");
	for (i = 0; i<n2; i++)
	{
		scanf("%u", &b[i]);
	}

	mulArray(a, b, c, n1, n2);
	printf("the product is\n");
	for (i = j; i + 1; i--)
	{
		printf("%d ", c[i]);
	}
	return 1;
}
void mulArray(unsigned int *a, unsigned int *b, unsigned int *c, int n1, int n2)
{
	int i, j;
	for (i = n1 - 1; i >= 0; i--)
	{
		for (j = n2 - 1; j >= 0; j--)
		{
			mul(a[i], b[j], c, (n1 - 1) - i, (n2 - 1) - j);
		}
	}


}
void mul(unsigned int a, unsigned int b, unsigned int *c, int i, int j)
{
	unsigned int tempa, tempb;
	unsigned sum = 0;
	int tempj, tempi;
	tempi = i;
	i = i * 32;
	tempj = j;
	tempa = a;
	tempb = b;
	while (a != 0)
	{
		if (a & 1)
		{
			b = tempb;
			j = tempj * 32;
			while (b != 0)
			{
				if (b & 1)
				{
					sum = (1 << (i + j)) % (1 << 31);
					add(sum, (i + j) / 32, c);
				}
				j++;
				b >>= 1;
			}
		}
		a >>= 1;
		i++;
	}

}
void add(unsigned int sum, int pos, unsigned int *c)
{
	unsigned int carry;
	if ((c[pos] + sum)>((1 << 31)))
	{

		carry = (c[pos] + sum) % (1 << 31);
		c[pos] = (c[pos] + sum) / (1 << 31);
		add(carry, pos + 1, c);
	}
	else
	{
		c[pos] += sum;
	}
	if (j<pos)
	{
		j = pos;
	}
}
