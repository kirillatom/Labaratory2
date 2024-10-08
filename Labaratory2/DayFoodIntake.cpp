#include "DayFoodIntake.h"

DayFoodIntake::DayFoodIntake()
	: countIntake(10), volumeCcal(0), massG(0) {

	dynamincProteinArray = new float[countIntake];
	dynamincFatArray = new float[countIntake];
	dynamincCarbohydrateArray = new float[countIntake];

	for (int i = 0; i <= countIntake; i++) {
		dynamincProteinArray[i] = -1;
		dynamincFatArray[i] = -1;
		dynamincCarbohydrateArray[i] = -1;
	}
}
DayFoodIntake::~DayFoodIntake()
{
	delete[] dynamincProteinArray;
	delete[] dynamincFatArray;
	delete[] dynamincCarbohydrateArray;
}

unsigned int DayFoodIntake::GetCount() const
{
	return count;
}

float DayFoodIntake::GetMassG() const
{
	return massG;
}

float DayFoodIntake::GetVolumeCcal() const
{
	return volumeCcal;
}

void DayFoodIntake::MealLog(const float& massG, const unsigned int& mealNumber, const float& protein, const float& fat, const float& carbohydrate) {
  
  if (massG <= 0) 
  {
    throw exception((string("Ошибка! Некорректный ввод данных")
      + ". Пришло: "
      + to_string(massG)).c_str());
  }
  
  if (mealNumber < 1)
  {
    throw exception((string("Ошибка! Некорректный ввод данных")
      + ". Пришло: "
      + to_string(mealNumber)).c_str());
  }
  if (mealNumber >= 11)
  {
	  throw exception((string("Ошибка! Некорректный ввод данных")
		  + ". Пришло: "
		  + to_string(mealNumber)).c_str());
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

  dynamincProteinArray[mealNumber - 1] += (protein / 100) * massG;
  volumeCcal += dynamincProteinArray[mealNumber - 1] * PROTEIN_CCAL_1G;
  dynamincFatArray[mealNumber - 1] += (fat / 100) * massG;
  volumeCcal += dynamincFatArray[mealNumber - 1] * FAT_CCAL_1G;
  dynamincCarbohydrateArray[mealNumber - 1] += (carbohydrate / 100) * massG;
  volumeCcal += dynamincCarbohydrateArray[mealNumber - 1] * CARBOHYDRATE_CCAL_1G;

  proteinsAll += (protein / 100) * massG;
  fatsAll += (fat / 100) * massG;
  carbohydratesAll += (carbohydrate / 100) * massG;

  }

void DayFoodIntake::OutputData()
{ 
	for (int i = 0; i <= countIntake; i++) {
		if (dynamincProteinArray[i] != -1 && dynamincFatArray[i] != -1 && dynamincCarbohydrateArray[i] != -1)
		{
			count++;
			cout << "Сводка БЖУ за " << i + 1 << " приём пищи: " << endl;
			cout << "Белки: " << dynamincProteinArray[i] << " " 
				 << "Жиры: " << dynamincFatArray[i] << " " 
				 << "Углеводы: "<< dynamincCarbohydrateArray[i] << endl; 
		}
	}
	cout << "Общее количество белков: " << proteinsAll << endl;
	cout << "Общее количество жиров: " << fatsAll << endl;
	cout << "Общее количество углеводов: " << carbohydratesAll << endl;
	

}