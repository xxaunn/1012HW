#include <stdio.h>
#include <stdlib.h>

int a;
int b;

int main()
{
	scanf("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("%d is a multiple of the %d\n", a, b);
	}
	else
	{
		printf("%d is not a multiple of the %d\n", a, b);
	}
	system("Pause");
}