#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queuetp.h"

const int SIZE = 5;

int task3() {
   using std::cin;
   using std::cout;
   using std::endl;
   using std::strchr;
   using namespace Worktest;

   QueueTP<Worker *> lolas;
	Worker * worker;

    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL) {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice) {
            case 'w':   worker = new Waiter;
                        break;
            case 's':   worker = new Singer;
                        break;
            case 't':   worker = new SingingWaiter;
                        break;
        }
        cin.get();
        worker->Set();
        lolas.enqueue(worker);
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++) {
        cout << endl;
        lolas.dequeue(worker);
        worker->Show();
    }
    /*for (i = 0; i < ct; i++)
        delete lolas[i];*/
    delete worker;
    cout << "Bye.\n";
	return 0;
}
