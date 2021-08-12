// functor.cpp -- испольование класса functor
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

template<class T>  // класс функтора определяет operator()()
class TooBig {
private:
    T cutoff;
public:
    TooBig(const T & t) : cutoff(t) {}
    bool operator()(const T & v) { return v > cutoff; }
};

void outint(int n);/* {std::cout << n << " ";}*/

int functor() {
    using std::list;
    using std::cout;
    using std::endl;
	using std::for_each;
	using std::remove_if;

    TooBig<int> f100(100); // предельное значение = 100
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10); // конструктор диапозона
    list<int> etcetera(vals, vals + 10);
 
 // C++0x can use the following instead
//  list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//  list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if(f100);               // использование именованного функционального объекта
    etcetera.remove_if(TooBig<int>(200));   // конструирование функционального объекта
    cout <<"Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    // std::cin.get();
    return 0;
}
