#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdlib.h>
#define reset "\x1b[0m"
using namespace std;

enum Menu { Rules,Play3v3PlVsPC,Play4v4PlVsPc,Play5v5PlVsPC,Play3v3PlayerVsPlayer,Play4v4PlayerVsPlayer,Play5v5PlayerVsPlayer,ExitProgramm };
void getRulesVoid() /*Функция выводит правила игры*/
{
	system("cls");
	cout << "[ + ] Правила игры:\nИгроки по очереди ставят на свободные клетки поля 3x3 знаки (один всегда крестики, другой всегда нолики). Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает. Первый ход делает игрок, ставящий крестики.";
	cout << "\nОбычно по завершении партии выигравшая сторона зачёркивает чертой свои три знака(нолика или крестика), составляющих сплошной ряд." << endl;



	cout << "\n\n";
}
void getColorPaletteVoid() /*выводит палтру цветов*/
{
	cout << "0 = черный" << endl;
	cout << "1 = красный" << endl;
	cout << "2 = зеленый" << endl;
	cout << "3 = желтый" << endl;
	cout << "4 = синий" << endl;
	cout << "5 = фиолетовый" << endl;
	cout << "6 = голубой" << endl;
}
void startGamePlayerVsComputer3x3Void(int colorXF,int colorOF)
{
	srand(time(NULL));
	char gamingField[3][3]{ { '|', '|', '|'},  {'|', '|', '|',}, {'|', '|', '|'} };
	int x, y;
	int numOfMove = 0;
	bool playerWin = false, computerWin = false, noWin = false;

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (gamingField[i][j] == 'x')
				{
					cout << "\x1b[" << colorXF << "m" << gamingField[i][j] << reset;
				}
				else if (gamingField[i][j] == 'o')
				{
					cout << "\x1b[" << colorOF << "m" << gamingField[i][j] << reset;
				}
				else 
				{
					cout << gamingField[i][j];
				}
			}
			cout << endl;
		}
		cout << "Введите позицию: ";
		cin >> x >> y;
		gamingField[x - 1][y - 1] = 'x';
		numOfMove++;


		if (numOfMove != 9) {
			do {
				x = rand() % 3;
				y = rand() % 3;


			} while (gamingField[x][y] != '|');
			gamingField[x][y] = 'o';
			numOfMove++;

		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x') || // по диагонали
			(gamingField[0][2] == 'x' && gamingField[1][1] == 'x' && gamingField[2][0] == 'x'))
		{
			playerWin = true;
		}

		if ((gamingField[0][0] == 'o' && gamingField[0][1] == 'o' && gamingField[0][2] == 'o') || // по строкам
			(gamingField[1][0] == 'o' && gamingField[1][1] == 'o' && gamingField[1][2] == 'o') ||
			(gamingField[2][0] == 'o' && gamingField[2][1] == 'o' && gamingField[2][2] == 'o') ||


			(gamingField[0][0] == 'o' && gamingField[1][0] == 'o' && gamingField[2][0] == 'o') || // по столбцам
			(gamingField[0][1] == 'o' && gamingField[1][1] == 'o' && gamingField[2][1] == 'o') ||
			(gamingField[0][2] == 'o' && gamingField[1][2] == 'o' && gamingField[2][2] == 'o') ||


			(gamingField[0][0] == 'o' && gamingField[1][1] == 'o' && gamingField[2][2] == 'o') || // по диагонали
			(gamingField[0][2] == 'o' && gamingField[1][1] == 'o' && gamingField[2][0] == 'o'))
		{
			computerWin = true;

		}
		if (playerWin == false && computerWin == false && numOfMove == 9) {
			noWin = true;

		}


		system("cls");
	} while (playerWin == false && computerWin == false && noWin == false);
	if (playerWin == true) {
		cout << "Игрок выиграл!";
	}
	if (computerWin == true) {
		cout << "Компьютер выиграл!";
	}
	if (noWin == true) {
		cout << "Ничья!";
	}
}
void startGamePlayerVsComputer4x4Void(int colorXF,int colorOF)
{
	srand(time(NULL));
	char gamingField[4][4]{ { '|', '|', '|','|' },  {'|', '|', '|', '|' }, {'|', '|', '|', '|' }, {'|', '|', '|', '|' } };
	int x, y;
	int numOfMove = 0;
	bool playerWin = false, computerWin = false, noWin = false;
	bool check = true;

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (gamingField[i][j] == 'x')
				{
					cout << "\x1b[" << colorXF << "m" << gamingField[i][j] << reset;
				}
				else if (gamingField[i][j] == 'o')
				{
					cout << "\x1b[" << colorOF << "m" << gamingField[i][j] << reset;
				}
				else
				{
					cout << gamingField[i][j];
				}
			}
			cout << endl;
		}
		if (check == true) {
			cout << "Введите позицию: ";
			cin >> x >> y;
			gamingField[x - 1][y - 1] = 'x';
			numOfMove++;
			check = false;
		}
		else {


			if (numOfMove != 16) {
				do {
					x = rand() % 4;
					y = rand() % 4;


				} while (gamingField[x][y] != '|');
				gamingField[x][y] = 'o';
				numOfMove++;
				check = true;
			}

		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x' && gamingField[3][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x') || // по диагонали
			(gamingField[3][0] == 'x' && gamingField[2][1] == 'x' && gamingField[1][2] == 'x' && gamingField[0][3] == 'x')) {
			playerWin = true;
		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x') && gamingField[3][0] == 'x' || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x') || // по диагонали
			(gamingField[3][0] == 'x' && gamingField[2][1] == 'x' && gamingField[1][2] == 'x' && gamingField[0][3] == 'x')) {
			computerWin = true;

		}
		if (playerWin == false && computerWin == false && numOfMove == 16) {
			noWin = true;

		}


		system("cls");
	} while (playerWin == false && computerWin == false && noWin == false);

	if (playerWin == true) {
		cout << "Игрок выиграл! Поздравляем :)";
	}
	else if (computerWin == true) {
		cout << "Компьютер выиграл! Увы :(";
	}
	else {
		cout << "Ничья!";
	}

}
void StartGamePlayerVsComputer5x5Void(int colorXF,int colorOF)
{
	srand(time(NULL));
	char gamingField[5][5]{ { '|', '|', '|','|','|' },  {'|', '|', '|', '|','|' }, {'|', '|', '|','|', '|' }, {'|', '|','|', '|', '|' },  {'|','|', '|', '|', '|' } };
	int x, y;
	int numOfMove = 0;
	bool playerWin = false, computerWin = false, noWin = false;
	bool check = true;

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (gamingField[i][j] == 'x')
				{
					cout << "\x1b[" << colorXF << "m" << gamingField[i][j] << reset;
				}
				else if (gamingField[i][j] == 'o')
				{
					cout << "\x1b[" << colorOF << "m" << gamingField[i][j] << reset;
				}
				else
				{
					cout << gamingField[i][j];
				}
			}
			cout << endl;
		}
		if (check == true) {
			cout << "Введите позицию: ";
			cin >> x >> y;
			gamingField[x - 1][y - 1] = 'x';
			numOfMove++;
			check = false;
		}
		else {


			if (numOfMove != 25) {
				do {
					x = rand() % 4;
					y = rand() % 4;


				} while (gamingField[x][y] != '|');
				gamingField[x][y] = 'o';
				numOfMove++;
				check = true;
			}

		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x' && gamingField[0][4] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x' && gamingField[1][4] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x' && gamingField[2][4] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x' && gamingField[3][4] == 'x') ||
			(gamingField[4][0] == 'x' && gamingField[4][1] == 'x' && gamingField[4][2] == 'x' && gamingField[4][3] == 'x' && gamingField[4][4] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x' && gamingField[3][0] == 'x' && gamingField[4][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x' && gamingField[4][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x' && gamingField[4][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x' && gamingField[4][3] == 'x') ||
			(gamingField[0][4] == 'x' && gamingField[1][4] == 'x' && gamingField[2][4] == 'x' && gamingField[3][4] == 'x' && gamingField[4][4] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x' && gamingField[4][4] == 'x') || // по диагонали
			(gamingField[4][0] == 'x' && gamingField[3][1] == 'x' && gamingField[2][2] == 'x' && gamingField[1][3] == 'x' && gamingField[0][4] == 'x')) {
			playerWin = true;
		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x' && gamingField[0][4] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x' && gamingField[1][4] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x' && gamingField[2][4] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x' && gamingField[3][4] == 'x') ||
			(gamingField[4][0] == 'x' && gamingField[4][1] == 'x' && gamingField[4][2] == 'x' && gamingField[4][3] == 'x' && gamingField[4][4] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x' && gamingField[3][0] == 'x' && gamingField[4][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x' && gamingField[4][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x' && gamingField[4][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x' && gamingField[4][3] == 'x') ||
			(gamingField[0][4] == 'x' && gamingField[1][4] == 'x' && gamingField[2][4] == 'x' && gamingField[3][4] == 'x' && gamingField[4][4] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x' && gamingField[4][4] == 'x') || // по диагонали
			(gamingField[4][0] == 'x' && gamingField[3][1] == 'x' && gamingField[2][2] == 'x' && gamingField[1][3] == 'x' && gamingField[0][4] == 'x')) {
			computerWin = true;

		}
		if (playerWin == false && computerWin == false && numOfMove == 25) {
			noWin = true;

		}


		system("cls");
	} while (playerWin == false && computerWin == false && noWin == false);

	if (playerWin == true) {
		cout << "Игрок выиграл! Поздравляем :)";
	}
	else if (computerWin == true) {
		cout << " Компьютер выиграл! Увы :(";
	}
	else {
		cout << "Ничья!";
	}

}
void StartGamePlayerVsPlayer3x3Void(int colorXF, int colorOF)
{
	srand(time(NULL));
	char gamingField[3][3]{ { '|', '|', '|'},  {'|', '|', '|',}, {'|', '|', '|'} };
	int x, y;
	int numOfMove = 0;
	bool isX = true;

	bool playerWin = false, playerWin1 = false, noWin = false;

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (gamingField[i][j] == 'x')
				{
					cout << "\x1b[" << colorXF << "m" << gamingField[i][j] << reset;
				}
				else if (gamingField[i][j] == 'o')
				{
					cout << "\x1b[" << colorOF << "m" << gamingField[i][j] << reset;
				}
				else
				{
					cout << gamingField[i][j];
				}
			}
			cout << endl;
		}
		if (isX == true) {
			cout << "Введите позицию 1 игрок: ";
			cin >> x >> y;
			gamingField[x - 1][y - 1] = 'x';
			numOfMove++;
			isX = false;

		}
		else {

			if (numOfMove != 9) {
				cout << "Введите позицию 2 игрок: ";
				cin >> x >> y;
				gamingField[x - 1][y - 1] = 'o';
				numOfMove++;
				isX = true;

			}

		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x') || // по диагонали
			(gamingField[2][0] == 'x' && gamingField[1][1] == 'x' && gamingField[0][2] == 'x')) {
			playerWin = true;
		}

		if ((gamingField[0][0] == 'o' && gamingField[0][1] == 'o' && gamingField[0][2] == 'o') || // по строкам
			(gamingField[1][0] == 'o' && gamingField[1][1] == 'o' && gamingField[1][2] == 'o') ||
			(gamingField[2][0] == 'o' && gamingField[2][1] == 'o' && gamingField[2][2] == 'o') ||


			(gamingField[0][0] == 'o' && gamingField[1][0] == 'o' && gamingField[2][0] == 'o') || // по столбцам
			(gamingField[0][1] == 'o' && gamingField[1][1] == 'o' && gamingField[2][1] == 'o') ||
			(gamingField[0][2] == 'o' && gamingField[1][2] == 'o' && gamingField[2][2] == 'o') ||


			(gamingField[0][0] == 'o' && gamingField[1][1] == 'o' && gamingField[2][2] == 'o') || // по диагонали
			(gamingField[2][0] == 'o' && gamingField[1][1] == 'o' && gamingField[0][2] == 'o')) {
			playerWin1 = true;

		}
		if (playerWin == false && playerWin1 == false && numOfMove == 9) {
			noWin = true;

		}


		system("cls");
	} while (playerWin == false && playerWin1 == false && noWin == false);
	if (playerWin == true) {
		cout << "Первый Игрок выиграл!";
	}
	else if (playerWin1 == true) {
		cout << "Второй Игрок выиграл!";
	}
	else {
		cout << "Ничья!";
	}
}
void StartGamePlayerVsPlayer4x4Void(int colorXF, int colorOF)
{
	srand(time(NULL));
	char gamingField[4][4]{ { '|', '|', '|','|' },  {'|', '|', '|', '|' }, {'|', '|', '|', '|' }, {'|', '|', '|', '|' } };
	int x, y;
	int numOfMove = 0;
	bool playerWin = false, playerWin1 = false, noWin = false;
	bool check1 = true;

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (gamingField[i][j] == 'x')
				{
					cout << "\x1b[" << colorXF << "m" << gamingField[i][j] << reset;
				}
				else if (gamingField[i][j] == 'o')
				{
					cout << "\x1b[" << colorOF << "m" << gamingField[i][j] << reset;
				}
				else
				{
					cout << gamingField[i][j];
				}
			}
			cout << endl;
		}
		if (check1 == true) {
			cout << "Введите позицию 1 игрок: ";
			cin >> x >> y;
			gamingField[x - 1][y - 1] = 'x';
			numOfMove++;
			check1 = false;

		}
		else {

			if (numOfMove != 16) {
				cout << "Введите позицию 2 игрок: ";
				cin >> x >> y;
				gamingField[x - 1][y - 1] = 'o';
				numOfMove++;
				check1 = true;

			}

		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x') && gamingField[3][0] == 'x' || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x') || // по диагонали
			(gamingField[3][0] == 'x' && gamingField[2][1] == 'x' && gamingField[1][2] == 'x' && gamingField[0][3] == 'x')) {
			playerWin = true;
		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x') && gamingField[3][0] == 'x' || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x') || // по диагонали
			(gamingField[3][0] == 'x' && gamingField[2][1] == 'x' && gamingField[1][2] == 'x' && gamingField[0][3] == 'x')) {
			playerWin1 = true;

		}
		if (playerWin == false && playerWin1 == false && numOfMove == 16) {
			noWin = true;

		}


		system("cls");
	} while (playerWin == false && playerWin1 == false && noWin == false);

	if (playerWin == true) {
		cout << "Первый Игрок выиграл!";
	}
	else if (playerWin1 == true) {
		cout << "Второй Игрок выиграл!";
	}
	else {
		cout << "Ничья!";
	}
}
void StartGamePlayerVsPlayer5x5Void(int colorXF, int colorOF)
{
	srand(time(NULL));
	char gamingField[5][5]{ { '|', '|', '|','|','|' },  {'|', '|', '|', '|','|' }, {'|', '|', '|','|', '|' }, {'|', '|','|', '|', '|' },  {'|','|', '|', '|', '|' } };
	int x, y;
	int numOfMove = 0;
	bool playerWin = false, playerWin1 = false, noWin = false;
	bool check1 = true;

	do {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (gamingField[i][j] == 'x')
				{
					cout << "\x1b[" << colorXF << "m" << gamingField[i][j] << reset;
				}
				else if (gamingField[i][j] == 'o')
				{
					cout << "\x1b[" << colorOF << "m" << gamingField[i][j] << reset;
				}
				else
				{
					cout << gamingField[i][j];
				}
			}
			cout << endl;
		}
		cout << endl;

		if (check1 == true) {
			cout << "Введите позицию 1 игрок: ";
			cin >> x >> y;
			gamingField[x - 1][y - 1] = 'x';
			numOfMove++;
			check1 = false;

		}
		else {

			if (numOfMove != 25) {
				cout << "Введите позицию 2 игрок: ";
				cin >> x >> y;
				gamingField[x - 1][y - 1] = 'o';
				numOfMove++;
				check1 = true;

			}

		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x' && gamingField[0][4] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x' && gamingField[1][4] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x' && gamingField[2][4] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x' && gamingField[3][4] == 'x') ||
			(gamingField[4][0] == 'x' && gamingField[4][1] == 'x' && gamingField[4][2] == 'x' && gamingField[4][3] == 'x' && gamingField[4][4] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x' && gamingField[3][0] == 'x' && gamingField[4][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x' && gamingField[4][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x' && gamingField[4][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x' && gamingField[4][3] == 'x') ||
			(gamingField[0][4] == 'x' && gamingField[1][4] == 'x' && gamingField[2][4] == 'x' && gamingField[3][4] == 'x' && gamingField[4][4] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x' && gamingField[4][4] == 'x') || // по диагонали
			(gamingField[4][0] == 'x' && gamingField[3][1] == 'x' && gamingField[2][2] == 'x' && gamingField[1][3] == 'x' && gamingField[0][4] == 'x')) {
			playerWin = true;
		}

		if ((gamingField[0][0] == 'x' && gamingField[0][1] == 'x' && gamingField[0][2] == 'x' && gamingField[0][3] == 'x' && gamingField[0][4] == 'x') || // по строкам
			(gamingField[1][0] == 'x' && gamingField[1][1] == 'x' && gamingField[1][2] == 'x' && gamingField[1][3] == 'x' && gamingField[1][4] == 'x') ||
			(gamingField[2][0] == 'x' && gamingField[2][1] == 'x' && gamingField[2][2] == 'x' && gamingField[2][3] == 'x' && gamingField[2][4] == 'x') ||
			(gamingField[3][0] == 'x' && gamingField[3][1] == 'x' && gamingField[3][2] == 'x' && gamingField[3][3] == 'x' && gamingField[3][4] == 'x') ||
			(gamingField[4][0] == 'x' && gamingField[4][1] == 'x' && gamingField[4][2] == 'x' && gamingField[4][3] == 'x' && gamingField[4][4] == 'x') ||

			(gamingField[0][0] == 'x' && gamingField[1][0] == 'x' && gamingField[2][0] == 'x' && gamingField[3][0] == 'x' && gamingField[4][0] == 'x') || // по столбцам
			(gamingField[0][1] == 'x' && gamingField[1][1] == 'x' && gamingField[2][1] == 'x' && gamingField[3][1] == 'x' && gamingField[4][1] == 'x') ||
			(gamingField[0][2] == 'x' && gamingField[1][2] == 'x' && gamingField[2][2] == 'x' && gamingField[3][2] == 'x' && gamingField[4][2] == 'x') ||
			(gamingField[0][3] == 'x' && gamingField[1][3] == 'x' && gamingField[2][3] == 'x' && gamingField[3][3] == 'x' && gamingField[4][3] == 'x') ||
			(gamingField[0][4] == 'x' && gamingField[1][4] == 'x' && gamingField[2][4] == 'x' && gamingField[3][4] == 'x' && gamingField[4][4] == 'x') ||


			(gamingField[0][0] == 'x' && gamingField[1][1] == 'x' && gamingField[2][2] == 'x' && gamingField[3][3] == 'x' && gamingField[4][4] == 'x') || // по диагонали
			(gamingField[4][0] == 'x' && gamingField[3][1] == 'x' && gamingField[2][2] == 'x' && gamingField[1][3] == 'x' && gamingField[0][4] == 'x')) {
			playerWin1 = true;

		}
		if (playerWin == false && playerWin1 == false && numOfMove == 25) {
			noWin = true;

		}


		system("cls");
	} while (playerWin == false && playerWin1 == false && noWin == false);

	if (playerWin == true) {
		cout << "Первый Игрок выиграл!";
	}
	else if (playerWin1 == true) {
		cout << "Второй Игрок выиграл!";
	}
	else {
		cout << "Ничья!";
	}
}




