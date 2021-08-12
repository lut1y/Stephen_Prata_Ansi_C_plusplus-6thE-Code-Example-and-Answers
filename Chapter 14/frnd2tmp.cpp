// frnd2tmp.cpp -- ��������� ����� � ������������ ��������
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
private:
    T item;
    static int ct;
public:
    HasFriend(const T & i) : item(i) {ct++;}
    ~HasFriend()  {ct--; }
    friend void counts();
    friend void reports(HasFriend<T> &); // �������� �������
};

// ������ ������������� ����� ����������� ���� ������
template <typename T>
int HasFriend<T>::ct = 0;

// ����������� ���� ��� ��� ������ HasFriend<T>
void counts() {
    cout << "int count: " << HasFriend<int>::ct << "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

// ����������� ���� ��� ������ HasFriend<int>
void reports(HasFriend<int> & hf) {
    cout <<"HasFriend<int>: " << hf.item << endl;
}

// ����������� ���� ��� ������ HasFriend<double>
void reports(HasFriend<double> & hf) {
    cout <<"HasFriend<double>: " << hf.item << endl;
}

int frnd2tmp() {
    cout << "No objects declared: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "After hfi2 declared: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "After hfdb declared: ";
    counts(); 
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    // std::cin.get();
    return 0; 
}
