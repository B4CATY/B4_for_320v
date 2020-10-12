#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");


	double a, b, c, S, p;



	printf("Введите 1-ую сторону треугольника ABC: ", "\n");
	scanf_s("%lf", &a);

	printf("Введите 2-ую сторону треугольника ABC: ", "\n");
	scanf_s("%lf", &b);

	printf("Введите 3-ую сторону треугольника ABC: ", "\n");
	scanf_s("%lf", &c);

	p = (a + b + c) / 2;
	printf("Полупериметр равен: %lf \n", p, "\n");

	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Площадь равна: %lf", S, "\n");



}