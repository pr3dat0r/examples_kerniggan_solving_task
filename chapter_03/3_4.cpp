﻿// kernigan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
int bitcount(unsigned x);

int main() {
	/* подсчет цифр, символов-разделителей и прочих символов */
	int c, i, nwhite, nother, ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		switch (c) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			ndigit[c - '0']++;
			break;
		case ' ': case '\n': case'\t':
			nwhite++;
			break;
		default:
			nother++;
			break;
		}
	}
	printf("цифр = \n");
	for (i = 0; i < 10; i++) {
		printf("%d\t%d\n",i, ndigit[i]);
	}
	printf(", символов-разделителей = %d, прочих = %d\n", nwhite, nother);
	return 0;

	


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.