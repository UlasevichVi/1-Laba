
# include <iostream> 
#include <fstream>
# define kol 30                               
# define strk 30  

int r;
using namespace std;

struct BI
{
	char Avt[kol];
	int raz;
	char naz[25];
};
enum raz
{
	Sp = 1, dom,xobby

}razd;
struct BI bibl[strk];

int sch = 0;


void enter_new()
{
	
	if (sch < strk)
	{
		cout << endl << "Avtor " << endl;
		cin >> bibl[sch].Avt;
		cout << "razdel " << endl;
		cin >> bibl[sch].raz;

		cout << "kniga " << endl;
		cin >> bibl[sch].naz;
		sch++;
	}
	else
		cout << "Введено максимальное кол-во строк";
	cout << "Что дальше?" << endl;
	cin >> r;
}

void out()
{
	int  n;
		for (int i = 0; i < sch; i++)
		{
			cout << "Avtor ";
			cout << bibl[i].Avt << endl;
			cout << "razdel ";
			if (bibl[i].raz==Sp)
			cout << "Spez" << endl;
			if (bibl[i].raz == dom)
				cout << "dom" << endl;
			cout << "kniga ";
			cout << bibl[i].naz << endl;
		
	}
	 cin >> r;
	 system("cls");
} 	
void outr()
{
	char c[25];
	cin >> c;
	for (int i = 0; i < sch; i++)
	{
		if (strcmp(c, bibl[i].naz) == 0)
		{
			cout << "Avtor ";
			cout << bibl[i].Avt << endl;
			cout << "razdel ";
			if (bibl[i].raz == Sp)
				cout << "Spez" << endl;
			if (bibl[i].raz == dom)
				cout << "dom" << endl;
			if (bibl[i].raz == xobby)
				cout << "xobby" << endl;
			cout << "kniga ";
			cout << bibl[i].naz << endl;
		}
	}
	cin >> r;
	system("cls");
}
void fin()
{
	char c[25];
	cin >> c;
	ofstream out;
	out.open(c);
	int  n;
	for (int i = 0; i < sch; i++)
	{
		out << "Avtor ";
		out << bibl[i].Avt << endl;
		out << "razdel ";
		if (bibl[i].raz == Sp)
			out << "Spez" << endl;
		if (bibl[i].raz == dom)
			out << "dom" << endl;
		if (bibl[i].raz == xobby)
			cout << "xobby" << endl;
		out << "kniga ";
		out << bibl[i].naz << endl;
		
	}
	out.close();
	cout << "Что дальше?" << endl;
	cin >> r;
	}

int main()
{
	system("chcp 1251");
	cout << "1-ввод новой записи" << endl;
	cout << "2-вывод записи" << endl;
	cout << "3-поиск" << endl;
	cout << "4-запись в файл" << endl;
	cout << "0-для выхода" << endl;
	cin >> r;
	do
	{
		switch (r)
		{
		case 1:  enter_new();     break;
		case 3:  outr();     break;
		case 2:  out();     break;
		case 4:fin(); break;
		
		}
	} while (r != 0);
}

