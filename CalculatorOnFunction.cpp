#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int calculate(int num1, int num2, char operation)
{
	if (operation == '+')
	{
		system("cls");
		return num1 + num2;
	}
	else if (operation == '-')
	{
		system("cls");
		return num1 - num2;
	}
	else if (operation == '*')
	{
		system("cls");
		return num1 * num2;
	}
	else if (operation == '/')
	{
		system("cls");
		return num1 / num2;

	}
	else if (operation == '%')
	{
		system("cls");
		return num1 % num2;
	}
	else if (operation == '^')
	{
		system("cls");
		return pow(num1, num2);
	}
	else if (operation == '1')
	{
		system("cls");
		return sqrt(num1);
	}
	else if (operation == '2')
	{
		system("cls");
		return cbrt(num2);
	}
	else
	{
		system("cls");
		return 0;
	}


}

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "[ - ] Программа \"Калькулятор\"\n\n";

	cout << "\n\n[+] Действия:\n\"+\" - Сложение\n\"-\" - Вычитание\n\"*\" - Умножение\n\"/\" - Деление\n\"%\" - Деление с остатком\n\"^\" - Возведение в степень\n\"1\" - Квадратный корень из числа(Извлекает только из num1)\n\"2\" - Извлечение кубического корня (Работает с num1)";
	cout << "\nВведите действие:";
	char operation;
	cin >> operation;

	cout << "[+] Введите первое число:";
	int num1;
	cin >> num1;

	cout << "[+] Введите второе число:";
	int num2;
	cin >> num2;


	cout << "[-]Результат:" << calculate(num1, num2, operation) << endl;



	int _; cin >> _;
}