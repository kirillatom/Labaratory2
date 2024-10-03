#include <iostream>
#include <string.h>	
#include "DayFoodIntake.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int count = 0;
    bool check = true;
	unsigned int mass;
	unsigned int massAll = 0;
	unsigned int meal;
	unsigned int n = 0; //переменная необходимая для корректной работы цикла do while
	

	cout << "\t\t\t------------------------------------------------------------------" << endl;
	cout << "\t\t\t|Программа хранения и обработки данных о суточном рационе питания|" << endl;
	cout << "\t\t\t------------------------------------------------------------------" << endl << endl;

	cout << "Введите количество приёмов пищи: " << endl;
	cin >> count;
	n = count;
	DayFoodIntake intake(count);
	do {
		cout << "Введите номер приёма пищи (1 - Завтрак, 2 - Обед, 3 - Ужин)" << endl;
		cin >> meal;
		cout << "Введите массу продукта в граммах: " << endl;
		cin >> mass;
		massAll += mass;
		n--;
		intake.EnteringData(massAll, meal);
	} while (n > 0);
   
	cout << "Количество приёмов пищи: " << intake.GetCountIntake() << endl;
	cout << "Общая масса продуктов: " << intake.GetMassG() << endl;
	intake.OutputData();
	cout << "Общее количество каллорий: " << intake.GetVolumeCcal() << endl;
    return 0;
}
