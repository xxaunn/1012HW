#include <stdio.h>
#include <stdlib.h>

int i;

int main()
{
	printf("number\tsquare\tcube\n");
	for (size_t i = 0; i <= 10; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
	
	system("Pause");
}