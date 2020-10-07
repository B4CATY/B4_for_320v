#include <stdio.h>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");


	printf("Размер в байтах int : %d \n", sizeof(int));
	
	printf("Размер в байтах short: %d \n", sizeof(short));
	
	printf("Размер в байтах lond : %d \n", sizeof(long));
	
	printf("Размер в байтах char : %d \n", sizeof(char));
	
	printf("Размер в байтах float : %d \n", sizeof(float));
	
	printf("Размер в байтах double : %d", sizeof(double));
	
	printf("\n\n\n");

}

