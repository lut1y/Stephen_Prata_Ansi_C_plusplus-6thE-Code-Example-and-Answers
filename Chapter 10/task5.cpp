#include <iostream>
#include "stack.h"

int task5() {
	using namespace std;
    Stack st; // создание пустого стека
    char ch;
//    unsigned long po;
	customer po;
	double sum = 0.0;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': cout << "Enter a customer's fullname to add: ";
                       cin >> po.fullname;
                       cout << "Enter customer's playment to add: ";
                       cin >> po.payment;
                       if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(po);
                       break;
             case 'P':
             case 'p': if (st.isempty())
                           cout << "stack already empty\n";
                       else {
                       	   sum += po.payment;
                           st.pop(po);
                           cout << "PO #" << po.fullname << " popped\n";
                       }
                       break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Summa: " << sum << endl;
    cout << "Bye\n";
    return 0; 
}
