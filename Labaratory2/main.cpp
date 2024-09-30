#include <iostream>
#include <string>	
#include "DayFoodIntake.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int count = 0;
    bool check = true;
	unsigned int mass;
	cout << "\t\t\t------------------------------------------------------------------" << endl;
	cout << "\t\t\t|Программа хранения и обработки данных о суточном рационе питания|" << endl;
	cout << "\t\t\t------------------------------------------------------------------" << endl;
	do {
		cout << "------------------------------------------------------------------" << endl;
		cout << "|Введите количество приёмов пищи                                 |" << endl;
		cout << "------------------------------------------------------------------" << endl;
		if ((cin >> count).good() && count > 0) {
			check = false;
		}
		if (cin.fail() || count <= 0)
		{
			cout << "------------------------------------------------------------------" << endl;
			cout << "|ОШИБКА!!! Введите корректные данные!                            |" << endl;
			cout << "------------------------------------------------------------------" << endl;
			cin.clear();
		}
		cin.ignore(100, '\n');

	} while (check);

    DayFoodIntake intake(count);
	cout << "------------------------------------------------------------------" << endl;
	cout << "|Введите массу продукта в граммах                                |" << endl;
	cout << "------------------------------------------------------------------" << endl;
	cin >> mass;
    intake.EnteringData(mass);
	intake.OutputData();


    return 0;
}
// TODO Добавить исключения
// TODO 