#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

int main()
{
	setlocale(0, "");
	/*7*/ int a, b, c, z; // объ€вление двух переменных a и b целого типа данных. 
	cout << "¬ведите первое число: ";
	cin >> a; // пользователь присваивает переменной a какое-либо значение. 
	cout << "¬ведите второе число: ";
	cin >> b;
	cout << "¬ведите операцию" << endl << "+ = 1" << endl << "- = 2" << endl << "* = 3" << endl << "/ = 4" << endl;
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
			cout << "ќпераци€ отсутствует" << endl;
			break;
		} 
	}
	catch (int z)
	{
		cout << "ќпераци€ отсутствует" << endl;
	}
	cout << "ќтвет = " << c << endl;
	system("pause");
	return 0;
}