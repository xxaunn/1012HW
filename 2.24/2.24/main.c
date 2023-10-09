#include <stdio.h>
#include <stdlib.h>

int a;

int main()
{
	scanf_s("%d" , &a);
	if (a % 2 == 0)
	{
		printf("the number is even.\n");
	}
	else
	{
		printf("the number is odd.\n");
	}
	system("Pause");
}