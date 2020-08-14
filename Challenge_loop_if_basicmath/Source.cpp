#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int aver(double a, double b)
{
	double sum = 0, count = 0, sum2{};

	for (int x = a; x <= b; x++)
	{
		sum += x;
		sum2 += pow(x, 2);
		printf("%d ", x);
		count++;
	}
	printf("\nAverage = %.1lf", sum / count);
	sum = sqrt((count * sum2 - sum * sum) / (count * (count - 1)));
	printf("\nSD= %.2lf", sum);
	return 0;
}
int main()
{
	float num1, num2, max, min;
	scanf_s("%f %f", &num1, &num2);
	if (num1 > num2)
	{
		aver(num2, num1);
	}
	else
	{
		aver(num1, num2);
	}
}






