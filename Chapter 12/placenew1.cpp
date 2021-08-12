// placenew1.cpp  -- операция new, new с размещением, но без delete
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting {
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0) 
    {words = s; number = n; cout << words << " constructed\n"; }
    ~JustTesting() { cout << words << " destroyed\n";}
    void Show() const { cout << words << ", " << number << endl;}
};
int placenew1() {
    char * buffer = new char[BUF];       // получение блока памяти

    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;      // размещение объекта в buffer
    pc2 = new JustTesting("Heap1", 20);  // размещение объекта в куче (heap)
    
    cout << "Memory block addresses:\n" << "buffer: "
        << (void *) buffer << "    heap: " << pc2 <<endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer) JustTesting("Bad Idea", 6); // ГРУБО! Затирание без использования деструктора
    pc4 = new JustTesting("Heap2", 10);
    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();
    
    delete pc2;                          // освобождение Heap1         
    delete pc4;                          // освобождение Heap2
    delete [] buffer;                    // освобождение buffer
    cout << "Done\n";
    // std::cin.get();
    return 0;
}
