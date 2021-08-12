#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
// getinfo() ��������� ��� ���������: ��������� �� ������ �������
// ������� �������� sudent � ��������� int, ��������������
// ���������� ��������� � �������. ������� ����������� � 
// ��������� ������ � ���������. ���� ������������ ���� �����
// ���������� �������, ���� ��� ����� ������ ������ � ��������
// ����� ��������. ������� ���������� �������������� ����������
// ��������� ���������.
int getinfo(student pa[], int n);

// display1() ��������� � �������� ��������� ��������� student
// � ���������� �� ����������.
void display1(student st);

// display2() ��������� ����� ��������� student � �������� ���������
// � ���������� �� ����������
void display2(const student *ps);

// display3() ��������� ��������� �� ������ ������� �������
// �������� student � ���������� ��������� � ���� ������� �
// ���������� ���������� ���� �������� � �������.
void display3(const student pa[], int n);

int task9() {
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while(cin.get() !='\n') continue;
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for(int i=0; i<entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

void display3(const student pa[], int n) {
	for(int i=0; i<n; i++) {
		cout << pa[i].fullname << " has hobby \"" << pa[i].hobby <<
		"\" and ooplevel " << pa[i].ooplevel << "." << endl;
	}
}

void display2(const student *ps) {
	cout << ps->fullname << " has hobby \"" << ps->hobby <<
		"\" and ooplevel " << ps->ooplevel << "." << endl; 
}

void display1(student st) {
	cout << st.fullname << " has hobby \"" << st.hobby <<
		"\" and ooplevel " << st.ooplevel << "." << endl; 
}

int getinfo(student pa[], int n) {
	char buf[SLEN];
	int i;
	
	cout << "Enter student's fullname: ";
	cin.getline(buf, SLEN);
	for(i = 0; i < n, buf[0] != '\0'; 
			i++, cin.getline(buf, SLEN)) {
		strcpy(pa[i].fullname, buf);
		cout << "Enter student's hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enter student's ooplevel: ";
		cin >> pa[i].ooplevel; cin.ignore(); 
		cout << "Enter next student's fullname: ";
	}
	return i;
}
