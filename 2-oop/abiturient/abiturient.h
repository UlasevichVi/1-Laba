#pragma once

#include<string>
#include<iostream>

class  Abiturient
{
	std::string name;
	std::string fam ;
	std::string otch;
	std::string adres;
	int id;
	long  tel;
	int dey, month, year;
	int dom, kv,fak;
	int mat,kurs,gruppa;
	int fiz;
	int rus;
	const int summa_ballow = 24;
	static int numberObjects ;
public:
	Abiturient() : name(""), fam(""), otch(""), adres(""), tel(0), mat(0), fiz(0), rus(0),dey(0),month(0),year(0),dom(0),kv(0),fak(0),kurs(0), gruppa(0), id(0){};
	Abiturient(const std::string &, const std::string &, const std::string &, const std::string &, int, int, int, int, long,int,int,int,int,int,int,int,int);
	Abiturient(const Abiturient &A);
	~Abiturient();
	void setName();
	void setFam();
	void setOtch();
	void setAdres();
	void setData();
	void setMat();
	void setTel();
	void setFiz();
	void setRus();
	void setFak();
	void setKurs();
	void getName()const;
	void getFam()const;
	void getOtch()const;
	void getAdres() const;
	void getID()const;
	void getMat()const;
	void getFiz()const;
	void getRus()const;
	void Validation()const;
	int sred_ball();
	void neud(int,int);
	void summa_ballov();
	static void ShowNumberObjects();

};
