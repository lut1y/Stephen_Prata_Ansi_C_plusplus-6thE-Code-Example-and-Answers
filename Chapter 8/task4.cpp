#include <iostream>
using namespace std;
#include <cstring>	// для strlen(), strcpy()

struct stringy {
	char *str;		// указывает на строку
	int ct;			// длина строки (не считая символа '\0')
};

// Здесь размещаются прототипы функций set() и show()
void set(stringy & s, const char str[]);
void show(const char[], int n = 1);
void show(const stringy & str, int n = 1);

int task4() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be";
	set(beany, testing); // первым аргументом является ссылка,
	// Выделяет пространство для хранения копии testing
	// использует элемент типа str структуры beany как указатель
	// на новый блок, копирует testing в новый блок и
	// создает элемент ct структуры beany
	show(beany);	// выводит строковый член структуры один раз
	show(beany, 2);	// выводит строковый член структуры два раз
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	
	return 0;
}

void set(stringy & s, const char str[]) {
	s.ct = strlen(str);
	s.str = new char[s.ct + 1];
	strcpy(s.str, str);
}

void show(const char str[], int n) {
	for(int i=0; i < n; i++) {
		std::cout << str << std::endl; 
	}
}

void show(const stringy & s, int n) {
	for(int i=0; i < n; i++) {
		std::cout << s.str << std::endl; 
	}
}
