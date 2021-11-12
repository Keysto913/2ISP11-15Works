#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 5;
	int INT[SIZE] = { 1,2,3,4,5 };
	float FLOAT[SIZE] = { 1.1,2.1,3.1,4.1,5.1 };
	double DOUBLE[SIZE] = { 1.2,2.2,3.2,4.2,5.2 };
	string STRING[SIZE] = { "AB","BC","CD","DE","EF" };
	short SHORT[SIZE] = { 1,2,3,4,5 };
	long LONG[SIZE] = { 1,2,3,4,5 };
	char CHAr[SIZE] = { 'A','B','C','D','E' };
	bool BOOL[SIZE] = { 1,1,1,1,1 };
	cout << "Интовый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << INT[i] << endl;
	}
	cout << "флоатный массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << FLOAT[i] << endl;
	}
	cout << "Дабловый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << DOUBLE[i] << endl;
	}
	cout << "Стринговый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << STRING[i] << endl;
	}
	cout << "Шортовый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << SHORT[i] << endl;;
	}

	cout << "Лонговый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << LONG[i] << endl;
	}
	cout << "Чаровый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << CHAr[i] << endl;
	}
	cout << "Буловый массив\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << "[" << i << "] = " << BOOL[i] << endl;
	}

}