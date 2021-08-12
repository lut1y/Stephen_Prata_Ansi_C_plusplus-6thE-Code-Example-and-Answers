#include <iostream>
using namespace std;
#include <cstring>	// ��� strlen(), strcpy()

struct stringy {
	char *str;		// ��������� �� ������
	int ct;			// ����� ������ (�� ������ ������� '\0')
};

// ����� ����������� ��������� ������� set() � show()
void set(stringy & s, const char str[]);
void show(const char[], int n = 1);
void show(const stringy & str, int n = 1);

int task4() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be";
	set(beany, testing); // ������ ���������� �������� ������,
	// �������� ������������ ��� �������� ����� testing
	// ���������� ������� ���� str ��������� beany ��� ���������
	// �� ����� ����, �������� testing � ����� ���� �
	// ������� ������� ct ��������� beany
	show(beany);	// ������� ��������� ���� ��������� ���� ���
	show(beany, 2);	// ������� ��������� ���� ��������� ��� ���
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
