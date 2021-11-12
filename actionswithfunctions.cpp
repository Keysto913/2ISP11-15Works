#include <iostream>
using namespace std;

void clearConsole()
{
	system("cls");
}
void consoleBackground()
{
	system("color 31");
}
void consoleFont()
{
	system("color 71");
}
int getSizeInt()
{
	return sizeof(int);
}
char getSizeChar()
{
	return sizeof(char);
}
double getSizeDouble()
{
	return sizeof(double);
}
float getSizeFloat()
{
	return sizeof(float);
}
bool getSizeBool()
{
	return sizeof(bool);
}
void showMessage()
{
	cout << "Привет,Я функция!";
}
void showSquare(const int size, char texture)
{
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cout << texture << " ";
		}
		cout << "\n";
	}
}


void main()
{
	setlocale(LC_ALL, "ru");
	cout << "[+] Программа \"Функции\"" << endl;
	cout << "[ 1 ] Очищение консоли\n[ 2 ] Изменить цвет фона\n[ 3 ] Изменить цвет текста\n[ 4 ] Вывод размера типа данных INT\n[ 5 ] Вывод размера типа данных CHAR" << endl;
	cout << "[ 6 ] Вывод размера типа данных DOUBLE\n[ 7 ] Вывод размера типа данных FLOAT\n[ 8 ] Вывод размера типа данных BOOL\n[ 9 ] Вывод сообщения \"Привет, Я функция!\"\n[ 10 ] Вывод квадрата 5х5";

	const int size = 5;
	cout << "\n[+] Введите функцию:";
	int act;
	cin >> act;
	switch (act)
	{
	case 1:
	{
		cout << "[+] Вы выбрали функцию \"Очищение консоли\"" << endl;
		clearConsole();
	}
	break;
	case 2:
	{
		cout << "[+] Вы выбрали функцию \"Изменить цвет фона\"" << endl;
		consoleBackground();
	}
	break;
	case 3:
	{
		cout << "Вы выбрали функцию \"Изменить цвет текста\"" << endl;
		consoleFont();
	}
	break;
	case 4:
	{
		cout << "[+] Вы выбрали функцию \"Вывод размера типа данных INT\"" << endl;
		cout << "[ - ] Размер типа данных INT:" << getSizeInt() << " байт" << endl;
	}
	break;
	case 5:
	{
		cout << "[+] Вы выбрали функцию \"Вывод размера типа данных CHAR\"" << endl;
		cout << "[ - ] Размер типа данных CHAR:" << getSizeChar() << " байт" << endl;
	}
	break;
	case 6:
	{
		cout << "[+] Вы выбрали функцию \"Вывод размера типа данных DOUBLE\"" << endl;
		cout << "[ - ] Размер типа данных DOUBLE:" << getSizeDouble() << " байт" << endl;
	}
	break;
	case 7:
	{
		cout << "[+] Вы выбрали функцию \"Вывод размера типа данных FLOAT\"" << endl;
		cout << "[ - ] Размер типа данных FLOAT:" << getSizeFloat() << " байт" << endl;
	}
	break;
	case 8:
	{
		cout << "[+] Вы выбрали функцию \"Вывод размера типа данных BOOL\"" << endl;
		cout << "[ - ] Размер типа данных BOOL:" << getSizeBool() << " байт" << endl;
	}
	break;
	case 9:
	{
		cout << "[+] Вы выбрали функцию Вывод сообщения Привет,Я функция!" << endl;
		showMessage();
	}
	break;
	case 10:
	{
		cout << "[+] Вы выбрали функцию \"Квадрат 5х5\"" << endl;
		system("cls");
		cout << "Введите Текстуру квадрата:";
		char texture;
		cin >> texture;
		showSquare(size, texture);

	}
	break;
	}
	int _; cin >> _;
}











