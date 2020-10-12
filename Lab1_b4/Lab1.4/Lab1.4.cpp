#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");


	printf("Первый случай\n");
	int a = 17;
	int b = 81;

	printf("Было сначало: %d, %d ", a, b, "\n");
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Стало: %d, %d ", a, b, "\n");

	printf("Второй случай\n");
	int c, d, f;

	c = 22;
	d = 15;
	printf("Было сначало: %d, %d ", c, d, "\n");

	f = c;
	c = d;
	d = f;
	printf("Стало: %d, %d ", c, d, "\n");

}