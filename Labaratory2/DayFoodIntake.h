#include <iostream>
#include <string>

using namespace std;

class DayFoodIntake
{
public:
	/// </summary>����������� �� ��������� </summary>
	DayFoodIntake();;
	/// </summary>����������� � ����������</summary>
	/// <param name="countIntake"></param>
	DayFoodIntake(const int& countIntake);
	// ����������
	~DayFoodIntake();
	// �������
	unsigned int GetCountIntake() const;
	unsigned int GetMassG() const;
	unsigned int GetVolumeCcal() const;
	/// <summary>����� ������� ������</summary>
	void EnteringData(const unsigned int& massG, const unsigned int& mealNubmer,
		const unsigned int& protein, const unsigned int& fat, const unsigned int& carbohydrate);
    /// <summary> ����� ������ ������ </summary>
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
	unsigned int mealNumber; //����� ����� ���� 
	unsigned int protein; 
	unsigned int fat;
	unsigned int carbohydrate;
	unsigned int proteinsAll = 0;
	unsigned int fatsAll = 0;
	unsigned int carbohydratesAll = 0;
	//���������
	static const unsigned int PROTEIN_CCAL_1G = 4;
	static const unsigned int FAT_CCAL_1G = 9;
	static const unsigned int CARBOHYDRATE_CCAL_1G = 4;

};