// proj_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include "windows.h"
#include "iostream"
using namespace std;

class Квитанция {
private:	// внутренние свойства и методы класса 

	int number;	    // номер
	char date[15];  // дата
	float summ;	    // сумма

public:		// внешне доступные свойства и методы класса

	// метод установки номера
	void set_number(int new_number) {
		number = new_number;
	}
	// метод установки даты
	void set_date(char* new_date) {
		strcpy_s(date, new_date);
	}
	// метод установки суммы
	void set_summ(float new_summ) {
		summ = new_summ;
	}
	// метод для получения номера 
	int get_number() {
		return number;
	}
	// метод для получения даты
	char *get_date() {
		return date;
	}
	// метод для получения суммы
	float get_summ() {
		return summ;
	}
	// метод вывода свойств класса на экран
	void print() {
		cout << "номер: " << number << " | дата: " << date << " | сумма: " << summ << endl;
	}
};


int main()
{
	SetConsoleOutputCP(1251);	// для корректного отображения русской кодировки 
	SetConsoleCP(1251);			// для корректного ввода русской кодировки

	Квитанция mass[5];	// массив классов

	// переменные для ввода информации
	int number;	    // номер
	char date[15];  // дата
	float summ;	    // сумма

					 // цикл ввода информации
	for (int i = 0; i < 5; i++) {
		cout << "номер: ";
		cin >> number;

		cout << "дата: ";
		cin >> date;

		cout << "сумма: ";
		cin >> summ;

		// устанавливаем свойства класса в массиве
		mass[i].set_number(number);
		mass[i].set_date(date);
		mass[i].set_summ(summ);

		cout << endl;
	}

	// выводим информацию на экран c помощью встроенного метода вывода
/*	for (int i = 0; i < 5; i++) {
		mass[i].print();
	}
	cout << endl*/;

	// выводим информацию на экран c помощью встроенных методов получения информации
	for (int i = 0; i < 5; i++) {
		cout << "номер: " << mass[i].get_number()
			 << " | дата: " << mass[i].get_date()
			 << " | сумма: " << mass[i].get_summ()
			 << endl;
	}

	_getch();
	return 0;
}