int main()
{
	setlocale(LC_ALL, "ru");

	cout << "[ + ] Программа-игра \"Крестики нолики\"\n\n";
	Menu action = Rules;
	int mainAction = action; /*переменная для основного свича*/
	bool exit = true;
	while (exit)
	{
		cout << "[0] Правила\n[1] Игра 3 на 3 с ботом\n[2] Игра 4 на 4 с ботом\n[3] Игра 5 на 5 с ботом\n[4] Игра 3 на 3 с игроком\n[5] Игра 4 на 4 с игроком\n[6] Игра 5 на 5 с игроком";
		cout << "\nВаш вариант:";
		cin >> mainAction;

		switch (mainAction)
		{

		case (Rules):
		{
			getRulesVoid();
		}
		break;

		case (Play3v3PlVsPC):
		{
			int colorX;
			int colorXF=0;
			int colorO;
			int colorOF=0;
			cout << "\n[ - ]Для начала разберемся с цветами\nЗдесь вы можете поменять цвета для крестика и нолика\n\n[+] Ниже вам будет представлена палитра цветов\n";
			getColorPaletteVoid();
			cout << "Введите цвет для крестика:";
			cin >> colorX;
			cout << "\nВведите цвет для нолика:";
			cin >> colorO;
			cout << "\n\n";
			if (colorX == 0)
			{
				colorXF = 90;
			}
			else if (colorX == 1)
			{
				colorXF = 91;
			}
			else if (colorX == 2)
			{
				colorXF = 92;
			}
			else if (colorX == 3)
			{
				colorXF = 93;
			}
			else if (colorX == 4)
			{
				colorXF = 94;
			}
			else if (colorX == 5)
			{
				colorXF = 95;
			}
			else if (colorX == 6)
			{
				colorXF = 96;
			}
			if (colorO == 0)
			{
				colorOF = 90;
			}
			else if (colorO == 1)
			{
				colorOF = 91;
			}
			else if (colorO == 2)
			{
				colorOF = 92;
			}
			else if (colorO == 3)
			{
				colorOF = 93;
			}
			else if (colorO == 4)
			{
				colorOF = 94;
			}
			else if (colorO == 5)
			{
				colorOF = 95;
			}
			else if (colorO == 6)
			{
				colorOF = 96;
			}
			startGamePlayerVsComputer3x3Void(colorXF,colorOF);
		}
		break;

		case (Play4v4PlVsPc):
		{
			int colorX;
			int colorXF=0;
			int colorO;
			int colorOF=0;
			cout << "\n[ - ]Для начала разберемся с цветами\nЗдесь вы можете поменять цвета для крестика и нолика\n\n[+] Ниже вам будет представлена палитра цветов\n";
			getColorPaletteVoid();
			cout << "Введите цвет для крестика:";
			cin >> colorX;
			cout << "\nВведите цвет для нолика:";
			cin >> colorO;
			cout << "\n\n";
			if (colorX == 0)
			{
				colorXF = 90;
			}
			else if (colorX == 1)
			{
				colorXF = 91;
			}
			else if (colorX == 2)
			{
				colorXF = 92;
			}
			else if (colorX == 3)
			{
				colorXF = 93;
			}
			else if (colorX == 4)
			{
				colorXF = 94;
			}
			else if (colorX == 5)
			{
				colorXF = 95;
			}
			else if (colorX == 6)
			{
				colorXF = 96;
			}
			if (colorO == 0)
			{
				colorOF = 90;
			}
			else if (colorO == 1)
			{
				colorOF = 91;
			}
			else if (colorO == 2)
			{
				colorOF = 92;
			}
			else if (colorO == 3)
			{
				colorOF = 93;
			}
			else if (colorO == 4)
			{
				colorOF = 94;
			}
			else if (colorO == 5)
			{
				colorOF = 95;
			}
			else if (colorO == 6)
			{
				colorOF = 96;
			}
			startGamePlayerVsComputer4x4Void(colorXF,colorOF);
		}
		break;

		case(Play5v5PlVsPC):
		{
			int colorX;
			int colorXF = 0;
			int colorO;
			int colorOF = 0;
			cout << "\n[ - ]Для начала разберемся с цветами\nЗдесь вы можете поменять цвета для крестика и нолика\n\n[+] Ниже вам будет представлена палитра цветов\n";
			getColorPaletteVoid();
			cout << "Введите цвет для крестика:";
			cin >> colorX;
			cout << "\nВведите цвет для нолика:";
			cin >> colorO;
			cout << "\n\n";
			if (colorX == 0)
			{
				colorXF = 90;
			}
			else if (colorX == 1)
			{
				colorXF = 91;
			}
			else if (colorX == 2)
			{
				colorXF = 92;
			}
			else if (colorX == 3)
			{
				colorXF = 93;
			}
			else if (colorX == 4)
			{
				colorXF = 94;
			}
			else if (colorX == 5)
			{
				colorXF = 95;
			}
			else if (colorX == 6)
			{
				colorXF = 96;
			}
			if (colorO == 0)
			{
				colorOF = 90;
			}
			else if (colorO == 1)
			{
				colorOF = 91;
			}
			else if (colorO == 2)
			{
				colorOF = 92;
			}
			else if (colorO == 3)
			{
				colorOF = 93;
			}
			else if (colorO == 4)
			{
				colorOF = 94;
			}
			else if (colorO == 5)
			{
				colorOF = 95;
			}
			else if (colorO == 6)
			{
				colorOF = 96;
			}
			StartGamePlayerVsComputer5x5Void(colorXF, colorOF);
		}
		break;

		case(Play3v3PlayerVsPlayer):
		{
			int colorX;
			int colorXF=0;
			int colorO;
			int colorOF=0;
			cout << "\n[ - ]Для начала разберемся с цветами\nЗдесь вы можете поменять цвета для крестика и нолика\n\n[+] Ниже вам будет представлена палитра цветов\n";
			getColorPaletteVoid();
			cout << "Введите цвет для крестика:";
			cin >> colorX;
			cout << "\nВведите цвет для нолика:";
			cin >> colorO;
			cout << "\n\n";
			if (colorX == 0)
			{
				colorXF = 90;
			}
			else if (colorX == 1)
			{
				colorXF = 91;
			}
			else if (colorX == 2)
			{
				colorXF = 92;
			}
			else if (colorX == 3)
			{
				colorXF = 93;
			}
			else if (colorX == 4)
			{
				colorXF = 94;
			}
			else if (colorX == 5)
			{
				colorXF = 95;
			}
			else if (colorX == 6)
			{
				colorXF = 96;
			}
			if (colorO == 0)
			{
				colorOF = 90;
			}
			else if (colorO == 1)
			{
				colorOF = 91;
			}
			else if (colorO == 2)
			{
				colorOF = 92;
			}
			else if (colorO == 3)
			{
				colorOF = 93;
			}
			else if (colorO == 4)
			{
				colorOF = 94;
			}
			else if (colorO == 5)
			{
				colorOF = 95;
			}
			else if (colorO == 6)
			{
				colorOF = 96;
			}
			StartGamePlayerVsPlayer3x3Void(colorXF, colorOF);
		}
		break;

		case(Play4v4PlayerVsPlayer):
		{
			int colorX;
			int colorXF=0;
			int colorO;
			int colorOF=0;
			cout << "\n[ - ]Для начала разберемся с цветами\nЗдесь вы можете поменять цвета для крестика и нолика\n\n[+] Ниже вам будет представлена палитра цветов\n";
			getColorPaletteVoid();
			cout << "Введите цвет для крестика:";
			cin >> colorX;
			cout << "\nВведите цвет для нолика:";
			cin >> colorO;
			cout << "\n\n";
			if (colorX == 0)
			{
				colorXF = 90;
			}
			else if (colorX == 1)
			{
				colorXF = 91;
			}
			else if (colorX == 2)
			{
				colorXF = 92;
			}
			else if (colorX == 3)
			{
				colorXF = 93;
			}
			else if (colorX == 4)
			{
				colorXF = 94;
			}
			else if (colorX == 5)
			{
				colorXF = 95;
			}
			else if (colorX == 6)
			{
				colorXF = 96;
			}
			if (colorO == 0)
			{
				colorOF = 90;
			}
			else if (colorO == 1)
			{
				colorOF = 91;
			}
			else if (colorO == 2)
			{
				colorOF = 92;
			}
			else if (colorO == 3)
			{
				colorOF = 93;
			}
			else if (colorO == 4)
			{
				colorOF = 94;
			}
			else if (colorO == 5)
			{
				colorOF = 95;
			}
			else if (colorO == 6)
			{
				colorOF = 96;
			}
			StartGamePlayerVsPlayer4x4Void(colorXF, colorOF);
		}
		break;

		case(Play5v5PlayerVsPlayer):
		{
			int colorX;
			int colorXF=0;
			int colorO;
			int colorOF=0;
			cout << "\n[ - ]Для начала разберемся с цветами\nЗдесь вы можете поменять цвета для крестика и нолика\n\n[+] Ниже вам будет представлена палитра цветов\n";
			getColorPaletteVoid();
			cout << "Введите цвет для крестика:";
			cin >> colorX;
			cout << "\nВведите цвет для нолика:";
			cin >> colorO;
			cout << "\n\n";
			if (colorX == 0)
			{
				colorXF = 90;
			}
			else if (colorX == 1)
			{
				colorXF = 91;
			}
			else if (colorX == 2)
			{
				colorXF = 92;
			}
			else if (colorX == 3)
			{
				colorXF = 93;
			}
			else if (colorX == 4)
			{
				colorXF = 94;
			}
			else if (colorX == 5)
			{
				colorXF = 95;
			}
			else if (colorX == 6)
			{
				colorXF = 96;
			}
			if (colorO == 0)
			{
				colorOF = 90;
			}
			else if (colorO == 1)
			{
				colorOF = 91;
			}
			else if (colorO == 2)
			{
				colorOF = 92;
			}
			else if (colorO == 3)
			{
				colorOF = 93;
			}
			else if (colorO == 4)
			{
				colorOF = 94;
			}
			else if (colorO == 5)
			{
				colorOF = 95;
			}
			else if (colorO == 6)
			{
				colorOF = 96;
			}
			StartGamePlayerVsPlayer5x5Void(colorXF, colorOF);
		}
		break;

		case (ExitProgramm):
		{
			return 0;
		}
		default:
		{
			cout << "Ошибка! Вы выбрали несуществующий пункт!\n\n";
		}
		cout << "Если вы хотите выйти , то нажмите [0]";
		cout << "Если хотите продолжить, то нажмите [1]";
		cin >> exit;

		}

	}

	int _; cin >> _;
	return 0;
}