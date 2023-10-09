#include <stdio.h>
#include <stdlib.h>

float miles;
float cost;
float distance;
float fee;
float tolls;
float totalcost;
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
	totalcost = (miles / distance)*cost + fee + tolls;
	printf("your total cost per day of driving to work is %f\n", totalcost);
	system("Pause");
}