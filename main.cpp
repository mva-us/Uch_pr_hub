/* ��������, ���������, ��������� ���� ����� ����� */
/* ������������ ������������ ���� */
#include <stdio.h> //
#include <iostream> // ��������� ������� cout, cin
#include <conio.h> // ��������� ��� ������ _getch();
using namespace std;
int main()
/* ��������� �������� ������� */
{
	  int a, b;
	  setlocale(LC_ALL,"Russian");
        cout << "������� a: ";
         cin >> a;
	    cout << "������� b: ";
         cin >> b;
	    cout << "A + B = " << a + b << '\n';
		cout << "A - B = " << a - b << '\n';
        cout << "A * B = " << a * b << '\n';
        cout << "A / B = " << a / b << '\n';
_getch();
} 
