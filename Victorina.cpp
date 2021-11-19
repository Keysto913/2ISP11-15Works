#include <iostream>
#include <ctime>
#include <Windows.h>

#define reset "\x1b[0m"

using namespace std;

int gameMode = 0;

void showSettingsVoid()
{
	system("cls");
	cout << "[ - ] Вы попали в меню \"Настройки\"" << endl;
	cout << "[+] Выберите режим игры:" << endl;
	cout << "\n[1]\n - 5 минут\n - 5 жизней\n - 10 вопросов\n";
	cout << "\n[2]\n - 10 минут\n - 7 жизней\n - 15 вопросов\n";
	cout << "\n[3]\n - 15 минут\n - 9 жизней\n - 20 вопросов" << endl;
	cout << "-->";
	cin >> gameMode;
}
void showQuestionsVoid()
{
	system("cls");
	cout << "[0] Вопроc:В каком году Европейский Союз впервые ввел евро в качестве валюты?" << "\t" << "Ответ:1999" << endl;
	cout << "[1] Какой национальный цветок Японии?" << "\t" << "Ответ:Сакура" << endl;
	cout << "[2] Сколько полос на флаге США?" << "\t" << "Ответ:13" << endl;
	cout << "[3] Какое национальное животное Австралии?" << "\t" << "Ответ:Красный Кенгуру" << endl;
	cout << "[4] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << "\t" << "Ответ:365" << endl;
	cout << "[5] В какой из следующих империй не было письменности: инков, ацтеков, египтян, римлян?" << "\t" << "Ответ:Инков" << endl;
	cout << "[6] До 1923 года как назывался турецкий город Стамбул?" << "\t" << "Ответ:Константинополь" << endl;
	cout << "[7] Какое озеро часто называют жемчужиной итальянских озер?" << "\t" << "Ответ:Озеро Комо" << endl;
	cout << "[8] Из какой страны родом Джастин Бибер?" << "\t" << "Ответ:Канада" << endl;
	cout << "[9] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << "\t" << "Ответ:Один дома 2: Затерянный в Нью-Йорке" << endl;
	cout << "[10] Какой герой мультфильма живет в ананасе под водой?" << "\t" << "Ответ:Губка Боб Квадратные Штаны" << endl;
	cout << "[11] Что является национальным животным Шотландии?" << "\t" << "Ответ:Единорог" << endl;
	cout << "[12] Какая страна производит больше всего кофе в мире?" << "\t" << "Ответ:Бразилия" << endl;
	cout << "[13] Как называются четыре Факультета Хогвартса? " << "\t" << "Ответ:Гриффиндор, Пуффендуй, Когтевран и Слизерин" << endl;
	cout << "[14] Как называется колокол часов Вестминстерского дворца в Лондоне?" << "\t" << "Ответ:Биг Бен" << endl;
	cout << "[15] Какой безалкогольный напиток первым был взят в космос?" << "\t" << "Ответ:Кока-кола" << endl;
	cout << "[16] Сколько весит костюм Чубакки?" << "\t" << "Ответ:3,6кг" << endl;
	cout << "[17] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << "\t" << "Ответ:Кирпич" << endl;
	cout << "[18] Как называется маленький пластмассовый кусочек на конце шнурка?" << "\t" << "Ответ:Аглет" << endl;
	cout << "[19] Сколько длится мгновение?" << "\t" << "Ответ:90сек" << endl;
	cout << "[20] Какая игрушка была первой, которую рекламировали по телевидению?" << "\t" << "Ответ:Мистер Картофельная Голова" << endl;
	cout << "[21] За какую страну играл Дэвид Бекхэм?" << "\t" << "Ответ:Англия" << endl;
	cout << "[22] В какой стране находится Прага?" << "\t" << "Ответ:Чехия" << endl;
	cout << "[23] Какая служба электронной почты принадлежит компании Microsoft?" << "\t" << "Ответ:Outlook" << endl;
	cout << "[24] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << "\t" << "Ответ:Marathon" << endl;
	cout << "[25] Какая самая маленькая планета в нашей Солнечной системе?" << "\t" << "Ответ:Меркурий" << endl;
	cout << "[26] Какова длина олимпийского плавательного бассейна?" << "\t" << "Ответ:50метров" << endl;
	cout << "[27] Сколько вкусовых рецепторов имеет средний человеческий язык?" << "\t" << "Ответ:10,000" << endl;
	cout << "[28] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << "\t" << "Ответ:Красный" << endl;
	cout << "[29] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << "\t" << "Ответ:Волки" << endl;
	cout << "[30] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << "\t" << "Ответ:Титаник" << endl;
	cout << "[31] Какой национальный вид спорта Канады?" << "\t" << "Ответ:Лакросс" << endl;
	cout << "[32] Сколько минут длится матч по регби?" << "\t" << "Ответ:40 минут" << endl;
	cout << "[33] В какой стране были проведены первые Олимпийские игры?" << "\t" << "Ответ:Греция" << endl;
	cout << "[34] Сколько игроков в бейсбольной команде?" << "\t" << "Ответ:9 игроков" << endl;
	cout << "[35] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << "\t" << "Ответ:Бразилия" << endl;
	cout << "[36] Олимпийские игры проводятся каждые сколько лет?" << "\t" << "Ответ:4" << endl;
	cout << "[37] В каком году была подписана Декларация независимости США?" << "\t" << "Ответ:1776" << endl;
	cout << "[38] Когда пала Берлинская стена?" << "\t" << "Ответ:1989" << endl;
	cout << "[39] Как долго длилась Столетняя война?" << "\t" << "Ответ:116лет" << endl;
	cout << "[40] Какая страна является самой маленькой в мире?" << "\t" << "Ответ:Ватикан" << endl;


	cout << "\n\nЧтобы вернуться в меню нажмите любую клавишу" << endl;
}
void showRulesVoid()
{
	system("cls");
	cout << "Если Вы выбрали неправильный ответ, то у Вас -1 балл" << endl;
	cout << "Вам на выбор представлено 3 режима игры:\n[1]\n - 10 минут\n - 5 жизней\n - 10 вопросов\n\n[2]\n - 15 минут\n - 7 жизней\n - 15 вопросов\n\n[3]\n - 20 минут\n - 9 жизней\n - 20 вопросов  " << endl;
	cout << "Если Вы выйдете из игры, то потеряете все набранные баллы" << endl;
}
void play5L10Q5TVoid()
{
	system("cls");
	cout << "[ - ] Настройки вашего режима : 5 Жизней, 10 Вопросов, 10 Минут\n" << endl;
	system("pause");
	system("cls");
	srand(time(NULL));

	int const size = 10;
	int arr[size];
	bool alreadyGot;
	char answer;
	int lives = 5;
	int rightAnswer = 0;
	int wrongAnswer = 0;


	for (int i = 0; i < size;)
	{
		alreadyGot = false;
		int randomValue = rand() % 40;

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

		if (arr[i] == 0)
		{
			cout << "[ - ] В каком году Европейский Союз впервые ввел евро в качестве валюты?" << endl;
			cout << "a)1999\t\tс)1991\nb)1995\t\td)1994\t\te)50/50\n" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
	
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50" << endl;
				cout << "[ - ] В каком году Европейский Союз впервые ввел евро в качестве валюты?" << endl;
				cout << "a)1999\t\tс)1991\n" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				lives = lives - 1;
				wrongAnswer = wrongAnswer + 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 1)
		{
			cout << "[ - ] Какой национальный цветок Японии?" << endl;
			cout << "a)Ёлка\t\tc)Сосна\nb)Акация\t\td)Сакура\t\te)50/50\n" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой национальный цветок Японии?" << endl;
				cout << "b)Акация\t\td)Сакура\n" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}

			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 2)
		{
			cout << "[ - ] Сколько полос на флаге США?" << reset << endl;
			cout << "a)15\t\tc)21\nb)13\t\td)14\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько полос на флаге США?" << reset << endl;
				cout << "a)15\nb)13" << endl;
				cout << "-->" << endl;
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 3)
		{
			cout << "[ - ] Какое национальное животное Австралии?" << endl;
			cout << "a)Красный кенгуру\t\tc)Синий Кенгуру\nb)Черный кенгуру\t\td)Кориченый кенгуру\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;


			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какое национальное животное Австралии?" << endl;
				cout << "a)Красный кенгуру\t\tc)Синий Кенгуру" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else  if (arr[i] == 4)
		{
			cout << "[ - ] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << endl;
			cout << "a)365\t\tc)370\nb)251\t\td)180\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << endl;
				cout << "a)365\t\td)180" << endl;
				cout << "-->" << endl;
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 5)
		{
			cout << "[ - ] В какой из следующих империй не было письменности?" << endl;
			cout << "a)Инков\t\tc)Ацтеков\nb)Египтян\t\td)Римлян\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой из следующих империй не было письменности?" << endl;
				cout << "a)Инков\t\tc)Ацтеков" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 6)
		{
			cout << "[ - ] До 1923 года как назывался турецкий город Стамбул?" << endl;
			cout << "a)Константинополь\t\tc)Анкара\nb)Анталия\t\td)Кемер\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] До 1923 года как назывался турецкий город Стамбул?" << endl;
				cout << "a)Константинополь\t\t\n\t\td)Кемер" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 7)
		{
			cout << "[ - ] Какое озеро часто называют жемчужиной итальянских озер?" << endl;
			cout << "a)Байкал\t\tc)Комо\nb)Лугано\t\td)Неми\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какое озеро часто называют жемчужиной итальянских озер?" << endl;
				cout << "c)Комо\nd)Неми" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 8)
		{
			cout << "[ - ] Из какой страны родом Джастин Бибер?" << endl;
			cout << "a)Америка\t\tc)Россия\nb)Мексика\t\td)Канада\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Из какой страны родом Джастин Бибер?" << endl;
				cout << "a)Америка\nd)Канада" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 9)
		{
			cout << "[ - ] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << endl;
			cout << "a)Один дома\t\tc)Один дома 2:Затерянный в Нью-Йорке\nb)Один дома 3\t\td)Один дома 4\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << endl;
				cout << "c)Один дома 2:Затерянный в Нью-Йорке\t\td)Один дома 4" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}

		}
		else if (arr[i] == 10)
		{
			cout << "[ - ] Какой герой мультфильма живет в ананасе под водой?" << endl;
			cout << "a)Спанч-Боб\t\tc)Патрик\nb)Скидвард\t\td)Сэнди\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой герой мультфильма живет в ананасе под водой?" << endl;
				cout << "a)Спанч-Боб\t\tc)Патрик" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 11)
		{
			cout << "[ - ] Что является национальным животным Шотландии?" << endl;
			cout << "a)Муравьед\t\tc)Медведь\nb)Носорог\t\td)Единорог\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Что является национальным животным Шотландии?" << endl;
				cout << "b)Носорог\t\td)Единорог" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 12)
		{
			cout << "[ - ] Какая страна производит больше всего кофе в мире?" << endl;
			cout << "a)Украина\t\tc)Россия\nb)Бразилия\t\td)Португалия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая страна производит больше всего кофе в мире?" << endl;
				cout << "b)Бразилия\t\td)Португалия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 13)
		{
			cout << "[ - ] Как называются четыре Факультета Хогвартса?" << endl;
			cout << "a)Гриффиндор, Пуффендуй, Когтевран и Слизерин\t\tc)Грифон, Ворон, Слон и Змея\nb)Север, Восток, Запад и Юг\t\td)Красный, Синий, Зеленый и Оранжевый\ne)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называются четыре Факультета Хогвартса?" << endl;
				cout << "a)Гриффиндор, Пуффендуй, Когтевран и Слизерин\t\tc)Грифон, Ворон, Слон и Змея" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 14)
		{
			cout << "[ - ] Как называется колокол часов Вестминстерского дворца в Лондоне?" << endl;
			cout << "a)Бен Биг\t\tc)Биг Бон\nb)Биг Ланч\t\td)Биг Бэн\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называется колокол часов Вестминстерского дворца в Лондоне?" << endl;
				cout << "a)Бен Биг\t\td)Биг Бэн" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else 
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 15)
		{
			cout << "[ - ] Какой безалкогольный напиток первым был взят в космос?" << endl;
			cout << "a)Пепси\t\tc)Кока-Кола\nb)Фанта\t\td)Спрайт\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой безалкогольный напиток первым был взят в космос?" << endl;
				cout << "a)Пепси\t\tc)Кока-Кола" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 16)
		{
			cout << "[ - ] Сколько весит костюм Чубакки?" << endl;
			cout << "a)3,6кг\t\tc)7,8кг\nb)2,5кг\t\td)6,6кг\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько весит костюм Чубакки?" << endl;
				cout << "a)3,6кг\t\tc)7,8кг" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 17)
		{
			cout << "[ - ] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << endl;
			cout << "a)Солома\t\tc)Бамбук\nb)Кирпич\t\td)Бетон\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << endl;
				cout << "b)Кирпич\t\td)Бетон" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 18)
		{
			cout << "[ - ] Как называется маленький пластмассовый кусочек на конце шнурка?" << endl;
			cout << "a)Аглет\t\tc)Строка\nb)Чехол\t\td)Кружево\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называется маленький пластмассовый кусочек на конце шнурка?" << endl;
				cout << "a)Аглет\t\tc)Строка" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}			
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 19)
		{
			cout << "[ - ] Сколько длится мгновение?" << endl;
			cout << "a)60секунд\t\tc)120секунд\nb)180секунд\t\td)90секунд\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько длится мгновение?" << endl;
				cout << "c)120секунд\nd)90секунд" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 20)
		{
			cout << "[ - ] Kакая игрушка была первой, которую рекламировали по телевидению?" << endl;
			cout << "a)Барби\t\tс)Мистер Картофельная Голова\nb)Духовка с Легкой Выпечкой\t\td)Ракетный гонщик\ne)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Kакая игрушка была первой, которую рекламировали по телевидению?" << endl;
				cout << "с)Мистер Картофельная Голова\nb)Духовка с Легкой Выпечкой" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 21)
		{
			cout << "[ - ] За какую страну играл Дэвид Бекхэм?" << endl;
			cout << "a)Испания\t\tc)Бразиля\nb)Сша\t\td)Англия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] За какую страну играл Дэвид Бекхэм?" << endl;
				cout << "b)Сша\t\td)Англия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 22)
		{
			cout << "[ - ] В какой стране находится Прага?" << endl;
			cout << "a)Россия\t\tc)Чехия\nb)Франция\t\td)Германия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой стране находится Прага?" << endl;
				cout << "c)Чехия\t\td)Германия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 23)
		{
			cout << "[ - ] Какая служба электронной почты принадлежит компании Microsoft?" << endl;
			cout << "a)Outlook\t\tc)Yahoo Mail\nb)Gmail\t\td)Icloud Mail\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая служба электронной почты принадлежит компании Microsoft?" << endl;
				cout << "a)Outlook\t\td)Icloud Mail" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 24)
		{
			cout << "[ - ] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << endl;
			cout << "a)Race\t\tc)Sprint\nb)Marathon\t\td)Smile\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << endl;
				cout << "b)Marathon\t\td)Smile" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}

		}

		else if (arr[i] == 25)
		{
			cout << "[ - ] Какая самая маленькая планета в нашей Солнечной системе?" << endl;
			cout << "a)Земля\t\tc)Марс\nb)Венера\t\td)Меркурий\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая самая маленькая планета в нашей Солнечной системе?" << endl;
				cout << "c)Марс\t\td)Меркурий" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 26)
		{
			cout << "[ - ] Какова длина олимпийского плавательного бассейна?" << endl;
			cout << "a)25метров\t\tc)50метров\nb)60метров\t\td)40метров\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'с')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какова длина олимпийского плавательного бассейна?" << endl;
				cout << "c)30метров\t\tb)60метров" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 27)
		{
			cout << "[ - ] Сколько вкусовых рецепторов имеет средний человеческий язык?" << endl;
			cout << "a)10,000\t\tc)10\nb)100\t\td)1000\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько вкусовых рецепторов имеет средний человеческий язык?" << endl;
				cout << "a)10,000\t\td)1000" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 28)
		{
			cout << "[ - ] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << endl;
			cout << "a)Красный\t\tc)Зеленый\nb)Желтый\t\td)Синий\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << endl;
				cout << "a)Красный\t\td)Синий" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 29)
		{
			cout << "[ - ] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << endl;
			cout << "a)Лисы\t\tc)Приматы\nb)Волки\t\td)Медведи\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << endl;
				cout << "a)Лисы\t\tb)Волки" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 30)
		{
			cout << "[ - ] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << endl;
			cout << "a)Аватар\t\tc)Терминатор\nb)Правдивая ложь\td)Титаник\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << endl;
				cout << "c)Терминатор\t\td)Титаник" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 31)
		{
			cout << "[ - ] Какой национальный вид спорта Канады?" << endl;
			cout << "a)Лакросс\t\tc)Футбол\nb)Волейбол\t\td)Баскетбол\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой национальный вид спорта Канады?" << endl;
				cout << "a)Лакросс\t\tb)Волейбол" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 32)
		{
			cout << "[ - ] Сколько минут длится матч по регби?" << endl;
			cout << "a)80минут\t\tc)30минут\nb)60минут\t\td)120минут\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько минут длится матч по регби?" << endl;
				cout << "a)80минут\t\td)120минут" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 33)
		{
			cout << "[ - ] В какой стране были проведены первые Олимпийские игры?" << endl;
			cout << "a)Япония\t\tc)Франция\nb)Греция\t\td)Италия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой стране были проведены первые Олимпийские игры?" << endl;
				cout << "b)Греция\t\td)Италия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 34)
		{
			cout << "[ - ] Сколько игроков в бейсбольной команде?" << endl;
			cout << "a)8\t\tc)10\nb)9\t\td)11\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько игроков в бейсбольной команде?" << endl;
				cout << "a)8\t\tb)9" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 35)
		{
			cout << "[ - ] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << endl;
			cout << "a)Бразилия\t\tc)Россия\nb)Испания\t\td)Англия\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << endl;
				cout << "a)Бразилия\t\tb)Испания" << endl;
				cout << "-->";
			    cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 36)
		{
			cout << "[ - ] Олимпийские игры проводятся каждые сколько лет?" << endl;
			cout << "a)6лет\t\tc)4года\nb)5лет\t\td)7лет\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Олимпийские игры проводятся каждые сколько лет?" << endl;
				cout << "c)4года\nb)5лет" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 37)
		{
			cout << "[ - ] В каком году была подписана Декларация независимости США?" << endl;
			cout << "a)1676\t\tc)1678\nb)1775\t\td)1776\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В каком году была подписана Декларация независимости США?" << endl;
				cout << "b)1775\t\td)1776" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 38)
		{
			cout << "[ - ] Когда пала Берлинская стена?" << endl;
			cout << "a)1989\t\tc)1988\nb)1990\t\td)1991\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Когда пала Берлинская стена?" << endl;
				cout << "a)1989\t\td)1991" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 39)
		{
			cout << "[ - ] Как долго длилась Столетняя война?" << endl;
			cout << "a)100лет\t\tc)116лет\nb)50лет\t\td)101год\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как долго длилась Столетняя война?" << endl;
				cout << "a)100лет\t\tc)116лет" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 40)
		{
			cout << "[ - ] Какая страна является самой маленькой в мире?" << endl;
			cout << "a)Мальта\t\tc)Монако\nb)Мальдивы\t\td)Ватикан\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая страна является самой маленькой в мире?" << endl;
				cout << "c)Монако\t\td)Ватикан" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}



		if (lives == 0)
		{
			cout << "\nВы проиграли,начните игру заново" << endl;
			break;
		}
		if ((rightAnswer == 10 && wrongAnswer == 0) || (rightAnswer == 9 && wrongAnswer == 1) || (rightAnswer == 8 && wrongAnswer == 2) || (rightAnswer == 7 && wrongAnswer == 3) || (rightAnswer == 6 && wrongAnswer == 4) || (
			rightAnswer == 5 && wrongAnswer == 5))
		{
			cout << "\nВы победили, можете начать новую игру!!!" << endl;
			break;
		}

	}
	system("pause");

}
void play7L15Q10TVoid()
{
	system("cls");
	cout << "[ - ] Настройки вашего режима : 7 Жизней, 10 Вопросов, 15 Минут\n" << endl;
	system("pause");
	system("cls");
	srand(time(NULL));

	int const size = 15;
	int arr[size];
	bool alreadyGot;
	char answer;
	int lives = 7;
	int rightAnswer = 0;
	int wrongAnswer = 0;

	for (int i = 0; i < size;)
	{
		alreadyGot = false;
		int randomValue = rand() % 40;

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

		if (arr[i] == 0)
		{
			cout << "[ - ] В каком году Европейский Союз впервые ввел евро в качестве валюты?" << endl;
			cout << "a)1999\t\tс)1991\nb)1995\t\td)1994\t\te)50/50\n" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}

			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50" << endl;
				cout << "[ - ] В каком году Европейский Союз впервые ввел евро в качестве валюты?" << endl;
				cout << "a)1999\t\tс)1991\n" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				lives = lives - 1;
				wrongAnswer = wrongAnswer + 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 1)
		{
			cout << "[ - ] Какой национальный цветок Японии?" << endl;
			cout << "a)Ёлка\t\tc)Сосна\nb)Акация\t\td)Сакура\t\te)50/50\n" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой национальный цветок Японии?" << endl;
				cout << "b)Акация\t\td)Сакура\n" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}

			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 2)
		{
			cout << "[ - ] Сколько полос на флаге США?" << reset << endl;
			cout << "a)15\t\tc)21\nb)13\t\td)14\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько полос на флаге США?" << reset << endl;
				cout << "a)15\nb)13" << endl;
				cout << "-->" << endl;
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 3)
		{
			cout << "[ - ] Какое национальное животное Австралии?" << endl;
			cout << "a)Красный кенгуру\t\tc)Синий Кенгуру\nb)Черный кенгуру\t\td)Кориченый кенгуру\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;


			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какое национальное животное Австралии?" << endl;
				cout << "a)Красный кенгуру\t\tc)Синий Кенгуру" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else  if (arr[i] == 4)
		{
			cout << "[ - ] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << endl;
			cout << "a)365\t\tc)370\nb)251\t\td)180\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << endl;
				cout << "a)365\t\td)180" << endl;
				cout << "-->" << endl;
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 5)
		{
			cout << "[ - ] В какой из следующих империй не было письменности?" << endl;
			cout << "a)Инков\t\tc)Ацтеков\nb)Египтян\t\td)Римлян\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой из следующих империй не было письменности?" << endl;
				cout << "a)Инков\t\tc)Ацтеков" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 6)
		{
			cout << "[ - ] До 1923 года как назывался турецкий город Стамбул?" << endl;
			cout << "a)Константинополь\t\tc)Анкара\nb)Анталия\t\td)Кемер\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] До 1923 года как назывался турецкий город Стамбул?" << endl;
				cout << "a)Константинополь\t\t\n\t\td)Кемер" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 7)
		{
			cout << "[ - ] Какое озеро часто называют жемчужиной итальянских озер?" << endl;
			cout << "a)Байкал\t\tc)Комо\nb)Лугано\t\td)Неми\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какое озеро часто называют жемчужиной итальянских озер?" << endl;
				cout << "c)Комо\nd)Неми" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 8)
		{
			cout << "[ - ] Из какой страны родом Джастин Бибер?" << endl;
			cout << "a)Америка\t\tc)Россия\nb)Мексика\t\td)Канада\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Из какой страны родом Джастин Бибер?" << endl;
				cout << "a)Америка\nd)Канада" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 9)
		{
			cout << "[ - ] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << endl;
			cout << "a)Один дома\t\tc)Один дома 2:Затерянный в Нью-Йорке\nb)Один дома 3\t\td)Один дома 4\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << endl;
				cout << "c)Один дома 2:Затерянный в Нью-Йорке\t\td)Один дома 4" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}

		}
		else if (arr[i] == 10)
		{
			cout << "[ - ] Какой герой мультфильма живет в ананасе под водой?" << endl;
			cout << "a)Спанч-Боб\t\tc)Патрик\nb)Скидвард\t\td)Сэнди\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой герой мультфильма живет в ананасе под водой?" << endl;
				cout << "a)Спанч-Боб\t\tc)Патрик" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 11)
		{
			cout << "[ - ] Что является национальным животным Шотландии?" << endl;
			cout << "a)Муравьед\t\tc)Медведь\nb)Носорог\t\td)Единорог\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Что является национальным животным Шотландии?" << endl;
				cout << "b)Носорог\t\td)Единорог" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 12)
		{
			cout << "[ - ] Какая страна производит больше всего кофе в мире?" << endl;
			cout << "a)Украина\t\tc)Россия\nb)Бразилия\t\td)Португалия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая страна производит больше всего кофе в мире?" << endl;
				cout << "b)Бразилия\t\td)Португалия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 13)
		{
			cout << "[ - ] Как называются четыре Факультета Хогвартса?" << endl;
			cout << "a)Гриффиндор, Пуффендуй, Когтевран и Слизерин\t\tc)Грифон, Ворон, Слон и Змея\nb)Север, Восток, Запад и Юг\t\td)Красный, Синий, Зеленый и Оранжевый\ne)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называются четыре Факультета Хогвартса?" << endl;
				cout << "a)Гриффиндор, Пуффендуй, Когтевран и Слизерин\t\tc)Грифон, Ворон, Слон и Змея" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 14)
		{
			cout << "[ - ] Как называется колокол часов Вестминстерского дворца в Лондоне?" << endl;
			cout << "a)Бен Биг\t\tc)Биг Бон\nb)Биг Ланч\t\td)Биг Бэн\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называется колокол часов Вестминстерского дворца в Лондоне?" << endl;
				cout << "a)Бен Биг\t\td)Биг Бэн" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 15)
		{
			cout << "[ - ] Какой безалкогольный напиток первым был взят в космос?" << endl;
			cout << "a)Пепси\t\tc)Кока-Кола\nb)Фанта\t\td)Спрайт\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой безалкогольный напиток первым был взят в космос?" << endl;
				cout << "a)Пепси\t\tc)Кока-Кола" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 16)
		{
			cout << "[ - ] Сколько весит костюм Чубакки?" << endl;
			cout << "a)3,6кг\t\tc)7,8кг\nb)2,5кг\t\td)6,6кг\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько весит костюм Чубакки?" << endl;
				cout << "a)3,6кг\t\tc)7,8кг" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 17)
		{
			cout << "[ - ] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << endl;
			cout << "a)Солома\t\tc)Бамбук\nb)Кирпич\t\td)Бетон\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << endl;
				cout << "b)Кирпич\t\td)Бетон" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 18)
		{
			cout << "[ - ] Как называется маленький пластмассовый кусочек на конце шнурка?" << endl;
			cout << "a)Аглет\t\tc)Строка\nb)Чехол\t\td)Кружево\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называется маленький пластмассовый кусочек на конце шнурка?" << endl;
				cout << "a)Аглет\t\tc)Строка" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 19)
		{
			cout << "[ - ] Сколько длится мгновение?" << endl;
			cout << "a)60секунд\t\tc)120секунд\nb)180секунд\t\td)90секунд\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько длится мгновение?" << endl;
				cout << "c)120секунд\nd)90секунд" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 20)
		{
			cout << "[ - ] Kакая игрушка была первой, которую рекламировали по телевидению?" << endl;
			cout << "a)Барби\t\tс)Мистер Картофельная Голова\nb)Духовка с Легкой Выпечкой\t\td)Ракетный гонщик\ne)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Kакая игрушка была первой, которую рекламировали по телевидению?" << endl;
				cout << "с)Мистер Картофельная Голова\nb)Духовка с Легкой Выпечкой" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 21)
		{
			cout << "[ - ] За какую страну играл Дэвид Бекхэм?" << endl;
			cout << "a)Испания\t\tc)Бразиля\nb)Сша\t\td)Англия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] За какую страну играл Дэвид Бекхэм?" << endl;
				cout << "b)Сша\t\td)Англия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 22)
		{
			cout << "[ - ] В какой стране находится Прага?" << endl;
			cout << "a)Россия\t\tc)Чехия\nb)Франция\t\td)Германия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой стране находится Прага?" << endl;
				cout << "c)Чехия\t\td)Германия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 23)
		{
			cout << "[ - ] Какая служба электронной почты принадлежит компании Microsoft?" << endl;
			cout << "a)Outlook\t\tc)Yahoo Mail\nb)Gmail\t\td)Icloud Mail\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая служба электронной почты принадлежит компании Microsoft?" << endl;
				cout << "a)Outlook\t\td)Icloud Mail" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 24)
		{
			cout << "[ - ] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << endl;
			cout << "a)Race\t\tc)Sprint\nb)Marathon\t\td)Smile\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << endl;
				cout << "b)Marathon\t\td)Smile" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}

		}

		else if (arr[i] == 25)
		{
			cout << "[ - ] Какая самая маленькая планета в нашей Солнечной системе?" << endl;
			cout << "a)Земля\t\tc)Марс\nb)Венера\t\td)Меркурий\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая самая маленькая планета в нашей Солнечной системе?" << endl;
				cout << "c)Марс\t\td)Меркурий" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 26)
		{
			cout << "[ - ] Какова длина олимпийского плавательного бассейна?" << endl;
			cout << "a)25метров\t\tc)50метров\nb)60метров\t\td)40метров\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'с')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какова длина олимпийского плавательного бассейна?" << endl;
				cout << "c)30метров\t\tb)60метров" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 27)
		{
			cout << "[ - ] Сколько вкусовых рецепторов имеет средний человеческий язык?" << endl;
			cout << "a)10,000\t\tc)10\nb)100\t\td)1000\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько вкусовых рецепторов имеет средний человеческий язык?" << endl;
				cout << "a)10,000\t\td)1000" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 28)
		{
			cout << "[ - ] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << endl;
			cout << "a)Красный\t\tc)Зеленый\nb)Желтый\t\td)Синий\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << endl;
				cout << "a)Красный\t\td)Синий" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 29)
		{
			cout << "[ - ] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << endl;
			cout << "a)Лисы\t\tc)Приматы\nb)Волки\t\td)Медведи\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << endl;
				cout << "a)Лисы\t\tb)Волки" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 30)
		{
			cout << "[ - ] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << endl;
			cout << "a)Аватар\t\tc)Терминатор\nb)Правдивая ложь\td)Титаник\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << endl;
				cout << "c)Терминатор\t\td)Титаник" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 31)
		{
			cout << "[ - ] Какой национальный вид спорта Канады?" << endl;
			cout << "a)Лакросс\t\tc)Футбол\nb)Волейбол\t\td)Баскетбол\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой национальный вид спорта Канады?" << endl;
				cout << "a)Лакросс\t\tb)Волейбол" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 32)
		{
			cout << "[ - ] Сколько минут длится матч по регби?" << endl;
			cout << "a)80минут\t\tc)30минут\nb)60минут\t\td)120минут\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько минут длится матч по регби?" << endl;
				cout << "a)80минут\t\td)120минут" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 33)
		{
			cout << "[ - ] В какой стране были проведены первые Олимпийские игры?" << endl;
			cout << "a)Япония\t\tc)Франция\nb)Греция\t\td)Италия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой стране были проведены первые Олимпийские игры?" << endl;
				cout << "b)Греция\t\td)Италия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 34)
		{
			cout << "[ - ] Сколько игроков в бейсбольной команде?" << endl;
			cout << "a)8\t\tc)10\nb)9\t\td)11\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько игроков в бейсбольной команде?" << endl;
				cout << "a)8\t\tb)9" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 35)
		{
			cout << "[ - ] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << endl;
			cout << "a)Бразилия\t\tc)Россия\nb)Испания\t\td)Англия\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << endl;
				cout << "a)Бразилия\t\tb)Испания" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 36)
		{
			cout << "[ - ] Олимпийские игры проводятся каждые сколько лет?" << endl;
			cout << "a)6лет\t\tc)4года\nb)5лет\t\td)7лет\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Олимпийские игры проводятся каждые сколько лет?" << endl;
				cout << "c)4года\nb)5лет" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 37)
		{
			cout << "[ - ] В каком году была подписана Декларация независимости США?" << endl;
			cout << "a)1676\t\tc)1678\nb)1775\t\td)1776\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В каком году была подписана Декларация независимости США?" << endl;
				cout << "b)1775\t\td)1776" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 38)
		{
			cout << "[ - ] Когда пала Берлинская стена?" << endl;
			cout << "a)1989\t\tc)1988\nb)1990\t\td)1991\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Когда пала Берлинская стена?" << endl;
				cout << "a)1989\t\td)1991" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 39)
		{
			cout << "[ - ] Как долго длилась Столетняя война?" << endl;
			cout << "a)100лет\t\tc)116лет\nb)50лет\t\td)101год\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как долго длилась Столетняя война?" << endl;
				cout << "a)100лет\t\tc)116лет" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 40)
		{
			cout << "[ - ] Какая страна является самой маленькой в мире?" << endl;
			cout << "a)Мальта\t\tc)Монако\nb)Мальдивы\t\td)Ватикан\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая страна является самой маленькой в мире?" << endl;
				cout << "c)Монако\t\td)Ватикан" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}



		if (lives == 0)
		{
			cout << "\nВы проиграли,начните игру заново" << endl;
			break;
		}
		if ((rightAnswer == 15 && wrongAnswer == 0) || (rightAnswer == 14 && wrongAnswer == 1) || (rightAnswer == 13 && wrongAnswer == 2) || (rightAnswer == 12 && wrongAnswer == 3) || (rightAnswer == 11 && wrongAnswer == 4
			) || (rightAnswer == 10 && wrongAnswer == 5) || (rightAnswer == 9 && wrongAnswer == 6) || (rightAnswer == 8 && wrongAnswer == 7))
		{
			cout << "\nВы победили, можете начать новую игру!!!" << endl;
			break;
		}

	}
	system("pause");
}
void play9L20Q15TVoid()
{
	system("cls");
	cout << "[ - ] Настройки вашего режима : 9 Жизней, 20 Вопросов, 20 Минут\n" << endl;
	system("pause");
	system("cls");
	srand(time(NULL));

	int const size = 20;
	int arr[size];
	bool alreadyGot;
	char answer;
	int lives = 9;
	int rightAnswer = 0;
	int wrongAnswer = 0;

	for (int i = 0; i < size;)
	{
		alreadyGot = false;
		int randomValue = rand() % 40;

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

		if (arr[i] == 0)
		{
			cout << "[ - ] В каком году Европейский Союз впервые ввел евро в качестве валюты?" << endl;
			cout << "a)1999\t\tс)1991\nb)1995\t\td)1994\t\te)50/50\n" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}

			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50" << endl;
				cout << "[ - ] В каком году Европейский Союз впервые ввел евро в качестве валюты?" << endl;
				cout << "a)1999\t\tс)1991\n" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				lives = lives - 1;
				wrongAnswer = wrongAnswer + 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 1)
		{
			cout << "[ - ] Какой национальный цветок Японии?" << endl;
			cout << "a)Ёлка\t\tc)Сосна\nb)Акация\t\td)Сакура\t\te)50/50\n" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой национальный цветок Японии?" << endl;
				cout << "b)Акация\t\td)Сакура\n" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}

			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 2)
		{
			cout << "[ - ] Сколько полос на флаге США?" << reset << endl;
			cout << "a)15\t\tc)21\nb)13\t\td)14\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько полос на флаге США?" << reset << endl;
				cout << "a)15\nb)13" << endl;
				cout << "-->" << endl;
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 3)
		{
			cout << "[ - ] Какое национальное животное Австралии?" << endl;
			cout << "a)Красный кенгуру\t\tc)Синий Кенгуру\nb)Черный кенгуру\t\td)Кориченый кенгуру\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;


			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какое национальное животное Австралии?" << endl;
				cout << "a)Красный кенгуру\t\tc)Синий Кенгуру" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else  if (arr[i] == 4)
		{
			cout << "[ - ] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << endl;
			cout << "a)365\t\tc)370\nb)251\t\td)180\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?" << endl;
				cout << "a)365\t\td)180" << endl;
				cout << "-->" << endl;
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 5)
		{
			cout << "[ - ] В какой из следующих империй не было письменности?" << endl;
			cout << "a)Инков\t\tc)Ацтеков\nb)Египтян\t\td)Римлян\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой из следующих империй не было письменности?" << endl;
				cout << "a)Инков\t\tc)Ацтеков" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 6)
		{
			cout << "[ - ] До 1923 года как назывался турецкий город Стамбул?" << endl;
			cout << "a)Константинополь\t\tc)Анкара\nb)Анталия\t\td)Кемер\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] До 1923 года как назывался турецкий город Стамбул?" << endl;
				cout << "a)Константинополь\t\t\n\t\td)Кемер" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 7)
		{
			cout << "[ - ] Какое озеро часто называют жемчужиной итальянских озер?" << endl;
			cout << "a)Байкал\t\tc)Комо\nb)Лугано\t\td)Неми\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какое озеро часто называют жемчужиной итальянских озер?" << endl;
				cout << "c)Комо\nd)Неми" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;

			}
		}
		else if (arr[i] == 8)
		{
			cout << "[ - ] Из какой страны родом Джастин Бибер?" << endl;
			cout << "a)Америка\t\tc)Россия\nb)Мексика\t\td)Канада\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Из какой страны родом Джастин Бибер?" << endl;
				cout << "a)Америка\nd)Канада" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 9)
		{
			cout << "[ - ] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << endl;
			cout << "a)Один дома\t\tc)Один дома 2:Затерянный в Нью-Йорке\nb)Один дома 3\t\td)Один дома 4\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В сиквеле какого праздничного фильма снялся Дональд Трамп?" << endl;
				cout << "c)Один дома 2:Затерянный в Нью-Йорке\t\td)Один дома 4" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}

		}
		else if (arr[i] == 10)
		{
			cout << "[ - ] Какой герой мультфильма живет в ананасе под водой?" << endl;
			cout << "a)Спанч-Боб\t\tc)Патрик\nb)Скидвард\t\td)Сэнди\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой герой мультфильма живет в ананасе под водой?" << endl;
				cout << "a)Спанч-Боб\t\tc)Патрик" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 11)
		{
			cout << "[ - ] Что является национальным животным Шотландии?" << endl;
			cout << "a)Муравьед\t\tc)Медведь\nb)Носорог\t\td)Единорог\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Что является национальным животным Шотландии?" << endl;
				cout << "b)Носорог\t\td)Единорог" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 12)
		{
			cout << "[ - ] Какая страна производит больше всего кофе в мире?" << endl;
			cout << "a)Украина\t\tc)Россия\nb)Бразилия\t\td)Португалия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая страна производит больше всего кофе в мире?" << endl;
				cout << "b)Бразилия\t\td)Португалия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 13)
		{
			cout << "[ - ] Как называются четыре Факультета Хогвартса?" << endl;
			cout << "a)Гриффиндор, Пуффендуй, Когтевран и Слизерин\t\tc)Грифон, Ворон, Слон и Змея\nb)Север, Восток, Запад и Юг\t\td)Красный, Синий, Зеленый и Оранжевый\ne)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называются четыре Факультета Хогвартса?" << endl;
				cout << "a)Гриффиндор, Пуффендуй, Когтевран и Слизерин\t\tc)Грифон, Ворон, Слон и Змея" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 14)
		{
			cout << "[ - ] Как называется колокол часов Вестминстерского дворца в Лондоне?" << endl;
			cout << "a)Бен Биг\t\tc)Биг Бон\nb)Биг Ланч\t\td)Биг Бэн\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называется колокол часов Вестминстерского дворца в Лондоне?" << endl;
				cout << "a)Бен Биг\t\td)Биг Бэн" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 15)
		{
			cout << "[ - ] Какой безалкогольный напиток первым был взят в космос?" << endl;
			cout << "a)Пепси\t\tc)Кока-Кола\nb)Фанта\t\td)Спрайт\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой безалкогольный напиток первым был взят в космос?" << endl;
				cout << "a)Пепси\t\tc)Кока-Кола" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 16)
		{
			cout << "[ - ] Сколько весит костюм Чубакки?" << endl;
			cout << "a)3,6кг\t\tc)7,8кг\nb)2,5кг\t\td)6,6кг\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько весит костюм Чубакки?" << endl;
				cout << "a)3,6кг\t\tc)7,8кг" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 17)
		{
			cout << "[ - ] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << endl;
			cout << "a)Солома\t\tc)Бамбук\nb)Кирпич\t\td)Бетон\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Из чего сделан самый крепкий дом в \"Трех поросятах\"?" << endl;
				cout << "b)Кирпич\t\td)Бетон" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 18)
		{
			cout << "[ - ] Как называется маленький пластмассовый кусочек на конце шнурка?" << endl;
			cout << "a)Аглет\t\tc)Строка\nb)Чехол\t\td)Кружево\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как называется маленький пластмассовый кусочек на конце шнурка?" << endl;
				cout << "a)Аглет\t\tc)Строка" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 19)
		{
			cout << "[ - ] Сколько длится мгновение?" << endl;
			cout << "a)60секунд\t\tc)120секунд\nb)180секунд\t\td)90секунд\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько длится мгновение?" << endl;
				cout << "c)120секунд\nd)90секунд" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 20)
		{
			cout << "[ - ] Kакая игрушка была первой, которую рекламировали по телевидению?" << endl;
			cout << "a)Барби\t\tс)Мистер Картофельная Голова\nb)Духовка с Легкой Выпечкой\t\td)Ракетный гонщик\ne)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Kакая игрушка была первой, которую рекламировали по телевидению?" << endl;
				cout << "с)Мистер Картофельная Голова\nb)Духовка с Легкой Выпечкой" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 21)
		{
			cout << "[ - ] За какую страну играл Дэвид Бекхэм?" << endl;
			cout << "a)Испания\t\tc)Бразиля\nb)Сша\t\td)Англия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] За какую страну играл Дэвид Бекхэм?" << endl;
				cout << "b)Сша\t\td)Англия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 22)
		{
			cout << "[ - ] В какой стране находится Прага?" << endl;
			cout << "a)Россия\t\tc)Чехия\nb)Франция\t\td)Германия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой стране находится Прага?" << endl;
				cout << "c)Чехия\t\td)Германия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 23)
		{
			cout << "[ - ] Какая служба электронной почты принадлежит компании Microsoft?" << endl;
			cout << "a)Outlook\t\tc)Yahoo Mail\nb)Gmail\t\td)Icloud Mail\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая служба электронной почты принадлежит компании Microsoft?" << endl;
				cout << "a)Outlook\t\td)Icloud Mail" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 24)
		{
			cout << "[ - ] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << endl;
			cout << "a)Race\t\tc)Sprint\nb)Marathon\t\td)Smile\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как назывался батончик \"Сникерс\" до его смены названия в 1990 году?" << endl;
				cout << "b)Marathon\t\td)Smile" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}

		}

		else if (arr[i] == 25)
		{
			cout << "[ - ] Какая самая маленькая планета в нашей Солнечной системе?" << endl;
			cout << "a)Земля\t\tc)Марс\nb)Венера\t\td)Меркурий\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая самая маленькая планета в нашей Солнечной системе?" << endl;
				cout << "c)Марс\t\td)Меркурий" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 26)
		{
			cout << "[ - ] Какова длина олимпийского плавательного бассейна?" << endl;
			cout << "a)25метров\t\tc)50метров\nb)60метров\t\td)40метров\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'с')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;

			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какова длина олимпийского плавательного бассейна?" << endl;
				cout << "c)30метров\t\tb)60метров" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 27)
		{
			cout << "[ - ] Сколько вкусовых рецепторов имеет средний человеческий язык?" << endl;
			cout << "a)10,000\t\tc)10\nb)100\t\td)1000\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько вкусовых рецепторов имеет средний человеческий язык?" << endl;
				cout << "a)10,000\t\td)1000" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 28)
		{
			cout << "[ - ] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << endl;
			cout << "a)Красный\t\tc)Зеленый\nb)Желтый\t\td)Синий\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какого цвета была таблетка, которую принимает Нео в фильме \"Матрица\"?" << endl;
				cout << "a)Красный\t\td)Синий" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 29)
		{
			cout << "[ - ] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << endl;
			cout << "a)Лисы\t\tc)Приматы\nb)Волки\t\td)Медведи\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какие животные воспитывали Маугли в \"Книге джунглей\"?" << endl;
				cout << "a)Лисы\t\tb)Волки" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 30)
		{
			cout << "[ - ] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << endl;
			cout << "a)Аватар\t\tc)Терминатор\nb)Правдивая ложь\td)Титаник\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой фильм, написанный, снятый и спродюсированный Джеймсом Кэмероном, стал самым кассовым фильмом своего времени?" << endl;
				cout << "c)Терминатор\t\td)Титаник" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 31)
		{
			cout << "[ - ] Какой национальный вид спорта Канады?" << endl;
			cout << "a)Лакросс\t\tc)Футбол\nb)Волейбол\t\td)Баскетбол\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какой национальный вид спорта Канады?" << endl;
				cout << "a)Лакросс\t\tb)Волейбол" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 32)
		{
			cout << "[ - ] Сколько минут длится матч по регби?" << endl;
			cout << "a)80минут\t\tc)30минут\nb)60минут\t\td)120минут\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько минут длится матч по регби?" << endl;
				cout << "a)80минут\t\td)120минут" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 33)
		{
			cout << "[ - ] В какой стране были проведены первые Олимпийские игры?" << endl;
			cout << "a)Япония\t\tc)Франция\nb)Греция\t\td)Италия\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В какой стране были проведены первые Олимпийские игры?" << endl;
				cout << "b)Греция\t\td)Италия" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 34)
		{
			cout << "[ - ] Сколько игроков в бейсбольной команде?" << endl;
			cout << "a)8\t\tc)10\nb)9\t\td)11\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'b')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Сколько игроков в бейсбольной команде?" << endl;
				cout << "a)8\t\tb)9" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'b')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 35)
		{
			cout << "[ - ] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << endl;
			cout << "a)Бразилия\t\tc)Россия\nb)Испания\t\td)Англия\t\te)50/50" << endl;
			cout << "-->" << endl;
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая единственная страна принимала участие во всех чемпионатах мира по футболу?" << endl;
				cout << "a)Бразилия\t\tb)Испания" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 36)
		{
			cout << "[ - ] Олимпийские игры проводятся каждые сколько лет?" << endl;
			cout << "a)6лет\t\tc)4года\nb)5лет\t\td)7лет\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Олимпийские игры проводятся каждые сколько лет?" << endl;
				cout << "c)4года\nb)5лет" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 37)
		{
			cout << "[ - ] В каком году была подписана Декларация независимости США?" << endl;
			cout << "a)1676\t\tc)1678\nb)1775\t\td)1776\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] В каком году была подписана Декларация независимости США?" << endl;
				cout << "b)1775\t\td)1776" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 38)
		{
			cout << "[ - ] Когда пала Берлинская стена?" << endl;
			cout << "a)1989\t\tc)1988\nb)1990\t\td)1991\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'a')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Когда пала Берлинская стена?" << endl;
				cout << "a)1989\t\td)1991" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'a')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}
		else if (arr[i] == 39)
		{
			cout << "[ - ] Как долго длилась Столетняя война?" << endl;
			cout << "a)100лет\t\tc)116лет\nb)50лет\t\td)101год\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'c')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Как долго длилась Столетняя война?" << endl;
				cout << "a)100лет\t\tc)116лет" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'c')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}

		else if (arr[i] == 40)
		{
			cout << "[ - ] Какая страна является самой маленькой в мире?" << endl;
			cout << "a)Мальта\t\tc)Монако\nb)Мальдивы\t\td)Ватикан\t\te)50/50" << endl;
			cout << "-->";
			cin >> answer;
			if (answer == 'd')
			{
				rightAnswer = rightAnswer + 1;
				cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
				cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
			}
			else if (answer == 'e')
			{
				cout << "Вы выбрали опцию 50/50\n" << endl;
				cout << "[ - ] Какая страна является самой маленькой в мире?" << endl;
				cout << "c)Монако\t\td)Ватикан" << endl;
				cout << "-->";
				cin >> answer;
				if (answer == 'd')
				{
					rightAnswer = rightAnswer + 1;
					cout << "\n\x1b[92mЭто правильный ответ!\n" << reset << endl;
					cout << "Вы ответили на " << rightAnswer << " вопрос(ов) правильно" << endl;
				}
				else
				{
					wrongAnswer = wrongAnswer + 1;
					lives = lives - 1;
					cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
					cout << "У вас осталось " << lives << " жизней\n" << endl;
				}

			}
			else
			{
				wrongAnswer = wrongAnswer + 1;
				lives = lives - 1;
				cout << "\n\x1b[91mЭто неправильный ответ!" << reset << endl;
				cout << "У вас осталось " << lives << " жизней\n" << endl;
			}
		}



		if (lives == 0)
		{
			cout << "\nВы проиграли,начните игру заново" << endl;
			break;
		}
		if ((rightAnswer == 20 && wrongAnswer == 0) || (rightAnswer == 19 && wrongAnswer == 1) || (rightAnswer == 18 && wrongAnswer == 2) || (rightAnswer == 17 && wrongAnswer == 3) || (rightAnswer == 16 && wrongAnswer == 4) || (rightAnswer == 15 && wrongAnswer == 5) || (rightAnswer == 14 && wrongAnswer == 6) || (rightAnswer == 13 && wrongAnswer == 7) || (rightAnswer == 12 && wrongAnswer == 8) || (rightAnswer == 11 && wrongAnswer == 9))
		{
			cout << "\nВы победили, можете начать новую игру!!!" << endl;
			break;
		}

	}
	system("pause");
}


