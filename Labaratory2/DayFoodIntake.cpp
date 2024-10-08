#include "DayFoodIntake.h"

DayFoodIntake::DayFoodIntake() {}

DayFoodIntake::DayFoodIntake(const int& countIntake) :
	countIntake(countIntake),
	volumeCcal(0),
	massG(0)
{
	dynamincProteinArray = new unsigned int[countIntake + 1];
	
	dynamincFatArray = new unsigned int[countIntake + 1];
	
	dynamincCarbohydrateArray = new unsigned int[countIntake + 1];
	for (int i = 0; i < countIntake + 1; i++) 
	{
		dynamincProteinArray[i] = 0;
	}
	for (int i = 0; i < countIntake + 1; i++) 
	{
		dynamincFatArray[i] = 0;
	}
	for (int i = 0; i < countIntake + 1; i++) 
	{
		dynamincCarbohydrateArray[i] = 0;
	}
}
DayFoodIntake::~DayFoodIntake()
{
	delete[] dynamincProteinArray;
	delete[] dynamincFatArray;
	delete[] dynamincCarbohydrateArray;
}

unsigned int DayFoodIntake::GetCountIntake() const
{
	return countIntake;
}

unsigned int DayFoodIntake::GetMassG() const
{
	return massG;
}

unsigned int DayFoodIntake::GetVolumeCcal() const
{
	return volumeCcal;
}

void DayFoodIntake::EnteringData(const unsigned int& massG, const unsigned int& mealNubmer,
  const unsigned int& protein, const unsigned int& fat, const unsigned int& carbohydrate) {
  
  if (massG <= 0) 
  {
    throw exception((string("Ошибка! Некорректный ввод данных")
      + ". Пришло: "
      + to_string(massG)).c_str());
  }
  
  if (mealNubmer < 1 || mealNubmer > 8) 
  {
    throw exception((string("Ошибка! Некорректный ввод данных")
      + ". Пришло: "
      + to_string(mealNubmer)).c_str());
  }
  if (protein <= 0)
  {
	  throw exception((string("Ошибка! Некорректный ввод данных")
		  + ". Пришло: "
		  + to_string(protein)).c_str());
  }
  if (fat <= 0)
  {
	  throw exception((string("Ошибка! Некорректный ввод данных")
		  + ". Пришло: "
		  + to_string(fat)).c_str());
  }
  if (carbohydrate <= 0)
  {
	  throw exception((string("Ошибка! Некорректный ввод данных")
		  + ". Пришло: "
		  + to_string(carbohydrate)).c_str());
  }


  this->massG += massG;

  dynamincProteinArray[mealNubmer - 1] += protein;
  volumeCcal += dynamincProteinArray[mealNubmer - 1] * PROTEIN_CCAL_1G;
  dynamincFatArray[mealNubmer - 1] += fat;
  volumeCcal += dynamincFatArray[mealNubmer - 1] * FAT_CCAL_1G;
  dynamincCarbohydrateArray[mealNubmer - 1] += carbohydrate;
  volumeCcal += dynamincCarbohydrateArray[mealNubmer - 1] * CARBOHYDRATE_CCAL_1G;

  proteinsAll += dynamincProteinArray[mealNubmer - 1];
  fatsAll += dynamincFatArray[mealNubmer - 1];
  carbohydratesAll += dynamincCarbohydrateArray[mealNubmer - 1];

  }

void DayFoodIntake::OutputData()
{
	cout << "Общее количество белка за суточный трёхразовый рацион питания: " << endl;
	for (int i = 0; i < countIntake; i++) {
		cout << dynamincProteinArray[i] << " ";
	}
	cout << endl;
	cout << "Общее количество жиров за суточный трёхразовый рацион питания: "  << endl;
	for (int i = 0; i < countIntake; i++) {
		cout << dynamincFatArray[i] << " ";
	}
	cout << endl;
	cout << "Общее количество углеводов за суточный трёхразовый рацион питания: " << endl;
	for (int i = 0; i < countIntake; i++) {
		cout << dynamincCarbohydrateArray[i] << " ";
	}
	cout << endl;
	cout << proteinsAll << endl;
	cout << fatsAll << endl;
	cout << carbohydratesAll << endl;
	

}