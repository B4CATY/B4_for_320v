#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	double sec, minutes, hours, days, years, full;
	sec = 60;
	minutes = 60;
	hours = 24;
	days = 365;

	years = 1; // первое условие
	full = sec * minutes * hours * days * years;
	printf("В одном году секунд: %lf \n", full);

	years = 100; //второе условие
	full = sec * minutes * hours * days * years;
	printf("В 100 годах секунд: %lf \n", full);

	years = 1000; //третье условие
	full = sec * minutes * hours * days * years;
	printf("В 1000 годах секунд: %lf", full);
}