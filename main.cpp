/* ВВОД ДВУХ ЦЕЛЫХ ЧИСЕЛ С ПРИГЛАШЕНИЕМ*/
/* подключаемый заголовочный файл */
#include <stdio.h> //
#include <iostream> // объявляет объекты cout, cin
using namespace std;
int main() // основная пустая функция,тип int
{
	  int a, b; // объявляем целые переменные a, b
	  setlocale(LC_ALL,"Russian"); // Функция setlocale() с аргументами
        cout << "Введите a: "; // приглашение на ввод переменной a
         cin >> a;
	    cout << "Введите b: "; // приглашение на ввод переменной b
         cin >> b;
} 

