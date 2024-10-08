#include <iostream>
#include <string>

using namespace std;

class DayFoodIntake
{
public:
	/// </summary>Конструктор по умолчанию </summary>
	DayFoodIntake();;
	/// </summary>Конструктор с параметром</summary>
	/// <param name="countIntake"></param>
	DayFoodIntake(const int& countIntake);
	// Деструктор
	~DayFoodIntake();
	// Геттеры
	unsigned int GetCountIntake() const;
	unsigned int GetMassG() const;
	unsigned int GetVolumeCcal() const;
	/// <summary>Метод расчёта данных</summary>
	void EnteringData(const unsigned int& massG, const unsigned int& mealNubmer,
		const unsigned int& protein, const unsigned int& fat, const unsigned int& carbohydrate);
    /// <summary> Метод вывода данных </summary>
	void OutputData();
private:
	//Массивы
	unsigned int* dynamincProteinArray;
	unsigned int* dynamincFatArray;
	unsigned int* dynamincCarbohydrateArray;
	//Поля
	unsigned int massG; //Масса продукта в граммах
	unsigned int volumeCcal; //Объём кило каллорий
	unsigned int countIntake; //Количество приёмов пищи
	unsigned int mealNumber; //Номер приёма пищи 
	unsigned int protein; 
	unsigned int fat;
	unsigned int carbohydrate;
	unsigned int proteinsAll = 0;
	unsigned int fatsAll = 0;
	unsigned int carbohydratesAll = 0;
	//Константы
	static const unsigned int PROTEIN_CCAL_1G = 4;
	static const unsigned int FAT_CCAL_1G = 9;
	static const unsigned int CARBOHYDRATE_CCAL_1G = 4;

};