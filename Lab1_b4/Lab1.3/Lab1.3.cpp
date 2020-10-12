
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	float x, y, z, n;

	printf("Введите число: ");
	scanf_s("%f", &x);

	y = x * x;
	z = y * y;
	n = z * z;

	printf("Число в 8 степени равно: %f", n);
}