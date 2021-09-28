﻿#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите команду проверки задания:\n" <<
		"1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.\n" <<
		"2. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.\n" <<
		"3. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.\n" <<
		"4. Найти значение функции y = 3x^6 - 6x^2 - 7 при данном значении x.\n" <<
		"5. Найти значение функции y = 4(x-3)6 - 7(x-3)3 + 2 при данном значении x.\n" <<
		"6. Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения.\n" <<
		"7. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.\n";
	int q, a, b, c, d, x, y, A;
	cin >> q;
	switch (q)
	{
	case 1:
		cout << "Введите два числа a и b: ";
		cin >> a >> b;
		c = b;
		b = a;
		a = c;
		cout << "Значения a и b поменялись значениями a = " << a << " b = " << b << endl;
		break;
	case 2:
		cout << "Введите a, b и c: ";
		cin >> a >> b >> c;
		d = c;
		c = b;
		b = a;
		a = d;
		cout << "Перетекание произошло: a => b, b => c, c => a\n" << "a равно: " << a << "\nb равно: " << b << "\nс равно: " << c << endl;
		break;
	case 3:
		cout << "Введите a, b и c: ";
		cin >> a >> b >> c;
		d = b;
		b = c;
		c = a;
		a = d;
		cout << "Перетекание произошло: a => c, b => a, c => b\n" << "a равно: " << a << "\nb равно: " << b << "\nс равно: " << c << endl;
		break;
	case 4:
		cout << "Решить функцию y = 3x^6 - 6x^2 - 7, при x = ";
		cin >> x;
		y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
		cout << "y = " << y << endl;
		break;
	case 5:
		cout << "Найти значение функции y = 4*(x - 3)^6 - 7*(x - 3)^3 + 2, при x = ";
		cin >> x;
		a = x - 3;
		y = 4 * pow(a, 6) - 7 * pow(a, 3) + 2;
		cout << "y = " << y << endl;
		break;
	case 6:
		cout << "Дано число А: ";
		cin >> A;
		a = A * A;
		A = a * a * a * a;
		cout << "A^8 = " << A << endl;
		break;
	case 7:
		cout << "Дано число А: ";
		cin >> A;
		a = A * A;
		b = a * a;
		A = b * b * b * a * A;
		cout << "A^15 = " << A << endl;
		break;
	default:
		cout << "Просто введите нужное число в следующий раз, пожалуйста...";
		break;
	}
	return 0;
}