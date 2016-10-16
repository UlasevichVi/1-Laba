#include"stdafx.h"
#include"abiturient.h"
#include<iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	int input;
	cout << "Введите количество студентов: ";
	cin >> input;
	
	Abiturient *lexa = new Abiturient[input];
	for (int i = 0; i < input; i++)
	{
		Abiturient::ShowNumberObjects();
		lexa[i].setName();
		lexa[i].setFam();
		lexa[i].setOtch();
		lexa[i].setData();
		lexa[i].setAdres();
		lexa[i].setTel();
		lexa[i].setFak();
		lexa[i].setKurs();
		system("cls");
	}
	int tr;
	int fr;
	cout << "1-poisk\n2-vyvod" << endl;
	
	do
	{
		cin >> fr;
		if (fr == 1)
		{
			cout << "1-ФИТ\n2-ТОВ\n3-Лес-хоз\n";
			cin >> tr;
			int i = 0;
			for (int i = 0; i < input; i++)
			{
				lexa[i].neud(tr,i);
				i++;
			}
		}
		if (fr == 2)
		{
			for (int i = 0; i < input; i++)
			{
				lexa[i].summa_ballov();
			}
		}
	}
	while (fr!=0);
	system("pause");
	return 0;
}