#include <iostream>
#include "Windows.h" 
#include <ctime> 
#include <cstdlib> 
#include "Personage .h"
#include "exams.h" 
#include <fstream>
#include <string>

using namespace std;
int results; 
void timest(double a) {  
	a = a * 1000;
	return Sleep(a);
} 


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	string path = "SaveProgres.txt";
	string npath = "SaveName.txt";


	Personage player; 
	mathematics math;
	language lang;
	physics phys;
	programming prog;
	
	cout << "\t����������� , ���������!\n\t���� ������� ����� �������� ��������� � ������� , ��� ����� ���� ����� ����� ������������� �������� ����� ��� �� 280 ������!\n" << endl;
	cout << "\t���������   ���������� ? " << endl;
	cout << "\t1)��\n\t2)���" << endl;
	int cs;
	cin >> cs;
	if (cs == 1) {      
		fstream nsave;
		nsave.open(npath);
		if (!nsave.is_open()) {
			cout << "\t�� ������� ����� ����������" << endl;
		}
		else {
			nsave >> player.name;
			cout << "\n���������� ���������" << endl;
			cout << "\t\n����  ���: " << player.name << endl;
		}
		nsave.close();
		fstream prosave;       
		prosave.open(path);
		if (!prosave.is_open()) {
			cout << " �  ��������� ����������" << endl;
		}
		else {
			prosave >> player.rating;
			cout << "\t����������: " << player.rating << endl;;
			prosave >> player.k1;
			prosave >> player.k2;
			prosave >> player.k3;
			prosave >> player.k4;
			prosave >> player.j;
			cout << "\t������ " << player.j << "/12" << endl << endl;
		}
		prosave.close();
	}
	else {
		cout << "\t��� ��� �����? ";
		cin >> player.name;
		cout << endl;
		player.create();
		cout << "\t������ � ���� �������� ����������, ��� ����� ��������� ��-�� ������� ��������, �� ����� �� ����� ���������� ��������� ������� � ������." << endl<<endl;
		ofstream saven; 
		saven.open(npath);
		saven << player.name;
		saven.close();
	}
	
	cout << "\t�������� ��������� ����������" << endl << endl;
	
	
	
	int choise;

	

	for (int i = 0; i < 4; i++) {
		if (player.k1 == true) {
			cout << "\t1)" << math.name << ":" << " ������������ ���������� ������: " << math.results <<  "\t ���������: " << math.stress << endl;
		}
		if (player.k2 == true) {
			cout << "\t2)" << lang.name << ":" << " ������������ ���������� ������: " << phys.results <<  "\t ���������: " << phys.stress << endl;
		}
		if (player.k3 == true) {
			cout << "\t3)" << phys.name << ":" << " ������������ ���������� ������: " << phys.results 	<<   "\t ���������: " <<  phys.stress << endl;
		}
		if (player.k4 == true) {
			cout << "\t4)" << prog.name << ":" << " ������������ ���������� ������: " << prog.results <<  "\t ���������: " << prog.stress << endl;
		}
		cout << endl;
		cin >> choise;
		if (choise == 1) {
			player.k1 = false;
			cout << "\t���� ������������� ������� �.�. ����� , ����� �� ������ ���������, ��� ����� ���� ���������� ������ ���� �, � ����������� �� ����� �������, �� �������� �����-�� ����, � ��� �� ����  ����� ���������� ������� ������� ����� ������� ������������� ������ ������  (�� ������ ������ -15 � ����������) " << endl << endl;
			math.test1();
			math.test2();
			math.test3();
			cout << endl;
			cout << "\t�� ���� ������� � ��� ���� ����������:" << endl;
			player.mood = player.mood - math.stress;
			player.rating = player.rating + math.results;
			cout << "\t���������: " << math.stress << endl;
			cout << "\t��������� �� ������� " << math.results << endl;
			cout << "\t���������� �������: " << math.score << "/3" << endl << endl;
			cout << "\t���� ����� ��������� : " << player.rating << endl;
			player.j += math.score;
		}
		if (choise == 2) {
			player.k2 = false;
			cout << "\t���� ������������� ��������� �.�. ����� ��� �� ����  ������ , ��� �� ����� ��������� � ����. ���� ���������� ������ ���� , �� �� ������ ������ ��� ���������� ����� ������ ��  20 ������ " << endl << endl;
			lang.test1();
			lang.test2();
			lang.test3();
			cout << endl;
			cout << "\t�� ���� ������� � ��� ���� ����������:" << endl;
			player.mood = player.mood - lang.stress;
			player.rating = player.rating + lang.results;
			cout << "\t���������: " << lang.stress << endl;
			cout << "\t��������� �� ������� " << lang.results << endl;
			cout << "\t���������� �������: " << lang.score << "/3" << endl << endl;
			cout << "\t���� ����� ��������� : " << player.rating << endl;
			player.j+= lang.score;
		}
		if (choise == 3) {
			player.k3 = false;
			cout << "\t�������� �.�. ����� �������  ������� , ������� �� ������ ���� ������ � ���� ����� -25 � ����������" << endl << endl;
			phys.test1();
			phys.test2();
			phys.test3();
			cout << endl;
			cout << "\t�� ���� ������� � ��� ���� ����������:" << endl;
			player.mood = player.mood - phys.stress;
			player.rating = player.rating + phys.results;
			cout << "\t����: " << phys.stress << endl;
			cout << "\t��������� �� �������: " << phys.results << endl;
			cout << "\t���������� �������: " << phys.score << "/3" << endl << endl;
			cout << "\t���� ����� ��������� : " << player.rating << endl;
			player.j+= phys.score;
		}
		if (choise == 4) {
			player.k4 = false;
			cout << "\t ��� ������������� ������� ���������� ����� , ����� ������ ��� ������ ���� ��� �������, � ��� ����� , ��� ������� ����� ����� ������ �� ����� ������� ( �� ������ -10 � ����������)" << endl << endl;
			prog.test1();
			prog.test2();
			prog.test3();
			prog.test4();
			prog.test5();
			cout << endl;
			cout << "\t� ���� ������� � ��� ���� ���������� :" << endl;
			player.mood = player.mood - prog.stress;
			player.rating = player.rating + prog.results;
			cout << "\t���������: " << prog.stress << endl;
			cout << "\t��������� �� �������: " << prog.results << endl;
			cout << "\t���������� �������: " << prog.score << "/5" << endl << endl;
			cout << "\t���� ����� ��������� :" << player.rating << endl;
			player.j+= prog.score;
		}
		
		cout << endl;
		cout << "\t����������: " << player.mood << "/100" << endl;
		cout << "\t���������� ��������� . 1 ������� = 1 ������� ����������." << endl << endl;

		if (player.mood < 100) {
			while (player.mood < 100) {
				timest(1);
				player.mood = player.mood + 5;
				if (player.mood > 99) {
					player.mood = 100;
					cout << "\t������ ��������: " << player.mood << "/100" << endl << endl;
				}
				else {
					cout << "\t������ ��������: " << player.mood << "/100" << endl;
				}
			}
		}

		
		ofstream fout;      
		fout.open(path);
		if (!fout.is_open()) {
			cout << "\t��������� �� �������" << endl;
		}
		else {
			fout << player.rating
;
			fout << "\n";
			fout << player.k1;
			fout << "\n";
			fout << player.k2;
			fout << "\n";
			fout << player.k3;
			fout << "\n";
			fout << player.k4;
			fout << "\n";
			fout << player.j;			
			cout << "\t���������� ���������!" << endl << endl;
		}
		fout.close();

		cout << "\t��� ����������� ���� ������� Enter" << endl;
		system("pause>nul");
		cout << endl;		
	}
		cout << "\t�� ���� ��� ��������. ���� ��������� ����: " << player.rating << endl;
		cout << "\t����� �� ������ " << 15 - player.j << " ������" << endl;

	//�������� � ����� ����
	

	if (player.rating < 280) {
		cout << "\t�� ���������� �����: " << 280 - player.rating << "������" << endl;
		cout << "\t� ���� ���� 1 �������������� �����(�� ����� ��������� ����� ������ �� ����� ��������) ������� �� ���� �� ��� �� ������ ����������  50 ������" << endl <<endl ;
		for (int i = 1; i < 2; i++) {
			cout << "\t����� Enter ��� �������� ������"<<endl;
			system("pause>nul");
			for (int i = 3; i > 0; i--) {
				cout << "\t" << i;
				for (int i = 3; i > 0; i--) {
					Sleep(300);
					cout << " . ";
				}
				cout << endl;
			}
			int win = rand() %4  + 1 ;
			if (win = 3) {
				math.test();
				player.rating + math.results;
			}
			else if (win = 2) {
				phys.test();
				player.rating + phys.results;
			}
			else if (win = 1) {
				lang.test();
				player.rating + lang.results;
			}
			 else if (win = 2) {
				prog.test();
				player.rating + prog.results;
			}
			cout << player.rating;
		}
		cout << "\t������: " << player.rating << "������" << endl;
		if (player.rating >= 280) {
			cout << "\t����������! �� ��������!" << endl;
		}
		else {
			cout << "\t� ���������, �� �� ��������� � ������� � �������� ������������� ��������(. �������� � ���������� ����!" << endl;

		}
	}
	return 0;
}