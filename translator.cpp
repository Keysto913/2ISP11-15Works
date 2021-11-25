#include <iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "ru");
    cout << "[~]Переводчик\n\n";
    cout << "[1]Словарь русского языка\n";
    cout << "[2]Словарь английского языка\n\n";
    cout << "[3]Выход\n\n";
    cout << "Выберите словарь:  ";
    int dictionary;
    cin >> dictionary;

    switch (dictionary)
    {
    case 1:
        cout << "Словарь русско - английский\n\n";
        cout << " [1] Дом\n";
        cout << " [2] Вода\n";
        cout << " [3] Земля\n";
        cout << " [4] Огонь\n";
        cout << " [5] Воздух\n";
        cout << " [6] Ручка\n";
        cout << " [7] Рука\n";
        cout << " [8] Нога\n";
        cout << " [9] Школа\n";
        cout << " [10] Галерея\n";
        cout << " [11] Газета\n";
        cout << " [12] Письмо\n";
        cout << " [13] Компьютер\n";
        cout << " [14] Клавиатура\n";
        cout << " [15] Диск\n\n";

        cout << "Выберите номер слова, которое хотите перевести:";
        int rus;
        cin >> rus;
        switch (rus)
        {
        case 1:
            cout << "Перевод:Дом - House";
            break;
        case 2:
            cout << "Перевод:Вода - Water";
            break;
        case 3:
            cout << "Перевод:Земля -  Earth";
            break;
        case 4:
            cout << "Перевод:Огонь - Fire";
            break;
        case 5:
            cout << "Перевод:Воздух - Air";
            break;
        case 6:
            cout << "Перевод:Ручка - pen";
            break;
        case 7:
            cout << "Перевод:Рука - Arm";
            break;
        case 8:
            cout << "Перевод:Нога - Leg";
            break;
        case 9:
            cout << "Перевод:Школа -  School";
            break;
        case 10:
            cout << "Перевод:Галерея - Gallery";
            break;
        case 11:
            cout << "Перевод:Газета - Newspaper";
            break;
        case 12:
            cout << "Перевод:Письмо - Letter";
            break;
        case 13:
            cout << "Перевод:Компьютер - Computer";
            break;
        case 14:
            cout << "Перевод:Клавиатура - Keyboard";
            break;
        case 15:
            cout << "Перевод:Диск - Disk";
            break;
        default:
            cout << " Нет такого слова, повторите попытку!";
        }
    case 2:
        cout << "Словарь англо-русский\n";
        cout << " [1] House - Дом\n";
        cout << " [2] Water - Вода\n";
        cout << " [3] Earth - Земля\n";
        cout << " [4] Fire - Огонь\n";
        cout << " [5] Air - Воздух\n";
        cout << " [6] Pen - Ручка\n";
        cout << " [7] Arm - Рука\n";
        cout << " [8] Leg - Нога\n";
        cout << " [9] School - Школа\n";
        cout << " [10] Gallery - Галерея\n";
        cout << " [11] Newspaper - Газета\n";
        cout << " [12] Letter - Письмо\n";
        cout << " [13] Computer- Компьютер\n";
        cout << " [14] Keyboard - Клавиатура\n";
        cout << " [15] Disk - Диск\n\n";

        cout << "Выберите номер слова, которое хотите перевести:";
        int eng;
        cin >> eng;

        switch (eng)
        {
        case 1:
            cout << "Перевод:House - Дом";
            break;
        case 2:
            cout << "Перевод:Water - Вода";
            break;
        case 3:
            cout << "Перевод:Earth - Земля";
            break;
        case 4:
            cout << "Перевод:Fire - Огонь";
            break;
        case 5:
            cout << "Перевод:Air - Воздух";
            break;
        case 6:
            cout << "Перевод:Pen - Ручка";
            break;
        case 7:
            cout << "Перевод:Arm - Рука";
            break;
        case 8:
            cout << "Перевод:Leg - Нога";
            break;
        case 9:
            cout << "Перевод:School - Школа";
            break;
        case 10:
            cout << "Перевод:Gallery - Галерея";
            break;
        case 11:
            cout << "Перевод:Newspaper - Газета";
            break;
        case 12:
            cout << "Перевод:Letter - Письмо";
            break;
        case 13:
            cout << "Перевод:Computer- Компьютер";
            break;
        case 14:
            cout << "Перевод:Keyboard - Клавиатура";
            break;
        case 15:
            cout << "Перевод:Disk - Диск";
            break;
        default:
            cout << " Данного слова нет, повторите попытку!";
            break;
        }
    case 3:
        return 0;
    }

    int _; cin >> _;
}