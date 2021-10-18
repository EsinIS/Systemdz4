/*
#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, flag = 0, x1 = 0, ctrl = 0;
	string x, x2;
	cout << "Введите систему счисления, в которой находится ваше число." << endl;
	if (cin >> a && a > 1) {
		cout << "В записи числа используйте следующие символы: \n";
		if (a <= 10) {
			for (int i = 0; i < a; i++) {
				cout << (char)(i + 48);
			}
			cout << "\n";
		}
		else {
			cout << "0123456789";
			for (int i = 10; i < a; i++) {
				cout << (char)(i + 55);
			}
			cout << "\n";
		}
	}
	else {
		cout << "Введите корректное значение СС.";
		flag = 1;
	}
	if (flag == 0) {
		cout << "Введите число." << endl;
		if (cin >> x) {
			for (int i = 0; i < x.size(); i++) {
				if ((int)x[i] < 58) {
					if ((int)x[i] - 48 >= a || (int)x[i] < 48) {
						flag = 1;
						cout << "Введите корректное число.";
						break;
					}
				}
				else if ((int)x[i] - 55 >= a || (int)x[i] < 65) {
					flag = 1;
					cout << "Введите корректное число.";
					break;
				}
			}
		}
		else {
			flag = 1;
			cout << "Введите корректное число.";
		}
	}
	if (flag == 0) {
		for (int i = 0; i < x.size(); i++) {
			if (x[i] <= '9') {
				x1 += ((int)x[i] - 48) * pow(a, x.size() - 1 - i);
			}
			else {
				x1 += ((int)x[i] - 55) * pow(a, x.size() - 1 - i);
			}
		}
	}
	cout << "Введите значение СС, в которую хотите перевести ваше число." << endl;
	if (flag == 0) {
		if (cin >> b && b > 1) {
			while (x1 > 0) {
				ctrl = x1 % b;
				if (ctrl < 10) {
					x2 += (char)(ctrl + 48);
				}
				else {
					x2 += (char)(ctrl + 55);
				}
				x1 = x1 / b;
			}
		}
		else {
			flag = 1;
			cout << "Введите корректное число.";
		}
	}
	if (flag == 0) {
		reverse(x2.begin(), x2.end());
		cout << "Ваше число в " << b << " системе счисления будет выглядеть как \n";
		cout << x2;
	}
}
*/