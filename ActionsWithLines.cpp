/*#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	cout << "Введите размерность сетки:";
	int MeshSize;
	cin >> MeshSize;
	int k = 1;
	for (int j = 0; j < MeshSize; j++)
	{
		for (int i = 0; i < MeshSize; i++)
		{
			cout << "_";
			cout << "|";
			if (k == MeshSize)
			{
				cout << "_";
			}
			k++;
		}
		cout << endl;
		k = 1;
	}
	for (int i = 0; i < MeshSize; i++)
	{
		cout << " " << "|";
	}
}*/
#include <iostream>
#include <Windows.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");

	short figure, line, lenghtLine, width, i = 0;
	char textureLine, a, b;

	cout << "[+] Программа <Геометрические фигуры>\n\n\n";
	cout << "[1] Линия\n\n[2] Квадрат\n[3] Прямоугольник\n[4] Полый квадрат\n[5] Полый треугольник\n[6] Полый прямоугольник\n[7] Треугольник\n[8] Крест\n[9] Крест в квадрате\n[10] Шахматаня доска\n[11] Сетка\n[+] Выберите фигуру:";
	cin >> figure;

	switch (figure) {
	case 1:
		system("cls");
		cout << "[+] Фигура: <Линия>\n\n[+]Выберите тип:\n[1] Горизонтальная\n[2] Вертикальная\n\n[+] Выберите тип:";
		cin >> line;

		switch (line) {
		case 1:
			system("cls");
			cout << "Вы выбрали горизонтальную линию\n\n[+] Длина линии:";
			cin >> lenghtLine;

			cout << "\n[+] Текстура линии:";
			cin >> textureLine;
			cout << "[+] Результат:\n";
			while (i < lenghtLine)
			{
				cout << textureLine;
				i++;
			}
			break;
		case 2:
		{
			system("cls");
			cout << "Вы выбрали вертикальную линию\n\n[+] Длина линии: ";
			cin >> lenghtLine;

			cout << "\n[+] Текстура линии: ";
			cin >> textureLine;
			cout << "[+] Результат:\n";
			while (i < lenghtLine)
			{
				cout << textureLine << endl;
				i++;
			}
			break;
		}
		default:
			break;
		}
		break;
	default: cout << "Вы выбрали неверный тип фигуры, попробуйсте снова" << endl;
		break;
	case 2: {
		system("cls");
		cout << "[+] Квадрат\n\n";
		cout << "[+] Размер: " << endl;
		cin >> lenghtLine;
		cout << "[+] Текстура: ";
		char texture;
		cin >> texture;
		for (int x = 0; x < lenghtLine; x++) {
			for (int y = 0; y < lenghtLine; y++) {
				cout << texture << " ";
			}
			cout << "\n";
		}
		break;
	}
	case 3:
	{
		system("cls");
		cout << "Прямоугольник \n\n";
		cout << "[+] Введите длину: ";
		cin >> lenghtLine;
		cout << "\n[+] Введите ширину: ";
		cin >> width;
		cout << "[+] Текстура: ";
		cin >> textureLine;
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < lenghtLine; y++) {
				cout << textureLine << " ";
			}
			cout << "\n";
		}

	}
	break;

	case 4: {
		system("cls");
		cout << "Полый квадрат\n\n";
		cout << "[+] Введите размер: ";
		cin >> lenghtLine;
		cout << "[+] Текстура:";
		cin >> textureLine;
		system("cls");
		for (int x = 0; x < lenghtLine; x++)
		{
			for (int y = 0; y < lenghtLine; y++)
			{
				if (x == 0 || x == lenghtLine - 1 || y == 0 || y == lenghtLine - 1)
				{
					cout << textureLine << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << " \n";
		}
	}
		  break;
	case 5: {
		system("cls");

		cout << "Полый треугольник\n\n";
		cout << "[+] Введите размер:";
		cin >> lenghtLine;
		cout << "[+] Текстура:";
		cin >> textureLine;
		system("cls");
		Sleep(100);
		for (int x = 0; x < lenghtLine; x++)
		{
			for (int y = 0; y < lenghtLine; y++)
			{
				if (y == lenghtLine / 2 + x || y == lenghtLine / 2 - x || x == lenghtLine / 2)
				{
					cout << textureLine << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << " \n";
		}
		break;
	}
	case 6: {
		system("cls");
		cout << "Полый прямоугольник\n";
		cout << "Введите длину: ";
		cin >> lenghtLine;
		cout << "\n";
		cout << "Введите ширину: ";
		cin >> width;
		cout << "Введите текстуру прямоугольника: ";
		cin >> textureLine;
		system("cls");
		for (int y = 0; y < width; y++) {
			for (int x = 0; x < lenghtLine; x++) {
				if (x == 0 || x == lenghtLine - 1 || y == 0 || y == width - 1) {
					cout << textureLine << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << "\n";

		}
		break;
	}
	case 7: {
		system("cls");
		cout << "Треугольник\n";
		cout << "Введите размер: ";
		cin >> lenghtLine;
		cout << "\nВведите текстуру: ";
		cin >> textureLine;
		system("cls");
		for (int x = 0; x < lenghtLine; x++)
		{
			for (int y = 0; y < lenghtLine; y++)
			{
				if (y <= lenghtLine / 2 + x && y >= lenghtLine / 2 - x && x <= lenghtLine / 2)
				{
					cout << textureLine << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << " \n";
		}
		break;
	}
	case 8: {
		system("cls");
		cout << "крест\n";
		cout << "Введите размер:";
		cin >> lenghtLine;
		cout << "\nВведите текстуру:";
		cin >> textureLine;
		system("cls");
		for (int y = 0; y < lenghtLine; y++) {
			for (int x = 0; x < lenghtLine; x++) {
				if (y == lenghtLine / 2 || x == lenghtLine / 2) {
					cout << textureLine << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << "\n";
		}
		break;
	}
	case 9:
	{
		system("cls");
		cout << "крест в квадрате\n";
		cout << "введите размер:";
		cin >> lenghtLine;
		cout << "\n введите текстуру:";
		cin >> textureLine;
		system("cls");
		for (int y = 0; y < lenghtLine; y++) {
			for (int x = 0; x < lenghtLine; x++) {
				if (y == 0 || y == lenghtLine - 1 || y == lenghtLine / 2 || x == 0 || x == lenghtLine - 1 || x == lenghtLine / 2) {
					cout << textureLine << " ";
				}
				else {
					cout << "  ";
				}

			}
			cout << "\n";
		}
		break;
	}
	case 10:
	{
		system("cls");
		cout << "шахматная доска\n";
		cout << "введите размер:";
		cin >> lenghtLine;

		cout << "\nвведите первое число:";
		cin >> a;
		cout << "\nвведите второе число:";
		cin >> b;
		system("cls");
		for (int y = 0; y < lenghtLine; y++) {
			for (int x = 0; x < lenghtLine; x++)
			{
				cout << " " << a << " " << b;
			}
			cout << "\n";
		}
		break;
	case 11:
	{
		system("cls");
		cout << "решетка\n";
		cout << "Введите размер:";
		cin >> lenghtLine;
		system("cls");
		for (int y = 0; y < lenghtLine; y++) {
			for (int x = 0; x < lenghtLine; x++)
			{
				if (y == 0 || y < lenghtLine || x == 0 || x == lenghtLine + 1) {
					cout << "|" << "_";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
		break;
	}
	}
	}









	int _; cin >> _;
}
