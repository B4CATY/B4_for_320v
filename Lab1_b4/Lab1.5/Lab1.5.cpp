#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int a, b;

	printf("Введите любое число: ");
	scanf_s("%d", &a);

	b = a + 100;
	printf("\nВы ввели число: %d,\n Но кокомпютер выиграл,\n Так как ввел большее число - %d", a, b);
}

