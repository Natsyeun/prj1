// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu()
{
	printf("1. Enter number\n");
	printf("2. Choose an expression\n");
	printf("3. Result output\n");
	printf("Enter your choice: ");
} 

int main()
{
	int n;
	int k;
	int m;
	int s = 0;
	while (1)
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
			printf("1. 3 * x \n");
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
		}
	}
	_getch();
}

