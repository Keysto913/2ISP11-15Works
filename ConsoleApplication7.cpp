#include <iostream>
using namespace std;

void main()
{
		setlocale(0, "");
		cout << "Хашматная доска\n";
		cout << "Введите размер доски: ";
		int size;
		cin >> size;
		cout << "Введите текстуру для черных клеток: ";
		char texture1;
		cin >> texture1;
		cout << "Введите текстуру для белых клеток: ";
		char texture2;
		cin >> texture2;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				((j % 2 && i % 2) || (!(j % 2) && !(i % 2))) ? (cout << texture1) : (cout << texture2);
			}
			cout << '\n';
		}
		cout << "\n\n\n";
}