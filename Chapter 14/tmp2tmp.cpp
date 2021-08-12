// tmp2tmp.cpp -- шаблонные друзья для шаблонного класса
#include <iostream>
using std::cout;
using std::endl;

// прототиты шаблонов
template <typename T> void counts();
template <typename T> void report(T &);

// шаблонный класс
template <typename TT>
class HasFriendT {
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i) : item(i) {ct++;}
    ~HasFriendT() { ct--; }
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;

// определения дружественны функций для шаблона
template <typename T>
void counts() {
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf) {
    cout << hf.item << endl;
}

int tmp2tmp() {
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);  // генерирует report(HasFriendT<int> &) 
    report(hfi2);  // генерирует report(HasFriendT<int> &)
    report(hfdb);  // генерирует report(HasFriendT<double> &)
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double>() output:\n";
    counts<double>();
    // std::cin.get();
    return 0; 
}
