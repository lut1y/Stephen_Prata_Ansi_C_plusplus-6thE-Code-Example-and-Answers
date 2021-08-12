// studentc.cpp -- ����� Student, ������������ ���������
#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// �������� ������
double Student1::Average() const {
    if (scores.size() > 0)
        return scores.sum()/scores.size();  
    else
        return 0;
}

const string & Student1::Name() const {
    return name;
}

double & Student1::operator[](int i) {
    return scores[i];         // ���������� valarray<double>::operator[]()
}

double Student1::operator[](int i) const {
    return scores[i];
}

// �������� �����
ostream & Student1::arr_out(ostream & os) const {
    int i;
    int lim = scores.size();
    
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << scores[i] << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << " empty array ";
    return os; 
}

// ������

// ���������� ������ operator>>() �� ������ string
istream & operator>>(istream & is, Student1 & stu) {
    is >> stu.name;
    return is; 
}

// ���������� ������ getline(ostream &, const string &) �� ������ string
istream & getline(istream & is, Student1 & stu) {
    getline(is, stu.name);
    return is;
}

// ���������� ������ operator<<() �� ������ string
ostream & operator<<(ostream & os, const Student1 & stu) {
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);  // ������������� ��������� ������ ��� scores
    return os;
}
