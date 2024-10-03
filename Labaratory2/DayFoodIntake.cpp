#include "DayFoodIntake.h"
//����� ��������� ������

void DayFoodIntake::EnteringData(const unsigned int& massG, const unsigned int& mealNubmer)
{
	if (massG <= 0) 
	{
		throw exception((string("������! ������������ ���� ������")
		    + ". ������: "
			+ to_string(massG)).c_str());
	}
	if (mealNumber <= 0 && mealNumber > 3)
	{
		throw exception((string("������! ������������ ���� ������")
			+ ". ������: "
			+ to_string(mealNumber)).c_str());
	}
	this->massG = massG;
	this->mealNumber = mealNubmer;
	switch (mealNumber) 
	{
	case 1:
		cout << "������� ���������� ������ (�� 100� ��������) �� ���� ���� - �������" << endl;
		for (int i = 0; i < countIntake - 2; i++) 
		{
			cin >> dynamincProteinArray[i];
			if (dynamincProteinArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincProteinArray[i])).c_str());
			}
			volumeCcal += dynamincProteinArray[i] * PROTEIN_CCAL_1G;
		}
		cout << "������� ���������� ����� (�� 100� ��������) �� ���� ���� - �������" << endl;
		for (int i = 0; i < countIntake - 2; i++) 
		{
			cin >> dynamincFatArray[i];
			if (dynamincFatArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincFatArray[i])).c_str());
			}
			volumeCcal += dynamincFatArray[i] * FAT_CCAL_1G;
		}
		cout << "������� ���������� ��������� (�� 100� ��������) �� ���� ���� - �������" << endl;
		for (int i = 0; i < countIntake - 2; i++) {
			cin >> dynamincCarbohydrateArray[i];
			if (dynamincCarbohydrateArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincCarbohydrateArray[i])).c_str());
			}
			volumeCcal += dynamincCarbohydrateArray[i] * CARBOHYDRATE_CCAL_1G;
		}
		break;
	case 2:
		cout << "������� ���������� ������ (�� 100� ��������) �� ���� ���� - ����" << endl;
		for (int i = 1; i < countIntake - 1; i++) 
		{
			cin >> dynamincProteinArray[i];
			if (dynamincProteinArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincProteinArray[i])).c_str());
			}
			volumeCcal += dynamincProteinArray[i] * PROTEIN_CCAL_1G;
		}
		cout << "������� ���������� ����� (�� 100� ��������) �� ���� ���� - ����" << endl;
		for (int i = 1; i < countIntake - 1; i++) 
		{
			cin >> dynamincFatArray[i];
			if (dynamincFatArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincFatArray[i])).c_str());
			}
			volumeCcal += dynamincFatArray[i] * FAT_CCAL_1G;
		}
		cout << "������� ���������� ��������� (�� 100� ��������) �� ���� ���� - ����" << endl;
		for (int i = 1; i < countIntake - 1; i++) 
		{
			cin >> dynamincCarbohydrateArray[i];
			if (dynamincCarbohydrateArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincCarbohydrateArray[i])).c_str());
			}
			volumeCcal += dynamincCarbohydrateArray[i] * CARBOHYDRATE_CCAL_1G;
		}
		break;
	case 3: 

		cout << "������� ���������� ������ (�� 100� ��������) �� ���� ���� - ����" << endl;
		for (int i = 2; i < countIntake; i++) 
		{
			cin >> dynamincProteinArray[i];
			if (dynamincProteinArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincProteinArray[i])).c_str());
			}
			volumeCcal += dynamincProteinArray[i] * PROTEIN_CCAL_1G;
		}
		cout << "������� ���������� ����� (�� 100� ��������) �� ���� ���� - ����" << endl;
		for (int i = 2; i < countIntake; i++) 
		{
			cin >> dynamincFatArray[i];
			if (dynamincFatArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincFatArray[i])).c_str());
			}
			volumeCcal += dynamincFatArray[i] * FAT_CCAL_1G;
		}
		cout << "������� ���������� ��������� (�� 100� ��������) �� ���� ���� - ����" << endl;
		for (int i = 1; i < countIntake; i++) 
		{
			cin >> dynamincCarbohydrateArray[i];
			if (dynamincCarbohydrateArray[i] <= 0)
			{
				throw exception((string("������! ������������ ���� ������")
					+ ". ������: "
					+ to_string(dynamincCarbohydrateArray[i])).c_str());
			}
			volumeCcal += dynamincCarbohydrateArray[i] * CARBOHYDRATE_CCAL_1G;
		}
		break;
	}
}

void DayFoodIntake::OutputData()
{
	unsigned int protein = 0;
	unsigned int fat = 0;
	unsigned int carbohydrate = 0;

	for (int i = 0; i < countIntake; i++) {
		protein += dynamincProteinArray[i];
	}
	cout << "����� ���������� ����� �� �������� ���������� ������ �������: " << protein << endl;
	for (int i = 0; i < countIntake; i++) {
		fat += dynamincFatArray[i];
	}
	cout << "����� ���������� ����� �� �������� ���������� ������ �������: " << fat << endl;
	for (int i = 0; i < countIntake; i++) {
		carbohydrate += dynamincCarbohydrateArray[i];
	}
	cout << "����� ���������� ��������� �� �������� ���������� ������ �������: " << carbohydrate << endl;

}

