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
	
	cout << "\tПриветствую , выпускник!\n\tТвей главной целью является поступить в Политех , для этого тебе нужно сдать вступительные экзамены более чем на 280 баллов!\n" << endl;
	cout << "\tЗагрузить   сохранение ? " << endl;
	cout << "\t1)Да\n\t2)Нет" << endl;
	int cs;
	cin >> cs;
	if (cs == 1) {      
		fstream nsave;
		nsave.open(npath);
		if (!nsave.is_open()) {
			cout << "\tНе удалось найти сохранение" << endl;
		}
		else {
			nsave >> player.name;
			cout << "\nСохранение загружено" << endl;
			cout << "\t\nВаше  имя: " << player.name << endl;
		}
		nsave.close();
		fstream prosave;       
		prosave.open(path);
		if (!prosave.is_open()) {
			cout << " м  загрузить сохранение" << endl;
		}
		else {
			prosave >> player.rating;
			cout << "\tРезультаты: " << player.rating << endl;;
			prosave >> player.k1;
			prosave >> player.k2;
			prosave >> player.k3;
			prosave >> player.k4;
			prosave >> player.j;
			cout << "\tБаллов " << player.j << "/12" << endl << endl;
		}
		prosave.close();
	}
	else {
		cout << "\tКак вас зовут? ";
		cin >> player.name;
		cout << endl;
		player.create();
		cout << "\tСейчас у тебя отличное настроение, оно будет портиться из-за трудных вопросов, но затем он будет улучшаться благодаря глицину и отдыху." << endl<<endl;
		ofstream saven; 
		saven.open(npath);
		saven << player.name;
		saven.close();
	}
	
	cout << "\tДоступны следующие Дисциплины" << endl << endl;
	
	
	
	int choise;

	

	for (int i = 0; i < 4; i++) {
		if (player.k1 == true) {
			cout << "\t1)" << math.name << ":" << " Максимальное количество баллов: " << math.results <<  "\t депрессия: " << math.stress << endl;
		}
		if (player.k2 == true) {
			cout << "\t2)" << lang.name << ":" << " Максимальное количество баллов: " << phys.results <<  "\t депрессия: " << phys.stress << endl;
		}
		if (player.k3 == true) {
			cout << "\t3)" << phys.name << ":" << " Максимальное количество баллов: " << phys.results 	<<   "\t депрессия: " <<  phys.stress << endl;
		}
		if (player.k4 == true) {
			cout << "\t4)" << prog.name << ":" << " Максимальное количество баллов: " << prog.results <<  "\t депрессия: " << prog.stress << endl;
		}
		cout << endl;
		cin >> choise;
		if (choise == 1) {
			player.k1 = false;
			cout << "\tТвой преподаватель Крысько А.В. хочет , чтобы ты выучил матанализ, для этого тебе необходимо пройти тест и, в зависимости от твоих ответов, ты получишь какой-то балл, а так же тебе  будет становится немного грустно после каждого неправильного твоего ответа  (за каждую ошибку -15 к настроению) " << endl << endl;
			math.test1();
			math.test2();
			math.test3();
			cout << endl;
			cout << "\tТы сдал экзамен и вот твои результаты:" << endl;
			player.mood = player.mood - math.stress;
			player.rating = player.rating + math.results;
			cout << "\tДепрессия: " << math.stress << endl;
			cout << "\tРезультат за экзамен " << math.results << endl;
			cout << "\tПравильных ответов: " << math.score << "/3" << endl << endl;
			cout << "\tТвой общий результат : " << player.rating << endl;
			player.j += math.score;
		}
		if (choise == 2) {
			player.k2 = false;
			cout << "\tТвой преподаватель Туктарова Р.Р. очень зла на тебя  потому , что ты редко посещаешь её пары. Тебе необходимо пройти тест , но за каждую ошибку твоё настроение будет падать на  20 единиц " << endl << endl;
			lang.test1();
			lang.test2();
			lang.test3();
			cout << endl;
			cout << "\tТы сдал экзамен и вот твои результаты:" << endl;
			player.mood = player.mood - lang.stress;
			player.rating = player.rating + lang.results;
			cout << "\tДепрессия: " << lang.stress << endl;
			cout << "\tРезультат за экзамен " << lang.results << endl;
			cout << "\tПравильных ответов: " << lang.score << "/3" << endl << endl;
			cout << "\tТвой общий результат : " << player.rating << endl;
			player.j+= lang.score;
		}
		if (choise == 3) {
			player.k3 = false;
			cout << "\tДжашитов А.Э. очень строгий  человек , поэтому за каждую твою ошибку у тебя будет -25 к настроению" << endl << endl;
			phys.test1();
			phys.test2();
			phys.test3();
			cout << endl;
			cout << "\tТы сдал экзамен и вот твои результаты:" << endl;
			player.mood = player.mood - phys.stress;
			player.rating = player.rating + phys.results;
			cout << "\tУрон: " << phys.stress << endl;
			cout << "\tРезультат за экзамен: " << phys.results << endl;
			cout << "\tПравильных ответов: " << phys.score << "/3" << endl << endl;
			cout << "\tТвой общий результат : " << player.rating << endl;
			player.j+= phys.score;
		}
		if (choise == 4) {
			player.k4 = false;
			cout << "\t Ваш преподаватель Аркадий Викторович хочет , чтобы каждый его ученик знал его предмет, а все знают , что человек лучше всего учится на своих ошибках ( за ошибку -10 к настроению)" << endl << endl;
			prog.test1();
			prog.test2();
			prog.test3();
			prog.test4();
			prog.test5();
			cout << endl;
			cout << "\tы сдал экзамен и вот твои результаты :" << endl;
			player.mood = player.mood - prog.stress;
			player.rating = player.rating + prog.results;
			cout << "\tДепрессия: " << prog.stress << endl;
			cout << "\tРезультат за экзамен: " << prog.results << endl;
			cout << "\tПравильных ответов: " << prog.score << "/5" << endl << endl;
			cout << "\tТвой общий результат :" << player.rating << endl;
			player.j+= prog.score;
		}
		
		cout << endl;
		cout << "\tНастроение: " << player.mood << "/100" << endl;
		cout << "\tНеобходимо отдохнуть . 1 секунда = 1 единице Настроения." << endl << endl;

		if (player.mood < 100) {
			while (player.mood < 100) {
				timest(1);
				player.mood = player.mood + 5;
				if (player.mood > 99) {
					player.mood = 100;
					cout << "\tГлицин помогает: " << player.mood << "/100" << endl << endl;
				}
				else {
					cout << "\tГлицин помогает: " << player.mood << "/100" << endl;
				}
			}
		}

		
		ofstream fout;      
		fout.open(path);
		if (!fout.is_open()) {
			cout << "\tСохранить не удалось" << endl;
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
			cout << "\tРезультаты сохранены!" << endl << endl;
		}
		fout.close();

		cout << "\tДля продолжения игры нажмите Enter" << endl;
		system("pause>nul");
		cout << endl;		
	}
		cout << "\tТы сдал все экзамены. твой суммарный балл: " << player.rating << endl;
		cout << "\tВсего ты сделал " << 15 - player.j << " ошибок" << endl;

	//розыгрыш и конец игры
	

	if (player.rating < 280) {
		cout << "\tДо проходного балла: " << 280 - player.rating << "баллов" << endl;
		cout << "\tУ тебя есть 1 дополнительный билет(он может содержать любой вопрос из любой тематики) ответив на один из них ты можешь заработать  50 баллов" << endl <<endl ;
		for (int i = 1; i < 2; i++) {
			cout << "\tНажми Enter для проверки билета"<<endl;
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
		cout << "\tБаланс: " << player.rating << "баллов" << endl;
		if (player.rating >= 280) {
			cout << "\tПоздравляю! Ты поступил!" << endl;
		}
		else {
			cout << "\tК сожалению, ты не справился с задачей и провалил вступительные экзамены(. Попробуй в следущющем году!" << endl;

		}
	}
	return 0;
}