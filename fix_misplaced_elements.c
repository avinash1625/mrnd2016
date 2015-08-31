#include<stdio.h>
void sort(int *,int);
void swap(int *,int, int);
void main()
{
	int i,n,a[10];
	printf("Enter the n of the number\n");
	scanf("%d", &n);
	printf("enter the elements of array");
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a,n);
	printf("Array after rearranged");
	for (i = 0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}
void sort(int *a,int n)
{
	int i, pos1 = -1, pos2 = -1, same1 = -1, same2 = -1;
	for (i = 0; i<n; i++)
	{
		if (pos1 == -1)
		{
			if (i == n - 1)
				break;
			if (!(a[i]<a[i + 1]))
			{
				if (a[i] == a[i + 1])
				{
					if (same1 == -1)
					{
						same1 = i;
					}
					else
					{
						if (a[same1] != a[i])
						{
							same1 = i;
						}
					}
				}
				else
				{
					if (same1 != -1)
					{
						if (a[i] == a[same1])
						{
							pos1 = same1;
							pos2 = i + 1;
							break;
						}
					}
					else
					{
						pos1 = i;
					}
				}
			}
		}
		else
		{
			if (same2 == -1)
			{
				if (!(a[pos1]>a[i]))
				{
					if (a[pos1] == a[i])
					{
						same2 = i;
					}
					else
					{
						pos2 = i - 1;
						break;
					}
				}
			}
			else
			{
				if (!(a[pos1]<a[i]))
				{
					if (a[i] != a[same2])
					{
						pos2 = i;
						break;
					}
				}
			}
		}
	}
	if ((pos1 != -1))
	{
		if (pos2 == -1)
		{
			if (same2 != -1)
			{
				pos2 = same2 - 1;
			}
			else
			{
				pos2 = n - 1;
			}
		}
	}
	if (!(pos1 == -1))
		swap(a,pos1, pos2);

}
void swap(int *a,int pos1, int pos2)
{
	a[pos1] = a[pos1] + a[pos2];
	a[pos2] = a[pos1] - a[pos2];
	a[pos1] = a[pos1] - a[pos2];
}