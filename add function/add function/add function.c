#include<stdio.h>
float add(float x, float y);
float add(float x, float y)
{
	float sum;
	sum = x + y;
	return (sum);
}

int main()
{
	float a, b, c;
	printf("Enter 2 nubers\n");
	scanf_s("%f %f", &a, &b);
	c = add(a, b);
	printf("%.3f + %.3f = %.3f\n", a, b, c);
}