#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_wygladDzwieki.h"
#include <vector>

using namespace std;




class wygladDzwieki : public QMainWindow
{
	Q_OBJECT

public:
	wygladDzwieki(QWidget *parent = Q_NULLPTR);
	friend class Dzwiek;
	int globalna;
	vector <string> stringi;
	vector <double> dzwieki;
	vector <Dzwiek*> tablica;
	void przepiszDzwiek();
	void zagraj();
    void przelacz();
	
	
	
private slots:

			    void on_pushButton_clicked();

			    void on_pushButton_2_clicked();

	       	    void on_pushButton_3_clicked();

			    void on_pushButton_4_clicked();

                void on_pushButton_5_clicked();

                void on_pushButton_7_clicked();

                void on_pushButton_8_clicked();

                void on_pushButton_9_clicked();

		        void on_pushButton_10_clicked();

		        void on_pushButton_11_clicked();

			    void on_pushButton_12_clicked();
	
			    void on_pushButton_13_clicked();

		        void on_pushButton_14_clicked();
 
	            void on_pushButton_15_clicked();
 

			    void on_pushButton_16_clicked();

			    void on_pushButton_17_clicked();

			    void on_pushButton_18_clicked();

			    void on_pushButton_19_clicked();

			    void on_pushButton_20_clicked();

                void on_pushButton_21_clicked();

                void on_pushButton_22_clicked();

				void on_pushButton_23_clicked();

				void on_pushButton_24_clicked();

				void on_pushButton_25_clicked();

				void on_pushButton_26_clicked();

                void on_pushButton_6_clicked();

                void on_pushButton_27_clicked();

                void on_pushButton_29_clicked();

                void on_pushButton_28_clicked();

                void on_pushButton_30_clicked();

                void on_pushButton_31_clicked();

                void on_pushButton_32_clicked();

                void on_pushButton_33_clicked();

                void on_pushButton_34_clicked();

                void on_pushButton_35_clicked();

                void on_pushButton_36_clicked();

                void on_pushButton_37_clicked();

                void on_pushButton_38_clicked();

                void on_pushButton_39_clicked();

                void on_pushButton_40_clicked();

                void on_pushButton_41_clicked();

private:
	
	Ui::wygladDzwiekiClass ui;
};

class Dzwiek
{

public:
	
	double frequency;
	vector <double> dzwieki;
	
	
	virtual void play_sound() = 0;
};






class CalaNuta : public Dzwiek
{
public:

	void play_sound();
	

};

class PolNuta : public Dzwiek
{
public:

	void play_sound();

	
};

class CwiercNuta : public Dzwiek
{
public:

	void play_sound();


};
