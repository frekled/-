#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personage {
public:
	string name;
	int mood;
	int rating;
	int j=0;
	bool k1=true, k2 = true, k3 = true, k4 = true;

	Personage() {
		mood = 100;
		rating = 0;

	}
	void Info() {
		cout <<"\t���� ����������: " << mood <<"/100"<< endl;
		cout <<"\t������ " << rating  << endl;
		cout << endl;
	}

	void create() {
		cout << "\t�� ������� ��������� � ������ " << name << endl;
		Info();
	}

	void shot() {
		cout << "\t��	����� �������. ������ ���� ���������� " << mood << endl;
		cout << "\t��� ���������: " << rating << endl;
	}
	
};