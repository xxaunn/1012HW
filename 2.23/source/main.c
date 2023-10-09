#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;
int max=0 ;
int min=100000000000 ;

int main(void)
{
	scanf("%d %d %d", &a, &b, &c);
	if (a > max)
	{
		max = a;
	}
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (min > a)
	{
		min = a;
	}
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	printf("%d is the largest integers in the group.\n",max);
	printf("%d is the smallest integers in the group.\n",min);
	system("Pause");
}