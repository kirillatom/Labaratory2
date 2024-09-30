#include <iostream>
#include <string>
using namespace std;

class DayFoodIntake
{
public:
	/// <summary>
	/// ����������� � ����������
	/// </summary>
	/// <param name="countIntake"></param>

	DayFoodIntake(const int& countIntake) : 
		countIntake(countIntake), 
		volumeCcal(0) {

		dynamincProteinArray = new unsigned int[countIntake];
		dynamincFatArray = new unsigned int[countIntake];
		dynamincCarbohydrateArray = new unsigned int[countIntake];
	}

	// ����������
	~DayFoodIntake() {
		delete[] dynamincProteinArray;
		delete[] dynamincFatArray;
		delete[] dynamincCarbohydrateArray;
	}

	// �������
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
	/// <summary>����� ��������� ������</summary>
	void EnteringData(const unsigned int& massG);
	//����� ������ ������
	void OutputData();
private:
	//�������
	unsigned int* dynamincProteinArray;
	unsigned int* dynamincFatArray;
	unsigned int* dynamincCarbohydrateArray;
	//����
	unsigned int massG; //����� �������� � �������
	unsigned int volumeCcal; //����� ���� ��������
	unsigned int countIntake; //���������� ������ ����
	//���������
	static const unsigned int PROTEIN_CCAL_1G = 4;
	static const unsigned int FAT_CCAL_1G = 9;
	static const unsigned int CARBOHYDRATE_CCAL_1G = 4;

};

