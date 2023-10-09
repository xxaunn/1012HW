#include <stdio.h>
#include <stdlib.h>

float w,h,BMI;


int main()
{
	printf("Please enter your weight(kg) and height(m)\n");
	scanf("%f %f", &w, &h);
	BMI = w/(h*h);
	printf("%f\n", BMI);
	if (BMI < 18.5)
	{
		printf("you are underweight\n");
	}
	if (BMI >= 18.5 && BMI<24)
	{
		printf("you are normal\n");
	}
	if (BMI >= 24 && BMI<30)
	{
		printf("you are overweight\n");
	}
	if (BMI >= 30)
	{
		printf("you are obese\n");
	}
	system("Pause");

}