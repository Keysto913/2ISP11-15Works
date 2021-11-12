#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	int const size = 10;
	int arr[size];
	bool alreadyGot;

	for (int i = 0; i < size;)
	{
		alreadyGot = false;
		int randomValue = rand() % 100;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == randomValue)
			{
				alreadyGot = true;
			}
		}

		if (alreadyGot != true)
		{
			arr[i] = randomValue;
			i++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
