/* ��������, ��������� ���� ����� ����� */
/* ������������ ������������ ���� */
#include <stdio.h> //
#include <iostream> // ��������� ������� cout, cin
#include <conio.h> // ��������� ��� ������ _getch();
using namespace std;
int main() // �������� ������ �������,��� int
{
	  int a, b; // ��������� ����� ���������� a, b
	  setlocale(LC_ALL,"Russian"); // ������� setlocale() � �����������
        cout << "������� a: "; // ����������� �� ���� ���������� a
         cin >> a;
	    cout << "������� b: "; // ����������� �� ���� ���������� b
         cin >> b;
	    cout << "A + B = " << a + b << '\n';
		cout << "A - B = " << a - b << '\n';
_getch();
} 

