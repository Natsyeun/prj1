﻿// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TRUE 1 		//почитай о препроцессорных операторах
#define FALSE 0		// здесь мы определяем переменную FALSE как 0, что равносильно int FALSE = 0

void menu()
{
	printf("1. Enter number\n");
	printf("2. Choose an expression\n");
	printf("3. Result output\n");		// добавь выход из программы 
	printf("Enter your choice: ");
} 

int mn2()
{
	return 1;
}

int main()
{
	int n;
	int k;
	int m;
	int s = 0;
	while (1) 	//используй то, что было определено 
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("Enter your number: ");
			scanf("%d", &k);
			break;
		case 2:
			printf("Choose an expression: \n");
			printf("1. 3 * x \n");			// лучше написать функцию с выводом этого
			printf("2. x * x \n");	
			printf("3. (x + 3) * 4 \n");
			printf("Your choice: ");
			scanf("%d", &m);
			switch (m)
			{
			case 1:
				s = k * 3;
				break;
			case 2:
				s = k * k;
				break;
			case 3:
				s = (k + 3) * 4;
				break;
			}
			break;
		case 3:
			printf("Result: %d\n", s);
			break;
		}						// будет еще один кейс, где будут выполнен выход 
	}
	_getch();
}

