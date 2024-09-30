#include <iostream>

using namespace std;

class DayFoodIntake
{
	//Массивы
	unsigned int* dynamincProteinArray;
	unsigned int* dynamincFatArray;
	unsigned int* dynamincCarbohydrateArray;
	//Поля
	unsigned int massG; //Масса продукта в граммах
	unsigned int volumeCcal; //Объём кило каллорий
	unsigned int countIntake; //Количество приёмов пищи
	//Константы
	static const unsigned int PROTEIN_CCAL_1G = 4; 
	static const unsigned int FAT_CCAL_1G = 9;
	static const unsigned int CARBOHYDRATE_CCAL_1G = 4;

public:
	/// <summary>
	/// Конструктор с параметром
	/// </summary>
	/// <param name="countIntake"></param>

	DayFoodIntake(const int& countIntake) : 
		countIntake(countIntake), 
		volumeCcal(0) {

		dynamincProteinArray = new unsigned int[countIntake];
		dynamincFatArray = new unsigned int[countIntake];
		dynamincCarbohydrateArray = new unsigned int[countIntake];
	}

	// Деструктор
	~DayFoodIntake() {
		delete[] dynamincProteinArray;
		delete[] dynamincFatArray;
		delete[] dynamincCarbohydrateArray;
	}

	// Геттеры
	unsigned int GetCountIntake() const
	{
		return countIntake;
	}
	unsigned int GetMassG() const

	{
		return massG;
	}
	unsigned int GetVolumeCcal() const
	{
		return volumeCcal;
	}


	
	/// <summary>Метод получения данных</summary>
	void EnteringData();
	//Метод вывода данных
	void OutputData();

};

