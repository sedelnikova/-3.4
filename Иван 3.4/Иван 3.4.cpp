// Иван 3.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;

	cout << "Введите икс ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	cout << "y = " << y << endl;
	return 0;
}