int main()
{
	setlocale(LC_ALL, "ru");

	cout << "[ - ]Программа - \"Викторина\"" << endl;
	int action;

	bool exit = true;

	while (exit)
	{
		system("cls");
		cout << "\n[ - ] Меню" << endl;
		cout << "[0] Настройки(Обязательно зайти перед началом игры)" << endl;
		cout << "[1] Играть" << endl;
		cout << "[2] Правила" << endl;
		cout << "[3] Выход" << endl;
		cout << "[4] Вопросы и ответы для проверки" << endl;

		cout << "\nВаш выбор —>";
		cin >> action;
		switch (action)
		{
		case 0:
		{
			showSettingsVoid();
			system("pause");
		}
		break;

		case 1:
		{
			if (gameMode == 1)
			{

				play5L10Q5TVoid();
			}
			else if (gameMode == 2)
			{

				play7L15Q10TVoid();
			}
			else if (gameMode == 3)
			{

				play9L20Q15TVoid();
			}
			else
			{
				cout << "Вы выбрали неверный режим, повторите попытку" << endl;
			}
		}
		break;

		case 2:
		{
			showRulesVoid();
			system("pause");
		}
		break;

		case 3:
		{
			return 0;
		}
		break;

		case 4:
		{
			showQuestionsVoid();
			system("pause");
		}
		break;

		default:
		{
			cout << "Ошибка! Вы выбрали несуществующий пункт!\n\n";
		}
		cout << "Если хотите выйти, то нажмите [0]" << endl;
		cout << "Если хотите продолжить , то нажмите [1]" << endl;
		}


	}

	int _; cin >> _;
	return 0;

}