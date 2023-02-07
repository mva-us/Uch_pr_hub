/* СЛОЖЕНИЕ, ВЫЧИТАНИЕ, УМНОЖЕНИЕ ДВУХ ЦЕЛЫХ ЧИСЕЛ */
/* подключаемый заголовочный файл */
#include <stdio.h> //
#include <iostream> // объявляет объекты cout, cin
#include <conio.h> // необходим для работы _getch();
using namespace std;
int main()
/* Программа является учебной */
{
	  int a, b;
	  setlocale(LC_ALL,"Russian");
        cout << "Введите a: ";
         cin >> a;
	    cout << "Введите b: ";
         cin >> b;
	    cout << "A + B = " << a + b << '\n';
		cout << "A - B = " << a - b << '\n';
        cout << "A * B = " << a * b << '\n';
        cout << "A / B = " << a / b << '\n';
_getch();
} 
