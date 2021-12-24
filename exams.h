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
		name = "Математика";
	}
	//тест 1
	void test() {
		stress = 0;
		results = 0;
		cout << "\tВероятность выигрыша в книжной лотерее равна 0,2. Куплено 4 билета.Вероятность, что 2 билета выиграют, равна: " << endl;
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
		cout << "\tМатрица называется диагональной, если ?" << endl;
		cout << "\t1)все элементы, лежащие на главной диагонали, равны нулю\n\t2)все элементы, не лежащие на главной диагонали, равны нулю\n\t3)элементы, лежащие ниже главной диагонали, равны нулю;"<<endl;
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
	//тест 2
	void test2() {
		cout << "\tАсимптоты для графиков функций бывают:" << endl;
		cout << "\t1)вертикальные   \n\t2)параболические"<<endl;
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
	//тест 3
	void test3() {
		cout << "\tК методам интегрирования относятся:" << endl;
		cout << "\t1)метод подстановки\n\t2)метод параллельных прямых\n\t3)метод интегрирования по частям" << endl;
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
		name = "Английский язык";
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
		cout << "\t1)St. Paul’s cathedral\n\t2)The Parliament" << endl;
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
		name = "Физика";
	}
	void test() {
		stress = 0;
		results = 0;
		cout << "\tМоментом силы относительно некоторой оси называется?" << endl;
		cout << "\t1)произведение модуля силы на длину перпендикуляра, опущенного на линию действия силы из оси вращения \n\t2)произведение скорости на массу тела" << endl;
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
		cout << "\tТочка движется с постоянной скоростью по круговой траектории радиуса 3 м. Время полного оборота равно 6,28 с. Какова линейная скорость точки??" << endl;
		cout << "\t1)1 м/с;\n\t2))1,5 м/с\n\t3)3 м/с" << endl;
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
		cout << "\tПод импульсом тела понимают физическую величину, численно равную произведению?" << endl;
		cout << "\t1)массы тела на его скорость\n\t2)массы тела на ускорение\n\t3)силы на путь, пройденный телом" << endl;
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
		cout << "\tИнерциальная система отсчета – это?" << endl;
		cout << "\t1)система отсчета, обладающая инерцией;\n\t2)система отсчета, в которой выполняется первый закон Ньютона\n\t3) система отсчета, в которой не действуют внешние силы	" << endl;
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
		name = "Программирование";
	}
	void test() {
		stress = 0;
		results = 0;
		cout << "\tВ объектно-ориентированной программе объекты обмениваются между собой" << endl;
		cout << "\t1)сообщениями \n\t2)методами " << endl;
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
		cout << "\tОсновные особенности объективно-ориентированного языка" << endl;
		cout << "\t1)инкапсуляция, наследование, полиморфизм\n\t2)абстрактные типы данных и сохранение состояний\n\t3)множественное наследование и полиморфизм" << endl;
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
		cout << "\tИнкапсуляция - это" << endl;
		cout << "\t1)возможность называть одним и тем же именем разные подпрограммы \n\t2)объединение в одном классе данных и методов их обработки\n\t3)создание иерархии объектов" << endl;
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
		cout << "\tКакое свойство ООП позволяет единообразно обращаться с разными объектами одной иерархии" << endl;
		cout << "\t1)инкапсуляция \n\t2)абстрагирование \n\t3)полиморфизм" << endl;
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
		cout << "\tЧто обычно содержит класс?" << endl;
		cout << "\t1)данные и информацию о них \n\t2)данные и методы " << endl;
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
		cout << "\tДиректива private запрещает доступ к элементам объекта" << endl;
		cout << "\t1)из других объектов в том же файле \n\t2)только из других файлов \n\t3)из методов этого объекта " << endl;
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