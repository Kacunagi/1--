// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <locale.h>
int _tmain(int argc, _TCHAR* argv[])
{
	float r1, r2;
	r1 = 0;
	r2 = 0;
	setlocale(LC_ALL,"rushian");
	setlocale(LC_ALL, "RUS");
	printf("Программа вычисляющая площадь кольца по двум радиусам\n");
	do
	{
		printf("Введите значение внешнего радиуса\n");
		scanf_s("%f", &r1);
		if (r1 <= 0)
			printf("Введено неверное значение. Значение должно быть положительным");
	} while (r1 <= 0);
	do
	{
		printf("Введите значение внутреннего радиуса\n");
		scanf_s("%f", &r2);
		if (r2 < 1 || r2 > r1)
			printf("Введено неверное значение. Значение должно быть положительным и меньше внешнего радиуса");
	} while (r2 = > r1 || r2 <= 0);

	} while (r1 < 1 || r2 => r1 || r2 < 1);
	printf("Площадь кольца S=%.2f\n", 3.14*(r1*r1-r2*r2));
	getchar();
	getchar();
	getchar();
    return 0;
}

