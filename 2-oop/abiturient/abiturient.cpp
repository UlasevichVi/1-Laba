
#include "stdafx.h"
#include"abiturient.h"
#include <iostream>
using namespace std;


const int max_otm = 10;
const int pred = 3;

Abiturient::Abiturient(const string & NAME, const string & FAM, const string & Otch, const string & ADRES, int MAT, int FIZ, int RUS, int ID, long TEL,int DEY,int MONTH,int YEAR,int KV,int DOM,int FAK,int KURS,int GRUPPA)
{
	name = NAME;
	fam = FAM;
	otch = Otch;
	adres = ADRES;
	tel = TEL;
	mat = MAT;
	fiz = FIZ;
	rus = RUS;
	id = ID;
	dey = DEY;
	month = MONTH;
	year = YEAR;
	dom = DOM;
	kv = KV;
	adres = ADRES;
	fak = FAK;
	gruppa = GRUPPA;
	kurs = KURS;
}

Abiturient::~Abiturient() {};

Abiturient::Abiturient(const Abiturient & aba)
{
	name = aba.name;
	fam = aba.fam;
	otch = aba.otch;
	adres = aba.adres;
	tel = aba.tel;
	mat = aba.mat;
	fiz = aba.fiz;
	rus = aba.rus;
	id = aba.id;
}

void Abiturient::Validation()const
{
	if (mat < NULL || mat > max_otm || fiz < NULL || fiz > max_otm || fiz < NULL || fiz > max_otm)
	{
		std::cout << "ERROR!!!";
	}
}

int Abiturient::sred_ball()
{
	Validation();
	int sred;
	sred = (fiz + mat + rus) / pred;
	return sred;
}

int Abiturient::numberObjects = 0;

void Abiturient::ShowNumberObjects()
{
	cout << " ������� �" << ++numberObjects << endl << endl;
}


void Abiturient::setFam()
{
	cout << "������� ������� ";
	cin >> fam;
}
void Abiturient::setName()
{
	cout << "������� ���  ";
	cin >> name;
}
void Abiturient::setOtch()
{
	cout << "������� �������� ";
	cin >> otch;
}
void Abiturient::setData()
{
	cout << "������� ���� �������� ";
	cin >> dey >> month >> year;
}
void Abiturient::setAdres()
{
	cout << "������� �����: ";
	cin >> adres >> dom >> kv;
}
void Abiturient::setTel()
{
	cout << "������� �������(80-):";
	cin >> tel;
}
void Abiturient::setFak()
	{
		cout << "1-���\n2-���\n3-���-���\n";
		cin >> fak;
	}
void Abiturient::setKurs()
{
	cout << "����:";
	cin >> kurs;
	cout << "������:";
	cin >> gruppa;
}

void Abiturient::setMat()
{
	cout << "Enter Mat: ";
	cin >> mat;
}
void Abiturient::setFiz()
{
	cout << "Enter Fiz: ";
	cin >> fiz;
}
void Abiturient::setRus()
{
	cout << "Enter rus: ";
	cin >> rus;
}
void Abiturient::getAdres()const { cout << "Adres: " << adres; }
void Abiturient::getFam()const { cout << "Fam: " << fam; }
void Abiturient::getName()const { cout << "Name: " << name; }
void Abiturient::getOtch()const { cout << "Otch: " << otch; }
void Abiturient::getID()const { cout << "id: " << id; }
void Abiturient::getMat()const { cout << "mat: " << mat; }
void Abiturient::getFiz()const { cout << "fiz: " << fiz; }
void Abiturient::getRus()const { cout << "rus: " << rus; }

void  Abiturient::neud(int tr,int i)
{
	if (tr == fak)
	{
		cout << "������� �" << i + 1 << " �� ������ ����������:";
		cout <<fam << "\t" << name << "\t" << otch << "\n�������:" << tel << "\n�����:" << adres << " " << dom << " " << kv << "\n����:" << kurs << "\t������:" << gruppa << endl;
		i++;
	}
	
}
void Abiturient::summa_ballov()
{
  
		cout << "�������:"<<endl;
		cout << fam << "\t" << name << "\t" << otch << "\n" << dey << "." << month << "." <<year <<"\n" << tel << "\n" << kurs << "\t" << gruppa << endl;
		if (fak == 1)
		{
			cout << "Fit" << endl;
		}
		if (fak == 2)
		{
			cout << "TOB" << endl;
					}
		if (fak == 3)
		{
			cout << "���-���" << endl;
		}

	
}

