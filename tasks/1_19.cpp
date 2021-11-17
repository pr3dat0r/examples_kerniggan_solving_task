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
#define MAXLINE 1000
#define EOF (-1)
int getmyline(char line[], int maxline);
void reverse(char to[], char from[], int len);


int main() {
	int len;
	int max;
	char line[MAXLINE];
	char revline[MAXLINE];
	max = 0;
	while ((len = getmyline(line, MAXLINE)) > 0){
		reverse(revline, line, len-2);
		printf("%s\n", revline);
	}
	
	
	return 0;
}

int getmyline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		++i;
	}
	s[i] = '\0'; /*null - символ, кодируемый
		нулевым байтом), чтобы пометить конец строки символов*/
	return i;
}

void reverse(char to[], char from[], int len) {
	int i;
	i = 0;
	/*while ((to[i] = from[i]) != '\0')
		++i;*/

	while ((to[i] = from[i]) != '\0') {
		to[i] = from[len - i];
		++i;
	}
	
	
	/*while ((to[i] = from[i]) != '\0')
		++i;*/
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
