#include "DayFoodIntake.h"

using namespace std;

//����� ��������� ������

void DayFoodIntake::EnteringData( unsigned int& massG)
{
	if ((cin >> massG).fail()) 
	{
		throw exception((string("������! ������������ ���� ������")
		    + ". ������: "
			+ to_string(massG)).c_str());

		
	}

}

void DayFoodIntake::OutputData()
{
	cout << "------------------------------------------------------------------" << endl;
	cout << "|����� ���������� ��������                                       |" << volumeCcal << endl;
	cout << "------------------------------------------------------------------" << endl;

}
//
//bool checking = true;
//do {
//	cout << "------------------------------------------------------------------" << endl;
//	cout << "|������� ����� �������� � �������                                |" << endl;
//	cout << "------------------------------------------------------------------" << endl;
//	if ((cin >> massG).good() && massG > 0) {
//		checking = false;
//	}
//	if (cin.fail() || massG <= 0)
//	{
//		cin.clear();
//		cout << "------------------------------------------------------------------" << endl;
//		cout << "|������!!! ������� ���������� ������!                            |" << endl;
//		cout << "------------------------------------------------------------------" << endl;
//	}
//	cin.ignore(100, '\n');
//
//} while (checking);
//
//for (int i = 0; i < countIntake; i++)
//{
//	bool check = true;
//	do {
//		cout << "------------------------------------------------------------------" << endl;
//		cout << "|������� ���������� ������ (�� 100� ��������) �� " << i + 1 << " ���� ����    |" << endl;
//		cout << "------------------------------------------------------------------" << endl;
//
//		if ((cin >> dynamincProteinArray[i]).good())
//		{
//			volumeCcal += dynamincProteinArray[i] * PROTEIN_CCAL_1G;
//			check = false;
//		}
//		if (cin.fail())
//		{
//			cin.clear();
//			cout << "------------------------------------------------------------------" << endl;
//			cout << "|������!!! ������� ���������� ������!                            |" << endl;
//			cout << "------------------------------------------------------------------" << endl;
//		}
//		cin.ignore(100, '\n');
//
//	} while (check);
//}
//
//for (int i = 0; i < countIntake; i++)
//{
//	bool check = true;
//	do {
//		cout << "------------------------------------------------------------------" << endl;
//		cout << "|������� ���������� ����� (�� 100� ��������) �� " << i + 1 << " ���� ����     |" << endl;
//		cout << "------------------------------------------------------------------" << endl;
//		if ((cin >> dynamincFatArray[i]).good())
//		{
//			volumeCcal += dynamincFatArray[i] * FAT_CCAL_1G;
//			check = false;
//		}
//		if (cin.fail())
//		{
//			cin.clear();
//			cout << "------------------------------------------------------------------" << endl;
//			cout << "|������!!! ������� ���������� ������!                            |" << endl;
//			cout << "------------------------------------------------------------------" << endl;
//		}
//		cin.ignore(100, '\n');
//
//	} while (check);
//}
//
//for (int i = 0; i < countIntake; i++)
//{
//	bool check = true;
//	do {
//		cout << "------------------------------------------------------------------" << endl;
//		cout << "|������� ���������� ��������� (�� 100� ��������) �� " << i + 1 << " ���� ���� |" << endl;
//		cout << "------------------------------------------------------------------" << endl;
//		if ((cin >> dynamincCarbohydrateArray[i]).good())
//		{
//			volumeCcal += dynamincCarbohydrateArray[i] * CARBOHYDRATE_CCAL_1G;
//			check = false;
//		}
//		if (cin.fail())
//		{
//			cin.clear();
//			cout << "------------------------------------------------------------------" << endl;
//			cout << "|������!!! ������� ���������� ������!                            |" << endl;
//			cout << "------------------------------------------------------------------" << endl;
//		}
//		cin.ignore(100, '\n');
//
//	} while (check);
//}