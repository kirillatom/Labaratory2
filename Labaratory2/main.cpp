#include "DayFoodIntake.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    float mass;
    unsigned int meal;
    string productName;
    int count = 0;
    unsigned int massAll = 0;
    bool continueInput = true;
    bool productInput = true;
    float b = 0, j = 0, u = 0;

    cout << "\t\t\t------------------------------------------------------------------" << endl;
    cout << "\t\t\t|Программа хранения и обработки данных о суточном рационе питания|" << endl;
    cout << "\t\t\t------------------------------------------------------------------" << endl << endl;
    
    DayFoodIntake Intake;

    while (continueInput) {
        cout << "Введите номер приёма пищи : ";
        cin >> meal;
        productInput = true; 
        while (productInput) {
            
            cout << "Введите массу продукта в граммах: ";
            cin >> mass;

            cout << "Введите количество белков на 100г: ";
            cin >> b;

            cout << "Введите количество жиров на 100г: ";
            cin >> j;

            cout << "Введите количество углеводов на 100г: ";
            cin >> u;
            Intake.MealLog(mass, meal, b, j, u);

            char choice2;

            cout << "Хотите ввести еще один продукт? Y (yes) / N (no) : ";
            cin >> choice2;

            if (choice2 != 'Y' && choice2 != 'y') 
            { 
                productInput = false;
            }
        }
            char choice;
            cout << "Хотите ввести еще один приём пищи? Y (yes) / N (no) : ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y') 
            {
                continueInput = false;
            }
        
    }
    cout << endl;
    cout << "Общая масса продуктов в граммах: " << Intake.GetMassG() << endl;
    Intake.OutputData();
    cout << "Общее количество калорий: " << Intake.GetVolumeCcal() << endl;

    return 0;
}

