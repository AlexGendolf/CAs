#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

int main()
{
	setlocale(0, "");
	/*7*/ int a, b, c, z; // ���������� ���� ���������� a � b ������ ���� ������. 
	cout << "������� ������ �����: ";
	cin >> a; // ������������ ����������� ���������� a �����-���� ��������. 
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ��������" << endl << "+ = 1" << endl << "- = 2" << endl << "* = 3" << endl << "/ = 4" << endl;
	cin >> z;
	try 
	{
		switch (z) {
		case 1:
			c = a + b;
			break;
		case 2:
			c = a - b;
			break;
		case 3:
			c = a * b;
			break;
		case 4:
			c = a / b;
			break;
		default:
			cout << "�������� �����������" << endl;
			break;
		} 
	}
	catch (int z)
	{
		cout << "�������� �����������" << endl;
	}
	cout << "����� = " << c << endl;
	system("pause");
	return 0;
}