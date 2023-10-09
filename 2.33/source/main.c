#include <stdio.h>
#include <stdlib.h>

float miles;
float cost;
float distance;
float fee;
float tolls;

int main()
{
	printf("Please enter your total miles driven per day\n");
	scanf("%f", &miles);
	printf("Please enter your cost per liter of gasoline\n");
	scanf("%f", &cost);
	printf("Please enter your average miles per liter\n");
	scanf("%f", &distance);
	printf("Please enter your parking fees per day\n");
	scanf("%f", &fee);
	printf("Please enter your tolls per day\n");
	scanf("%f", &tolls);
	double a = (miles / distance)*cost;
	double totalcost = a + fee + tolls;
	printf("your total cost per day of driving to work is %lf\n", totalcost);
	system("Pause");
}