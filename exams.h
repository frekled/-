#pragma once
#include <iostream>

using namespace std;


class main {   
public:
	string name;
	int stress;
	int results; 
	int score=0;
};



class mathematics : public main {   
public:
	mathematics() {
		stress = 45;
		results = 100;
		name = "����������";
	}
	//���� 1
	void test() {
		stress = 0;
		results = 0;
		cout << "\t����������� �������� � ������� ������� ����� 0,2. ������� 4 ������.�����������, ��� 2 ������ ��������, �����: " << endl;
		cout << "\t1)0,8\n\t2)0,0061;" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			results = results + 0;
		}
		else if (i == 2) {
			results = results + 50;
			score++;
		}
	}
	void test1() {
		stress = 0;
		results = 0;
		cout << "\t������� ���������� ������������, ���� ?" << endl;
		cout << "\t1)��� ��������, ������� �� ������� ���������, ����� ����\n\t2)��� ��������, �� ������� �� ������� ���������, ����� ����\n\t3)��������, ������� ���� ������� ���������, ����� ����;"<<endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
		else if (i==2) {
			stress = stress + 15;
			results = results + 5;
		}
		else if (i == 3) {
			stress = stress + 15;
			results = results + 10;
		}
	}
	//���� 2
	void test2() {
		cout << "\t��������� ��� �������� ������� ������:" << endl;
		cout << "\t1)������������   \n\t2)��������������"<<endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 15;
			results = results + 5;
		}
		else if (i == 2) {
			stress = stress + 0;
			results = results + 40;
			score++;
		}
	}
	//���� 3
	void test3() {
		cout << "\t� ������� �������������� ���������:" << endl;
		cout << "\t1)����� �����������\n\t2)����� ������������ ������\n\t3)����� �������������� �� ������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 15;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 15;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
	}
};


class language : public main {
public:
	language() {
		stress = 60;
		results = 100;
		name = "���������� ����";
	}
	void test() {
		stress = 0;
		results = 0;
		cout << "\tIn what country do men wear skirts?" << endl;
		cout << "\t1)Scotland\n\t2)England" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			results = results + 50;
			score++;
		}
		if (i == 2) {
			results = results + 0;
		}
	}
	void test1() {
		stress = 0;
		results = 0;
		cout << "\tWhat is a Piccadilly Circus??" << endl;
		cout << "\t1)a square\n\t2)a street;\n\t3)a house" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 0;
			results = results + 50;
			score++;
		}
		if (i == 2) {
			stress = stress + 20;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 20;
			results = results + 5;
		
		}
	}
	void test2() {
		cout << "\tSir Christopher Wren built?" << endl;
		cout << "\t1)St. Paul�s cathedral\n\t2)The Parliament" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 0;
			results = results + 25;
			score++;
		}
		if (i == 2) {
			stress = stress + 20;
			results = results + 5;
		}
	}
	void test3() {
		cout << "\tHow many people live in London??" << endl;
		cout << "\t1)More than 8 million\n\t2)More than 10 million\n\t3)More than 9 million" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 20;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 20;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 0;
			results = results + 25;
			score++;
		}
	}
};



class physics : public main {
public:
	physics() {
		stress = 75;
		results = 100;
		name = "������";
	}
	void test() {
		stress = 0;
		results = 0;
		cout << "\t�������� ���� ������������ ��������� ��� ����������?" << endl;
		cout << "\t1)������������ ������ ���� �� ����� ��������������, ���������� �� ����� �������� ���� �� ��� �������� \n\t2)������������ �������� �� ����� ����" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			results = results + 50;
		}
		if (i == 2) {
			results = results + 0;
		}
	}
	void test1() {
		stress = 0;
		results = 0;
		cout << "\t����� �������� � ���������� ��������� �� �������� ���������� ������� 3 �. ����� ������� ������� ����� 6,28 �. ������ �������� �������� �����??" << endl;
		cout << "\t1)1 �/�;\n\t2))1,5 �/�\n\t3)3 �/�" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 25;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 25;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
	}
	void test2() {
		cout << "\t��� ��������� ���� �������� ���������� ��������, �������� ������ ������������?" << endl;
		cout << "\t1)����� ���� �� ��� ��������\n\t2)����� ���� �� ���������\n\t3)���� �� ����, ���������� �����" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 0;
			results = results + 20;
			score++;
		}
		if (i == 2) {
			stress = stress + 25;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 25;
			results = results + 5;
		}
	}
	void test3() {
		cout << "\t������������ ������� ������� � ���?" << endl;
		cout << "\t1)������� �������, ���������� ��������;\n\t2)������� �������, � ������� ����������� ������ ����� �������\n\t3) ������� �������, � ������� �� ��������� ������� ����	" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 25;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
		if (i == 3) {
			stress = stress + 25;
			results = results + 5;
		}
	}
};


class programming : public main {
public:
	programming() {
		stress = 50;
		results = 150;
		name = "����������������";
	}
	void test() {
		stress = 0;
		results = 0;
		cout << "\t� ��������-��������������� ��������� ������� ������������ ����� �����" << endl;
		cout << "\t1)����������� \n\t2)�������� " << endl;
		int i;
		cin >> i;
		if (i == 1) {
			results = results + 50;
			score++;
		}
		if (i == 2) {
			results = results + 50;
		}
	}
	void test1() {
		stress = 0;
		results = 0;
		cout << "\t�������� ����������� ����������-���������������� �����" << endl;
		cout << "\t1)������������, ������������, �����������\n\t2)����������� ���� ������ � ���������� ���������\n\t3)������������� ������������ � �����������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
		if (i == 2) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 10;
			results = results + 5;
		}
	}
	void test2() {
		cout << "\t������������ - ���" << endl;
		cout << "\t1)����������� �������� ����� � ��� �� ������ ������ ������������ \n\t2)����������� � ����� ������ ������ � ������� �� ���������\n\t3)�������� �������� ��������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
		if (i == 3) {
			stress = stress + 10;
			results = results + 5;
		}
	}
	void test3() {
		cout << "\t����� �������� ��� ��������� ������������ ���������� � ������� ��������� ����� ��������" << endl;
		cout << "\t1)������������ \n\t2)��������������� \n\t3)�����������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 0;
			results = results + 20;
			score++;
		}
	}
	void test4() {
		cout << "\t��� ������ �������� �����?" << endl;
		cout << "\t1)������ � ���������� � ��� \n\t2)������ � ������ " << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 0;
			results = results + 40;
		}
		
		
	}
	void test5() {
		cout << "\t��������� private ��������� ������ � ��������� �������" << endl;
		cout << "\t1)�� ������ �������� � ��� �� ����� \n\t2)������ �� ������ ������ \n\t3)�� ������� ����� ������� " << endl;
		int i;
		cin >> i;
		if (i == 1) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 2) {
			stress = stress + 10;
			results = results + 5;
		}
		if (i == 3) {
			stress = stress + 0;
			results = results + 30;
			score++;
		}
	}
};