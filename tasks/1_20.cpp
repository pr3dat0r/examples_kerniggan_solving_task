// kernigan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Вставить текст нажать enter 
// нажать ctrl-z
// нажать enter
// 1.16 косячный перевод. В итоге требуется напечатать самую длинную строку и размер
//Hello to all,
//I just want to know which characters represent EOF.
//
//I am using TURBO C in WINDOWS.
//
//Using code when I printed it shows - 1 but in the output screen when I use it, it does not seem to be EOF.
//
//Thanks for your support.
#include <stdio.h>

//печать самой длинной строки
#define MAXLINE 1000 /*максимальный размер вводимой строки*/
int max;
char line[MAXLINE];
char longest[MAXLINE];
char replaceline[MAXLINE];
int getlin(void);
void copy(void);
void detab(int len);

int main() {
	int len;
	extern int max; //глобальная, внешяя переменная
	extern char longest[];
	max = 0;
	while ((len = getlin()) > 0)
		detab(len);
	printf("%s", replaceline);
	return 0;
}


int getlin(void) {
	int c, i;
	extern char line[];
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void) {
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}

void detab(int len) {
	int i,j,cur,n, nlen;
	j = 0;
	extern char line[];
	n = 4;
	nlen = 0;
	cur = 0;
	//итерируемся по массиву line
	for (i = 0; i < len; ++i) {
		//любой символ, кроме таба
		if (line[i] != '\t') {
			replaceline[cur] = line[i];
			cur++;
		}
		else {
			//определяем длину новых добавляемых символов на заммену таба
			nlen = cur + n;
			for (j = cur; j < nlen; ++j){
				replaceline[j] = '-';
				cur++;
			}
		}
	}

	
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
