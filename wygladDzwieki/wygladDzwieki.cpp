#define CLAVIERSIZE 36
#define FIRSTNOTE 130.8
#define ROOT 1.059463
#define SEMIBREVE 800
#define HALFNOTE 400
#define QUARTERNOTE 200
#include "wygladDzwieki.h"
#include <stdlib.h>
#include <windows.h>
#include <vector>

using namespace std;



wygladDzwieki::wygladDzwieki(QWidget *parent)
	: QMainWindow(parent)
	,globalna(0)

{
	
	ui.setupUi(this);


}


void wygladDzwieki::on_pushButton_clicked()
{
    exit(1);
}

void wygladDzwieki::on_pushButton_2_clicked()
{
	przepiszDzwiek();
	zagraj();
	tablica.clear();
	dzwieki.clear();
	stringi.clear();

}

void wygladDzwieki::zagraj()
{
	int i = 0;
	for (auto p : tablica)
	{
		p->frequency = dzwieki[i];
		p->play_sound();
		i++;

	}
	

}

void wygladDzwieki::przepiszDzwiek()
{
	vector <string> wszystkieNazwy = { "C1","C#1","D1","D#1","E1","F1","F#1","G1","G#1","A1","A#1","H1",
		"C2","C#2","D2","D#2","E2","F2","F#2","G2","G#2","A2","A#2","H2",
		"C3","C#3","D3","D#3","E3","F3","F#3","G3","G#3","A3","A#3","H3" };
	vector <double> wszystkieDzwieki;

	double d = FIRSTNOTE;
	wszystkieDzwieki.push_back(d);

	for (int i = 1; i < CLAVIERSIZE; i++)
	{

		d = d * ROOT;
		wszystkieDzwieki.push_back(d);
	}
	//vec.stringi
	for (auto item : stringi)
	{
		for (int i = 0; i < CLAVIERSIZE; i++)
		{
			if (item == wszystkieNazwy[i])
			{
				dzwieki.push_back(wszystkieDzwieki[i]);
				//ustawiam pod zmienna frequency wartosc z tablicy
			}
		}

	}


}

void CalaNuta::play_sound()
{
	Beep(frequency, SEMIBREVE);
}

void PolNuta::play_sound()
{
	Beep(frequency, HALFNOTE);
}

void CwiercNuta::play_sound()
{
	Beep(frequency, QUARTERNOTE);
}

void wygladDzwieki::on_pushButton_4_clicked()
{
	// cala nuta
	globalna = 0;
}

void wygladDzwieki::on_pushButton_5_clicked()
{
	//polnuta
	globalna = 1;
}
void wygladDzwieki::on_pushButton_41_clicked()
{
        globalna = 2;
}


void wygladDzwieki::przelacz()
{
    switch (globalna)
    {
    case 2:
            tablica.push_back(new CwiercNuta);
            break;
    case 1:
            tablica.push_back(new CalaNuta);
            break;
    case 0:
            tablica.push_back(new PolNuta);
            break;
    }
}

void wygladDzwieki::on_pushButton_3_clicked()
{
	string s = "C1";
	stringi.push_back(s);
        przelacz();
}


void wygladDzwieki::on_pushButton_7_clicked()
{ //d1
	string s = "D1";
        stringi.push_back(s);
		przelacz();
}

void wygladDzwieki::on_pushButton_8_clicked()
{
	string s = "E1";
        stringi.push_back(s);
		przelacz();
}

void wygladDzwieki::on_pushButton_9_clicked()
{
    string s = "F1";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_10_clicked()
{
    string s = "G1";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_11_clicked()
{
    string s = "A1";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_12_clicked()
{
    string s = "H1";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_13_clicked()
{
    string s = "C2";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_14_clicked()
{
    string s = "D2";
    stringi.push_back(s);
	przelacz();
}


void wygladDzwieki::on_pushButton_15_clicked()
{
    string s = "E2";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_16_clicked()
{
    string s = "F2";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_17_clicked()
{
    string s = "G2";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_18_clicked()
{
    string s = "A2";
    stringi.push_back(s);
	przelacz();
    
}

void wygladDzwieki::on_pushButton_19_clicked()
{
    string s = "H2";
    stringi.push_back(s);
	przelacz();
    
}

void wygladDzwieki::on_pushButton_20_clicked()
{
    string s = "C3";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_21_clicked()
{
    string s = "D3";
    stringi.push_back(s);
	przelacz();
}

void wygladDzwieki::on_pushButton_22_clicked()
{
    string s = "E3";
    stringi.push_back(s);
    przelacz();
}

void wygladDzwieki::on_pushButton_23_clicked()
{
    string s = "F3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_24_clicked()
{
    string s = "G3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_26_clicked()
{
    string s = "A3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_25_clicked()
{
    string s = "H3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_6_clicked()
{
    string s = "C#1";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_27_clicked()
{
    string s = "D#1";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_29_clicked()
{
    string s = "G#1";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_28_clicked()
{
    string s = "F#1";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_30_clicked()
{
    string s = "A#1";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_31_clicked()
{
    string s = "C#2";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_32_clicked()
{

    string s = "D#2";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_33_clicked()
{

    string s = "F#2";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_34_clicked()
{

    string s = "G#2";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_35_clicked()
{

    string s = "A#2";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_36_clicked()
{

    string s = "C#3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_37_clicked()
{
    string s = "D#3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_38_clicked()
{
    string s = "F#3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_39_clicked()
{
    string s = "G#3";
        stringi.push_back(s);
            przelacz();
}

void wygladDzwieki::on_pushButton_40_clicked()
{
    string s = "A#3";
        stringi.push_back(s);
            przelacz();
}

